#include <iostream>
#include <vector>
#include <map>
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

void Insertnode(Node *&tail,int element,int d)
{
    if(tail == NULL)
    {
        Node*newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        Node *curr = tail;
        while(curr->data != element)
        {
            curr = curr->next;
        }
        Node*temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void Insertattail(Node *&tail, int data)
{
    Node *newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}

void Insertathead(Node *&head, int data)
{
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void Insertinmiddle(Node *&head, int data, int pos,Node*tail)
{
    if(pos == 1)
    {
        Insertathead(head,data);
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
         Insertattail(tail,data);
         return;
    }
       
    newNode ->next = temp ->next;
    temp->next = newNode;
}

void Print(Node * tail)
{
    Node *temp = tail;
    do
    {
        printf("%d ",tail->data);
        tail = tail->next;
    }while(tail != temp);
    printf("\n");
}

int main()
{
    Node *n1 = new Node(30);
    Node *head = n1;
    Node*tail = n1;
    Insertinmiddle(head,25,1,tail);
    Insertinmiddle(head,21,2,tail);
    Insertinmiddle(head,20,3,tail);
    Insertinmiddle(head,19,4,tail);
    //Print(head);
    vector<Node *> ans;
    ans = spliter(head);
    Print(ans[1]);
    Print(ans[2]);
}