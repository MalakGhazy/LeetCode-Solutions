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
    bool isPalindrome(ListNode* head) {
        if(head == nullptr || head->next == nullptr)
        {
            return true;
        }
        ListNode * og = head;
        ListNode* copy = nullptr;
        ListNode* copyTail = nullptr;

        while (og) {
            ListNode* newNode = new ListNode(og->val);
            if (!copy) {
                copy = newNode;
                copyTail = copy;
            } else {
                copyTail->next = newNode;
                copyTail = copyTail->next;
            }
            og = og->next;
        }

        ListNode * current = copy;
        ListNode * rev = nullptr;
        while(current != nullptr)
        {
            ListNode * nextNode = current->next;
            current->next = rev;
            rev=current;
            current= nextNode;
        }
        og = head;
        while(og!=nullptr && rev!=nullptr)
        {
            if(og->val != rev->val)
            {
                return false;
            }
            og = og->next;
            rev = rev->next;
        }
        return true;
    }
};