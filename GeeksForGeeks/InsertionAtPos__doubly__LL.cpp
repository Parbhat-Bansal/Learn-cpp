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

void insertAtEnd(Node *&head, Node *&tail, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtBegin(Node *&head, Node *&tail, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtPos(Node *&head, Node *&tail, int position, int d)
{
    if (position == 1)
    {
        insertAtBegin(head, tail, d);
        cout << "Called insertAtBegin() " << endl;
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
        insertAtEnd(head, tail, d);
        cout << "Called insertAtEnd() " << endl;
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
    Node *head = NULL;
    Node *tail = NULL;
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
        insertAtEnd(head, tail, c);
    }
    print(head);
    int length = getlength(head);
    cout << endl
         << "The length is " << length;

    cout << endl
         << "head " << head->data << " "
         << "tail " << tail->data;
    cout << endl
         << "Now insert at position -----> ";
    int d;
    cout << endl
         << "Enter position at element be insert : ";
    cin >> d;
    if (d > length + 1 || d <= 0)
    {
        cout << "Enter valid position " << endl;
        return 1;
    }
    int e;
    cout << endl
         << "Enter element to insert : ";
    cin >> e;

    insertAtPos(head, tail, d, e);
    print(head);
    cout << endl
         << "head " << head->data << " "
         << "tail " << tail->data;
    return 0;
}