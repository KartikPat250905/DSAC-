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

//We store the linked list in an array and then check it if it is a palindrome
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector <int> arr;
        ListNode * temp = head;
        while (temp != NULL)
        {
            arr.push_back(temp->val);
            temp = temp -> next;
        }
        int s = 0;
        int e = arr.size() - 1;
        while(s <= e)
        {
            if (arr[s] != arr[e])
                return false;
            s++;
            e--;
        }
        return true;
    }
};

//No extra space solution and same time complexity
class Solution {
private:
    ListNode* Middlefinder(ListNode * head)
    {
        ListNode* temp = head;
        ListNode *slow = head;
        ListNode *fast = head -> next;
        if (fast == NULL)
            return slow;
        while(fast != NULL && fast -> next != NULL)
        {
            slow = slow -> next;
            fast = fast -> next-> next;
        }
        return slow;
    }
    ListNode * reverse (ListNode * head)
    {
        ListNode * curr = head;
        ListNode * prev = NULL;
        ListNode * next = NULL;
        while (curr != NULL)
        {
            next = curr -> next;
            curr -> next=  prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

public:
    bool isPalindrome(ListNode* head) {
        if (head == NULL || head -> next == NULL)
            return true;
        ListNode * middle = Middlefinder(head);
        ListNode * temp = middle -> next;
        middle -> next =reverse (temp);
        ListNode * head1= head;
        ListNode * head2 = middle -> next;
        while(head2 != NULL)
        {
            if(head1->val != head2-> val)
                return false;
            head1 = head1 -> next;
            head2 = head2->next;
        }
        return true;
    }
};