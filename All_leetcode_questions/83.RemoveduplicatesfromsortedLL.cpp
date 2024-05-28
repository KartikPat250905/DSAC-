#include <iostream>
#include <vector>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL)
            return NULL;
        ListNode * curr = head;
        ListNode *temp = NULL;
        while (curr != NULL)
        {

            if (curr -> next != NULL && (curr->val == curr->next->val))
            {  
                ListNode *nodetodelete = curr -> next;
                ListNode *nextnext = curr->next->next;
                
                curr -> next = nextnext;
                delete nodetodelete;
            }
            else
            {
                curr = curr ->next;
            }
        }   
        return head;
    }
};