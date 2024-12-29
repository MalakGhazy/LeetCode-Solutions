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
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr || head->next == nullptr)
        {
            return head;
        }
        ListNode*current = head;
        ListNode*rev = nullptr;
        while(current!= nullptr)
        {
            ListNode *temp = current;
            current = current->next;
            temp->next = rev;
            rev = temp;
        }        
        return rev;
    }
};
//Initial State:
//current: 1 -> 2 -> 3 -> 4 -> 5 -> nullptr
//rev: nullptr

//First Iteration:
//temp: 1 -> 2 -> 3 -> 4 -> 5 -> nullptr
//current: 2 -> 3 -> 4 -> 5 -> nullptr
//rev: 1 -> nullptr

//Second Iteration:
//temp: 2 -> 3 -> 4 -> 5 -> nullptr
//current: 3 -> 4 -> 5 -> nullptr
//rev: 2 -> 1 -> nullptr

//Final State:
//current: nullptr
//rev: 5 -> 4 -> 3 -> 2 -> 1 -> nullptr

//Output:
//[5, 4, 3, 2, 1]






