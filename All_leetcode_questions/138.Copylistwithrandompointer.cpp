#include <iostream>
#include <unordered_map>
using namespace std;
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
//Time O(n) and Space O (n) use map to map the whole linked list and then use it.
class Solution {
private:
    void Insertattail(Node *& tail,Node *& head, int data)
    {
        if (tail == NULL)
        {
            tail = new Node(data);
        }
        else
        {
            tail->next = new Node (data);
            tail = tail -> next;
        }   
    }
public:
    Node* copyRandomList(Node* head) {
        Node * temp = head;
        if (temp == NULL)
            return NULL;
        Node * anshead = new Node(-1);
        Node * anstail = anshead;
        anshead -> next = temp -> next;
        do
        {
            Insertattail(anstail ,anshead, temp -> val);
            temp = temp -> next;
        }while(temp != NULL);
        unordered_map<Node *, Node *>mapping;
        temp = head;
        Node * temp2 = anshead -> next;
        while(temp != NULL && temp2 != NULL)
        {
            mapping[temp] = temp2;
            temp = temp -> next;
            temp2 =temp2 -> next;
        }
        temp2 = anshead->next;
        temp = head;
        while(temp2 != NULL)
        {
            temp2 -> random = mapping[temp -> random];
            temp2 = temp2 -> next;
            temp = temp -> next;
        }
        return anshead -> next;
    }
};