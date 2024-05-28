/*This is a bit different than adding two numbers since the number are already 
given in reverse in the input so we just need to add and take care of carry .The 
output is expected in reverse order for more details read the question*/

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
private:
    void Insertattail(ListNode *&head,ListNode * &tail, int data)
    {
        if (head == NULL)
        {
            head = new ListNode(data);
            tail = head;
            return ;
        }
        else
        {
            ListNode * temp = new ListNode(data);
            tail -> next = temp;
            tail = tail -> next;
        }   
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        int sum;
        int digit;
        ListNode * anshead = NULL;
        ListNode * ans = NULL;
        while (l1 != NULL && l2 != NULL)
        {
            sum = carry + l1 -> val + l2 -> val;
            digit = sum % 10;
            carry = sum / 10;
            Insertattail(anshead,ans, digit);
            l1 = l1 -> next;
            l2 = l2 -> next;
        }
        while (l1 != NULL)
        {
            sum = carry + l1 -> val;
            digit = sum % 10;
            carry = sum /10;
            Insertattail(anshead,ans,digit);
            l1 = l1 -> next;
        }
        while (l2 != NULL)
        {
            sum = carry + l2 -> val;
            digit = sum % 10;
            carry = sum /10;
            Insertattail(anshead,ans,digit);
            l2 = l2 -> next;
        }
        while (carry != 0)
        {
            Insertattail(anshead,ans,carry);
            carry = carry /10;
        }
        return anshead;
    }
};