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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == nullptr || headB == nullptr)
        {
            return nullptr;
        }
        ListNode *ListA=headA;
        ListNode *ListB=headB;
        while (ListA != ListB) {
            ListA = (ListA != nullptr) ? ListA->next : headB;
            ListB = (ListB != nullptr) ? ListB->next : headA;
        }
        return ListA;
    }
};