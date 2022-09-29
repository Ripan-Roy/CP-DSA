#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    // constructor
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(node *&head, int data)
{
    // new node create
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}
void insertAtTail(node *&tail, int data)
{
    node *temp = new node(data);
    tail->next = temp;
    tail = tail->next;
}

void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    node *node1 = new node(20);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    node *head = node1; 
    node *tail = node1;
    print(head);
    insertAtHead(head, 12);
    print(head);
    insertAtHead(head, 15);
    print(head);
    return 0;
}