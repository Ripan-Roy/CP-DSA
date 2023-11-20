#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;
    // constructor
    node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    // destructor
    ~node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory has been free for node with data: " << value << endl;
    }
};

void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void insertAtHead(node *head, int data)
{
    node *node1 = new node(data);
    node1->next = head;
    head->prev = node1;
    head = node1;
}

void insertAtTail(node *head, int data)
{
    node *temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    node *node1 = new node(data);
    temp->next = node1;
    node1->prev = temp;
}

 

int main()
{
    node *node1 = new node(20);

    node *head = node1;
    print(head);

    return 0;
}