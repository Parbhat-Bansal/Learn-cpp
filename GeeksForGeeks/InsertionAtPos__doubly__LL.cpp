#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertAtBegin(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
void insertAtEnd(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtPos(Node *head, Node *&tail, int position, int d)
{
    if (position == 1)
    {
        insertAtBegin(head, d);
        return;
    }

    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL)
    {
        insertAtEnd(tail, d);
        return;
    }
    Node *nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
    temp->next->prev = nodetoinsert;
    nodetoinsert->prev = temp;
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
// only to grt the length of a linkedlist
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
    int a;
    cout << "Enter 1st element of linkedlist : ";
    cin >> a;
    Node *node1 = new Node(a);
    Node *head = node1;
    Node *tail = node1;
    int b;
    cout << endl
         << "Enter length of a linkedlist : ";
    cin >> b;
    cout << endl
         << "Enter element : ";
    int c;
    for (int i = 1; i <= b; i++)
    {
        cin >> c;
        insertAtEnd(tail, c);
    }
    print(head);

    int length = getlength(head);
    cout << endl
         << "Now insert at position : ";
    int d;
    cout << endl
         << "Enter position at element be insert : ";
    cin >> d;
    if (d < length || d > length)
    {
        cout << "Enter valid position " << endl;
        return 1 ;
    }
    int e;
    cout << endl
         << "Enter element to insert : ";
    cin >> e;

    insertAtPos(head, tail, d, e);
    print(head);

    return 0;
}