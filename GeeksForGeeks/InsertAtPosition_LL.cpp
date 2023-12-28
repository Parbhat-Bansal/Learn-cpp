#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Make a constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtBegin(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtEnd(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPos(Node *&tail, Node *&head, int position, int d)
{
    // If insert at position 1
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
    // If insert at last postion
    if (temp->next == NULL)
    {
        insertAtEnd(tail, d);
        {
            return;
        }
    }
    // Insertioan at position
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void print(Node *head)
{
    Node *temp = head;

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
    Node *head = node1;
    Node *tail = node1;

    print(head);
    insertAtEnd(tail, 12);
    print(head);
    insertAtEnd(tail, 16);
    print(head);
    cout << "Now insert element at given position " << endl;
    insertAtPos(tail, head, 3, 14);
    print(head);
    insertAtPos(tail, head, 3, 15);
    print(head);

    cout << endl;
    cout << "head : " << head->data << endl;
    cout << "tail : " << tail->data;
    return 0;
}
