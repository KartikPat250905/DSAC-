//Implemented delete and insert function in a single linked list
#include <map>
#include <iostream>
#include <vector>
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


void Insertathead(Node *&head, int data)
{
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void Insertattail(Node *&tail, int data)
{
    Node *newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
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

void deletepos(int pos,Node *&head)
{
    Node *temph = head;
    Node*tempa = head->next;
    if(pos == 1)
    {
        head = head->next;
        temph->next = NULL;
        delete temph;
        return;
    }
    int count = 1;
    while(count < pos-1)
    {
        temph = temph->next;
        tempa = tempa->next;
    }
    temph->next = tempa->next;
    tempa->next = NULL;
    delete tempa;
}

void Print(Node *&head)
{
    Node * temp = head;
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

//detects loop in a linked list
bool detectloop(Node *head)
{
    if(head == NULL)
        return false;
    map <Node *,bool> visited;
    Node *temp = head;
    while(temp != NULL)
    {
        if(visited[temp] == true)
            return true;
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}


bool floydetectloop(Node *head)
{
    if (head == NULL)
    {
        return false;
    }
    Node *fast = head;
    Node *slow = head;
    while(fast != NULL && slow != NULL)
    {
        slow = slow->next;
        fast = fast->next;
        if (fast != NULL)
            fast = fast ->next;
        if (slow == fast)
            return true;
    }
    return false;
}

Node *getstartingnode(Node *head)
{
    if (head == NULL)
        return NULL;
        Node *fast = head;
    Node *slow = head;
    while(fast != NULL && slow != NULL)
    {
        slow = slow->next;
        fast = fast->next;
        if (fast != NULL)
            fast = fast ->next;
        if (slow == fast)
            break;
    }
    slow = head;
    while(slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}

//remove the loop and makes the loop into a single linked list
void removeloop(Node *&head)
{
    if (head == NULL)
        return ;
    Node *start = getstartingnode(head);
    Node *temp = start;
    while(temp -> next != start)
    {
        temp = temp->next;
    }
    temp ->next = NULL;
}

int main()
{
    Node *n1 = new Node(25);
    Node *head = n1;
    Node*tail = n1;
    Insertattail(tail, 26);
    Print(head);
    Insertinmiddle(head,27,3,tail);
    Print(head);
    //this line creates a loop
    tail->next = head ->next;
    Node*ans = getstartingnode(head);
    printf("%d",ans->data);
    removeloop(head);
    Print(head);
}