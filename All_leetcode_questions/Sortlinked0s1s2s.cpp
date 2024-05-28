#include <iostream>
#include <vector>
using namespace std;
//Another approach is to count the numbers of 0,1,2 replace in original one after
//one traversal

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};


void Populate(Node *&tail, Node *temp)
{
    tail -> next = temp ;
    tail  = temp;
}

Node* sortList(Node *head){
    Node * zerohead = new Node(-1);
    Node *zerotail = zerohead;
    Node * onehead  = new Node(-1);
    Node * onetail = onehead;
    Node *twohead = new Node(-1);
    Node * twotail = twohead;

    Node * temp = head;

    while (temp != NULL)
    {
        int value = temp -> data;

        if (value == 0)
        {
            Populate(zerotail, temp);
        }
        else if (value == 1)
        {
            Populate(onetail,temp);
        }
        else if(value == 2)
        {
            Populate(twotail, temp);
        }
        temp = temp->next;
    }

    if (onehead -> next != NULL)
    {
        zerotail -> next = onehead -> next;
    }
    else
    {
        zerotail -> next = twohead -> next;
    }
    onetail -> next = twohead -> next;
    twotail -> next = NULL;

    head = zerohead -> next;
    delete zerohead;
    delete onehead;
    delete twohead;

    return head;
}