#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtEnd(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next; // or we can write tail = temp ;cls
    
}

void print(Node *&tail)
{
    Node *temp = tail;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(10);
    Node* head = node1 ; 
    Node *tail = node1;

    print(head);
    insertAtEnd(tail, 12);
    print(head);
    insertAtEnd(tail, 14);
    print(head);

    return 0;
}
