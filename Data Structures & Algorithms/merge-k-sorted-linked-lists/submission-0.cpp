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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> temp;
        if(lists.size() == 0) return nullptr;
        if(lists.size() == 1) return lists[0];
        

        for(auto a : lists){
            ListNode* curr = a;
            while (curr != nullptr) {
                temp.push_back(curr->val);
                curr = curr->next;
            }
        }
        if (temp.empty()) return nullptr;

        sort(temp.begin(), temp.end());
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;

        for (int val : temp) {
            curr->next = new ListNode(val);
            curr = curr->next;
        }
        ListNode* del = dummy->next;
        delete dummy;
        return del;
    }
};
