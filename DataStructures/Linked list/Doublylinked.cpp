#include <iostream>
#include <vector>
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
};

void print(Node*head)
{
    while(head != NULL)
    {
        printf("%d ",head->data);
        head = head->next;
    }
    printf("\n");
}

int length(Node*head)
{
    int len = 0;
    while(head != NULL)
    {
        len++;
        head = head->next;
    }
    return len;
}

void insertathead(Node *&head,int data,Node *&tail)
{
    if(head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    Node *newNode = new Node(data);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insertattail(Node *&tail, int data,Node *&head)
{
    if(tail == NULL)
    {
        Node *newNode = new Node(data);
        tail = newNode;
        head = newNode;
        return;
    }
    Node *newNode = new Node(data);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insertinmiddle(Node *&head, int data, int pos,Node *tail)
{
    if(pos == 1)
    {
        insertathead(head,data,tail);
        return;
    }
    Node *temp = head;
    Node *newNode = new Node(data);
    int count = 1;
    while(temp != NULL && count < pos-1)
    {
        temp = temp ->next;
        count ++;
    }
    if(temp->next == NULL)
    {
         insertattail(tail,data,head);
         return;
    }
       
    newNode ->next = temp ->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}

void deletenode(int pos,Node *&head,Node *&tail)
{
    Node *temp = head;
    if (pos == 1)
    {
        temp ->next->prev = NULL;
        temp->next = NULL;
        head = head->next;
        delete temp;
    }
    Node *curr = head;
    Node *prev = NULL;
    int count = 1;
    while(count < pos)
    {
        count ++;
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    curr->prev = NULL;
    curr->next = NULL;
    delete curr;
}

int main()
{  
    Node *n1 = new Node(10);
    Node *head= n1;
    Node *tail = n1;
    print(head);
    insertathead(head,25,tail);
    print(head);
    insertattail(tail,2633,head);
    print(head);
    insertinmiddle(head,284,2,tail);
    print(head);
    deletenode(4,head,tail);
    print(head);
}