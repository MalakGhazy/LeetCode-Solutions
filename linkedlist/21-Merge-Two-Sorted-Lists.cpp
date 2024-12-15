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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = new ListNode();
        ListNode* result = head;
        while(list1 != nullptr && list2 != nullptr)
        {
            if(list1->val < list2->val)
            {
                result->next = list1;
                list1 = list1->next;
            }
            else
            {
                result->next = list2;
                list2 = list2->next;
            }
            result= result->next;
        }
        // Append the remaining nodes from either list
        if (list1 != nullptr) {
            result->next = list1;
        } else if (list2 != nullptr) {
            result->next = list2;
        }
        return head->next;
    }
};