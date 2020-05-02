#include <iostream>
using namespace std;
class stack
{
private:
    int stack[100], i, j, choice = 0, n, top = -1;
    void push()
    {
        int val;
        if (top == n)
            cout << "Overflow" << endl;
        else
        {
            cout << "enter the value: ";
            cin >> val;
            top = top + 1;
            stack[top] = val;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "underflow";
        }
        else
            top = top - 1;
    }
    void show()
    {
        for (i = top; i >= 0; i--)
        {

            cout << stack[i] << endl;
        }
        if (top == -1)
        {

            cout << "Stack is empty";
        }
    }

public:
    void run()
    {
        cout << "Enter the number of elements in the stack ";
        cin >> n;
        cout << "*********Stack operations using array*********";
        cout << endl
             << "----------------------------------------------" << endl;
             
        while (choice != 4)
        {

            cout << "Chose one from the below options..." << endl;
            cout << "\n1.Push\n2.Pop\n3.Show\n4.Exit" << endl;
            cout << "\n Enter your choice \n"
                 << endl;
            cin >> choice;

            switch (choice)
            {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                show();
                break;
            }
            case 4:
            {

                cout << "Exiting....";
                break;
            }
            default:
            {
                cout << "Please Enter valid choice ";
            }
            };
        }
    }
};

int main()
{

    stack a;
    a.run();
    return 0;
}
