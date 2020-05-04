
#include <iostream>
using namespace std;


struct node
{
    int data;
     node *next;
};
struct node *head;

class link{
    public:
    void run(){
    int choice = 0;
    while (choice != 9)
    {
        
        cout<<endl<<endl<<"*********Main Menu*********"<<endl;
        cout<<endl<<"Choose one option from the following list ..."<<endl;
        cout<<"\n==============================================="<<endl;
        cout<<"\n1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n5.Delete from last\n6.Delete node after specified location\n7.Search for an element\n8.Show\n9.Exit\n";
        cout<<"\nEnter your choice?"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            beginsert();
            break;
        case 2:
            lastinsert();
            break;
        case 3:
            randominsert();
            break;
        case 4:
            begin_delete();
            break;
        case 5:
            last_delete();
            break;
        case 6:
            random_delete();
            break;
        case 7:
            search();
            break;
        case 8:
            display();
            break;
        case 9:
            exit(0);
            break;
        default:
            cout<<"Please enter valid choice..";
        }
    }
}
void beginsert()
{
    struct node *ptr;
    int item;
    ptr = new node;
    if (ptr == NULL)
    {
        cout<<"\nOVERFLOW";
    }
    else
    {
        cout<<"\nEnter value\n";
        cin>>item;
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        cout<<"\nNode inserted";
    }
}
void lastinsert()
{
    struct node *ptr, *temp;
    int item;
    ptr = new node;
    if (ptr == NULL)
    {
        cout<<"\nOVERFLOW";
    }
    else
    {
        cout<<"\nEnter value?\n";
        cin>>item;
        ptr->data = item;
        if (head == NULL)
        {
            ptr->next = NULL;
            head = ptr;
            cout<<"\nNode inserted";
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            cout<<"\nNode inserted";
        }
    }
}
void randominsert()
{
    int i, loc, item;
    struct node *ptr, *temp;
    ptr = new node;
    if (ptr == NULL)
    {
        cout<<"\nOVERFLOW";
    }
    else
    {
        cout<<"\nEnter element value";
        cin>>item;
        ptr->data = item;
        cout<<"\nEnter the location in the linked list  after which you want to insert "<<endl;
        cin>>loc;
        loc=loc-1;
        temp = head;
        for (i = 0; i < loc; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                cout<<"\ncan't insert\n";
                return;
            }
        }
        ptr->next = temp->next;
        temp->next = ptr;
        cout<<"\nNode inserted";
    }
}
void begin_delete()
{
    struct node *ptr;
    if (head == NULL)
    {
        cout<<"\nList is empty\n";
    }
    else
    {
        ptr = head;
        head = ptr->next;
        delete ptr;
        cout<<"\nNode deleted from the begining ...\n";
    }
}
void last_delete()
{
    struct node *ptr, *ptr1;
    if (head == NULL)
    {
        cout<<"\nlist is empty";
    }
    else if (head->next == NULL)
    {
        head = NULL;
        delete head;
        cout<<"\nOnly node of the list deleted ...\n";
    }

    else
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr1 = ptr;
            ptr = ptr->next;
        }
        ptr1->next = NULL;
        delete ptr;
        cout<<"\nDeleted Node from the last ...\n";
    }
}
void random_delete()
{
    struct node *ptr, *ptr1;
    int loc, i;
    cout<<"\n Enter the location of the node after which you want to perform deletion \n";
    cin>>loc;
    ptr = head;
    for (i = 0; i < loc; i++)
    {
        ptr1 = ptr;
        ptr = ptr->next;

        if (ptr == NULL)
        {
            cout<<"\nCan't delete";
            return;
        }
    }
    ptr1->next = ptr->next;
    delete ptr;
    cout<<"\nDeleted node %d ", loc + 1;
}


void display()
{
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        cout<<"Nothing to print";
    }
    else
    {
        cout<<"\nprinting values . . . . .\n";
        while (ptr != NULL)
        {
            cout<<ptr->data<<" ";
            ptr = ptr->next;
        }
    }
}


void search(){
    int value, pos = 0;
    bool flag = false;
    if (head == NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }
    cout<<"Enter the value to be searched: ";
    cin>>value;
    struct node *s;
    s = head;
    while (s != NULL)
    {
        pos++;
        if (s->data == value)
        {
            flag = true;
            cout<<"Element "<<value<<" is found at position "<<pos<<endl;
        }
        s = s->next;
    }
    if (!flag)
        cout<<"Element "<<value<<" not found in the list"<<endl;  
}
};
    

int main()
{

cout<<endl<<"\tLinked list by nj";  
link r;
r.run();
return 0;
}
