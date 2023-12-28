#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Make a Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node() {
        if(this -> next != NULL)
        {
            delete next ;
            this -> next = NULL ;
        }
    }
};

void insertAtBegin(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void deleteAtpos(Node *&head, int position)
{
    if(position == 1)
    {
        Node* temp = head ;
        head = head -> next ;
        temp -> next = NULL ;
        delete temp ;
    }
    else{
    int count = 1;
    Node *current = head;
    Node *previous = NULL;

    while (count < position)
    {
        previous = current;
        current = current->next;
        count++;
    }

    previous->next = current->next ;
    current->next = NULL; 
    delete current ; 
    }
}

void print(Node *&head)
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

    print(head);
    insertAtBegin(head, 12);
    print(head);
    insertAtBegin(head, 14);
    print(head);
    insertAtBegin(head, 16);
    print(head);
    cout << "Now Deletion " << endl ;
    deleteAtpos(head, 1);
    print(head);
    return 0;
}