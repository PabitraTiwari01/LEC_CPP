#include <iostream>
#define MAX 2 // maximum stack length is 2

using namespace std;

class stack
{
protected:
    int s[MAX];
    int top;

public:
    class FULL // exception class
    {
    };
    class EMPTY // exception class
    {
    };
    stack() // constructor
    {
        top = -1;
    }

    void push(int x)
    {
        if (top == MAX - 1)
            throw FULL();
        else
            s[++top] = x;
    }

    int pop()
    {
        if (top == -1)
            throw EMPTY();
        else
            return s[top--];
    }
};

int main()
{
    stack s;
    try
    {
        s.push(11);
        s.push(22);
        s.push(33); // This will throw the FULL exception, as the stack is already full with 2 elements

        cout << "\nNumber popped: " << s.pop();
        cout << "\nNumber popped: " << s.pop();
        cout << "\nNumber popped: " << s.pop(); // This will throw the EMPTY exception, as the stack is empty now
        cout<<"\nNumber popped:"<<s.pop();
    }
    catch (stack::FULL)
    {
        cout << "\nException: stack is full" << endl;
    }
    catch (stack::EMPTY)
    {
        cout << "\nException: stack is empty" << endl;
    }

    return 0;
}
