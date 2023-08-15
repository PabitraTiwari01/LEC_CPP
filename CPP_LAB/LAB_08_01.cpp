 #include <iostream>
using namespace std;

class Polygon
{
protected:
    int length;
    int height;

public:
    Polygon(int l, int h)
    {
        length = l;
        height = h;
    }

    virtual int Area() = 0;
};

class Rectangle : public Polygon
{
public:
    Rectangle(int l, int h) : Polygon(l, h) {}

    int Area() 
    {
        return length * height;
    }
};

class Triangle : public Polygon
{
public:
    Triangle(int l, int h) : Polygon(l, h) {}

    int Area() 
    {
        return (length * height) / 2;
    }
};

int main()
{
    Rectangle recobj(12, 8);
    Triangle triobj(16, 9);

    cout << "Area of rectangle = " << recobj.Area() << endl;
    cout << "Area of triangle = " << triobj.Area() << endl;

    return 0;
}