//Middle of the Linked List.
//Link - https://leetcode.com/problems/middle-of-the-linked-list/
//Tortoise approach
T.C - O(n)
S.C - O(1)

class Solution {
public:
    ListNode* middleNode(ListNode* head) 
    {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};