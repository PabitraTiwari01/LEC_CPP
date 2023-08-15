#include <iostream>
using namespace std;
class a
{
   int x;

public:
   void getnum(int x)
   {
      this->x = x;
   }

   void shownum()
   {
      cout << "The number is :" << x << endl;
   }
};
int main()
{
   a obj1, obj2;
   obj1.getnum(5);
   obj1.shownum();
   obj2.getnum(9);
   obj2.shownum();
}
