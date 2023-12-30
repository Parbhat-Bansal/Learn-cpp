#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    ~Node()
    {
        if (this -> next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};

void insertAtEnd(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void deleteAtPos(Node *&head, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        int count = 1;
        Node *current = head;
        Node *previous = NULL;
        while (count < position)
        {
            previous = current;
            current = current->next;
            count++;
        }
        current->prev = NULL;
        previous->next = current->next;
        current->next = NULL;
        delete current;
        cout << endl << endl << "Now the value of current is " << current -> data ;
    }
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int getlength(Node *&head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
int main()
{

    int x, y, z;
    cout << "Enter first element of linked list : ";
    cin >> x;
    Node *node1 = new Node(x);
    Node *head = node1;
    Node *tail = node1;
    cout << endl
         << "Enter the length of linked list : ";
    cin >> y;
    cout << endl
         << "Enter elements in linkedlist : ";
    for (int i = 1; i <= y; i++)
    {
        cin >> z;
        insertAtEnd(tail, z);
    }
    print(head);
    int len = getlength(head);
    cout << endl
         << "The length of linked list is " << len;
    int p;
    cout << endl
         << "Enter position to be delete : ";
    cin >> p;
    if (p > len || p < 0)
    {
        cout << endl
             << "Enter a valid position ";
        return 1;
    }
    else
    {
        cout << endl
             << "Now deletion ";
        deleteAtPos(head, p);
        print(head);

        cout << endl
             << "Now the length of Linked-List is " << getlength(head);
    }
    return 0;
}