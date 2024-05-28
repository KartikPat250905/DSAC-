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

class Solution
{
private:
    int checker(ListNode *head, int k)
    {
        int count = 0;
        while (head != NULL && count < k)
        {
            head = head->next;
            count++;
        }
        return count == k;
    }

public:
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        if (head == NULL)
            return NULL;
        if (!checker(head, k))
            return head;
        ListNode *next = NULL;
        ListNode *curr = head;
        ListNode *prev = NULL;
        int count = 0;
        while (curr != NULL && count < k)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        if (next != NULL)
        {
            head->next = reverseKGroup(curr, k);
        }
        return prev;
    }
};