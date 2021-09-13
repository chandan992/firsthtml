#include<iostream>
using namespace std;
class areacircle
{
    private:
    int r;
    float a;
    
    public:
    void area()
    {
        cout<<"enter the radius of the circle = ";
        cin>>r;
        a=3.14*r*r;
        cout<<a;
    }
};
void main()
{
    areacircle c;
    c.area();

}