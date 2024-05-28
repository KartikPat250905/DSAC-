#include <iostream>
using namespace std;

//Brute approach
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
private:
    int getlength(ListNode *head)
    {
        int len = 0;
        while (head != NULL)
        {
            head = head->next;
            len++;
        }
        return len;
    }

public:
    ListNode *middleNode(ListNode *head)
    {
        int len = getlength(head) / 2;
        int count = 0;
        ListNode *temp = head;
        while (count < len)
        {
            temp = temp->next;
            count++;
        }
        return temp;
    }
};

//Optimised solution 
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* fast = head;
        ListNode*slow = head;

        while(fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
};



