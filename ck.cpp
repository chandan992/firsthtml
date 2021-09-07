// this program is made by chandan kumar
#include <iostream>
using namespace std;
int main()
{
   int arr[984], size, pos, val;
   cout << "Enter the size of an array : ";
   cin >> size;
   cout << "Enter " << size << " values in array : " << endl;
   for (int i = 0; i < size; i++)
   {
       cin >> arr[i];
   }
   cout << "Enter the position to perform updation : ";
   cin >> pos;
   cout << "Enter the new value to update the element : ";
   cin >> val;
   cout << "After updation : " << endl;
   for (int i = 0; i < size; i++)
   {
       cout << arr[i];
       cout << " ";
   }
   cout << endl;
   cout << "Before updation : " << endl;
   arr[pos - 1] = val;
   for (int i = 0; i < size; i++)
   {
       cout << arr[i];
       cout << " ";
   }
   cout << endl;
 
   return 0;
}
