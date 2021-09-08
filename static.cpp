#include<iostream>
using namespace std;
class account
{
    private:
int accno;
float balance,intrest;
static float rate;
public:
void read()
{
    cout<<"enter the value of account no =";
    cin>>accno;
    cout<<"enter the balance";
cin>>balance;
}
void calculate ()
{
    intrest = rate*balance/100;
    balance = balance+intrest;
    cout<<" New balance ="<<balance;
}
static void modifyrate (float incr)
{
    rate = rate+incr;
    cout<<endl<<"new value of rate is "<<rate;

}
};
float account::rate =4.5;
void main ()
{
    account c1;
    c1.read();
    c1.calculate();
    account::modifyrate(0.18);

}
