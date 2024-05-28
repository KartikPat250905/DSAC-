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

void deletenode(Node *tail, int element)
{
    if(tail == NULL)
    {
        cout << "List is empty"<< endl;
    }
    else
    {
        Node*prev = tail;
        Node*curr = tail->next;
        while(curr->data != element)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        curr->next =NULL;
        delete curr;
    }
}
//Checks if a given list is circular from head
bool isCircular(Node* head){
    if(head == NULL)
    {
        return true;
    }
    Node*temp = head;
    do
    {
        temp = temp->next;
    }while(temp != NULL && temp != head);
    if (temp == head)
        return true;
    return false;
}
//detects loop in middle of the linked list uses hashmap
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

//gets starting node of the loop using floyd algo
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
    Node*tail = NULL;
    Insertnode(tail,5,3);
    Print(tail);
    Insertnode(tail,3,78);
    Print(tail);
    Insertnode(tail,78,48);
    Print(tail);
    Insertnode(tail,48,612);
    Print(tail);


}