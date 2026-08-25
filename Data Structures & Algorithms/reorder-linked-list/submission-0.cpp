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
    void reorderList(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast != nullptr && fast->next != nullptr){
            fast = fast->next->next;
            slow = slow->next;
        }

        ListNode *curr = slow->next;
        slow->next = nullptr;

        ListNode *prev = nullptr;

        while(curr!=nullptr){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        ListNode* t1 = head;
        ListNode* t2 = prev;

        while(t2 != nullptr){
            ListNode* a1 = t1->next;
            ListNode* a2 = t2->next;
            t1->next = t2;
            t2->next = a1;

            t1 = a1;
            t2 = a2;
        }
    }
};
