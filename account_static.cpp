#include <iostream>
using namespace std;
class account
{
private:
    int accno;
    static float rate;
    float interest, amount;

public:
    void read()
    {
        cout << "enter the account no = ";
        cin >> accno;
        cout << "account balance = ";
        cin >> amount;
    }
    void calculate()
    {
        interest = rate * amount / 100;
        amount = amount + interest;
        cout << "new amount = " << amount<<endl;
    }
    static void modify(float incr)
    {
        rate = rate + incr;
        cout << "new rate is = " << rate;
    }
};
float account::rate = 1;
int main()
{
    account c;
    c.read();
    account::modify(1);
    c.calculate();
    return 0;
}
