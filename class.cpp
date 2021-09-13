#include<iostream>
using namespace std;
class sum{
private:
int a ,b,c;
public:
void add()
{
cout<<"enter the value of a and b"<<endl;
cin>>a>>b;
c=a+b;
cout<<"you answr is"<<c<<endl;
}

};
int main()
{
    sum n;
    n.add();

}

