#include <iostream>
using namespace std;
class areacircle
{
private:
    int r;
    float a;

public:
    float area()
    {
        cout << "enter the radius of the circle = ";
        cin >> r;
        a = 3.14 * r * r;
        return a;
    }
};
void main()
{
    areacircle c;
    // c.area();
    float b;
    b = c.area();
    cout << endl
         << "area = " << b;
}