#include<iostream>
using namespace std;
class evenodd
{
    private:
  float a;
    public:
    void even(int a)
    {
        if(a%2==0)
        {
            cout<<"This is even";
        }
        else
        {
            cout<<"ye odd hai";

        }
    }
};
void main()
{
    int a;
    cout<<"enter the number = ";
    cin>>a;
    evenodd e;
    e.even(a);
}
