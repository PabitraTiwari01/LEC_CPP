#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string n, int a)
    {
        name = n;
        age = a;
    }
};

Person createPerson(string name, int age)
{
    return Person(name, age);
}

int main()
{
    Person p1 = createPerson("Alice.", 25.);
    cout << "Name: " << p1.name <<endl;
    cout<< " Age: " << p1.age << endl;
    return 0;
}