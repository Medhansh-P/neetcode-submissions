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
    bool hasCycle(ListNode* head) {
        ListNode* slow=head,*fast=head;
        if(!head) return false;
        if(head->next==NULL) return false;
        while(fast){
            fast=fast->next;
            slow=slow->next;
            if(fast){
                fast=fast->next;
            }
            if(slow==fast) return true;
        }
        return false;

    }
};
