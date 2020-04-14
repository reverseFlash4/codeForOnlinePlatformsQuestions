//Day 8 of Leetcode 30 days challenge, by Kartik Mohan
// Middle of Linked List
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head->next==NULL)
            return head;
        ListNode* ptr=head;
        ListNode* ptrnext=head;
        while(ptrnext!=NULL && ptrnext->next!=NULL && ptrnext->next->next!=NULL)
        {
            ptr=ptr->next;
            ptrnext=ptrnext->next->next;
        }
        if(ptrnext->next==NULL)
            return ptr;
        else
            return ptr->next;
    }
};
