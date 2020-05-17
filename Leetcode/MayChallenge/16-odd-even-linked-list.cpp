// Day 16 of LeetCode May Challenge, by Kartik Mohan
// Odd Even Linked List
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* ptr_odd=head;
        ListNode*ptr_even=head->next;
        ListNode* head2=head->next;
        while(ptr_odd!=NULL && ptr_even!=NULL && ptr_odd->next!=NULL && ptr_even->next!=NULL)
        {
            ptr_odd->next=ptr_even->next;
            ptr_odd=ptr_odd->next;
            ptr_even->next=ptr_odd->next;
            ptr_even=ptr_even->next;
        }
        ptr_odd->next=head2;
        return head;
    }
};
