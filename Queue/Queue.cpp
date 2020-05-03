#include <iostream>
using namespace std;
const int maxsize = 5;
int queue[maxsize];

class Queue
{
 private:
    int front = -1, rear = -1;
    int choice =0;
public:

  void insert ()
  {
    int item;
      cout << "enter the element" << "\n";
      cin >> item;
    if (rear == maxsize - 1)
      {
	cout << "overflow" << endl;
	return;
      }
    if (front == -1 && rear == -1)
      {
	front = 0;
	rear = 0;
      }
    else
      {
	rear = rear + 1;
      }
    queue[rear] = item;
    cout << "value inserted" << endl;
  }

  void del ()
  {
    int item;
    if (front == -1 || front > rear)
      {
	cout << "underflow" << endl;
	return;
      }
    else
      {
	item = queue[front];
	if (front == rear)
	  {
	    front = -1;
	    rear = -1;
	  }
	else
	  {
	    front = front + 1;
	  }
	cout << "value deleted" << endl;
      }
  }

  void display ()
  {
    int i;
    if (rear == -1)
      {
	cout << "empty queue" << endl;
      }
    else
      {
	cout << "printing values......" << endl;
	for (i = front; i <= rear; i++)
	  {
	    cout << queue[i] << endl;
	  }
      }
  }
  void run ()
  {
    while (choice != 4)
      {
	cout << "1.insert an element" << endl << "2.delete the element" <<
	  endl << "3.didplay the queue" << endl << "4.exit" << endl;
	cout << "enter your choice ?" << endl;
	cin >> choice;
	switch (choice)
	  {
	  case 1:
	    {
	      insert ();
	      break;
	    }
	  case 2:
	    {
	      del ();
	      break;
	    }
	  case 3:
	    {
	      display ();
	      break;
	    }
	  case 4:
	    {
	      exit (0);
	      break;
	    }
	  default:
	    {
	      cout << "enter valid choice" << endl;
	    }
	  };
      }

  }
};


  int main ()
  {
    cout << "   " << "MAIN MENU" << endl;
    Queue a;
    a.run ();
    return 0;
  }
