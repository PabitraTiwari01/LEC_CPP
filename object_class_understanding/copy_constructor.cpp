#include <iostream>
using namespace std;
//example of a copy constructor
class Wall{
    private:
    double length;
    double height;
    public:
    Wall(double l,double h){
        length=l;
        height=h;

    }
    Wall(Wall &obj)
    {
        length=obj.length;
        height=obj.height;

    }
    double calculateArea()
    {
    return length*height;
    }

};
int main(){
Wall wall1(10.2,12.3);
cout<<"Area of the wall is:"<<wall1.calculateArea()<<endl;
Wall wall2=wall1;
cout<<"Area of th wall2 is"<<wall2.calculateArea();
return 0;

}
