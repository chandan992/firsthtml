#include<iostream>
using namespace std;
class account
{
    private:
    int accno;
    static float rate;
    float interest,amount;
    public:
    void read()
    {
        cout<<"enter the account no = ";
        cin>>accno;
        cout<<"account balance = ";
        cin>>amount;

    }
    void calculate()
    {
        interest=rate*amount/100;
        amount=amount+interest;
        cout<<"new amount = "<<amount;


    }

};
float account::rate=1;
void main()
{
    account c;
    c.read();
    c.calculate();

}