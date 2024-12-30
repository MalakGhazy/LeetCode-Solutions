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
            ListNode *nextNode = current->next; //save the nextNode
            current->next = rev;  // reverse the current Node's pointer
            rev = current;       // Move the rev pointer to the current node
            current = nextNode; // Move current Node to the next Node
        }        
        return rev;
    }
};
//Initial State:
//current: 1 -> 2 -> 3 -> 4 -> 5 -> nullptr
//rev: nullptr

//First Iteration:

//Step 1: Save the next node:
//nextNode = current->next = 2 -> 3 -> 4 -> 5 -> nullptr

//Step 2: Reverse the pointer of the current node:
//current->next = rev = nullptr
//Updated Current
//1 -> nullptr

//Step 3: Move the rev pointer:
//rev = current = 1 -> nullptr

//Step 4: Move the current pointer:
//current = nextNode = 2 -> 3 -> 4 -> 5 -> nullptr

//After First Insertion
//nextNode: 2 -> 3 -> 4 -> 5 -> nullptr
//current: 2 -> 3 -> 4 -> 5 -> nullptr
//rev: 1 -> nullptr

