#include <iostream>
using namespace std;
class god{
private:
    int a;

public:
    void t()
    {
        cout << "enter the number" << endl;
        cin>>a;
        if (a == 1)
        {
            cout << "true";
        }
        else if (a == 0)
        {
            cout << "false";
        }
        else
        {
            cout << "bhai ky kr rha hai";
        }
    }
    };
    int main()
    {
        god f;
        f.t();
        return 0;
    }
