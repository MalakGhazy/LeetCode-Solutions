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
    ListNode* middleNode(ListNode* head) {
        if(head==nullptr)
        {
            return nullptr;
        }
        ListNode * current = head;
        int counter=0;
        while(current!=nullptr)
        {
            counter++;
            current = current->next;
        }
        // Find the middle position (0-based index)
        int position = counter/2;

        current = head; // Reset current to head
        int trav=0;
        while(trav<position)
        {
           trav++;
           current = current->next; 
        }
        return current;  
    }
};