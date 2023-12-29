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
    cout << "Enter first element in Linkedlist : ";
    cin >> a;
    Node *node1 = new Node(a);
    Node *head = node1;
    int b;
    cout << endl
         << "Enter length of a linkedlist : ";
    cin >> b;
    int c;
    cout << endl
         << "Enter elements : " << endl;
    ;
    for (int i = 1; i <= b; i++)
    {
        cout << i << " = ";
        cin >> c;
        insertAtBegin(head, c);
    }
    print(head);
    int len = getlength(head);
    cout << "The length of linked list is : " << len << endl;
    return 0;
}
