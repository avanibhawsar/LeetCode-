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
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL)
        {
            return NULL;
        }
        ListNode* fast=head;
        ListNode* slow= head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            // if(fast!=NULL)
            // {
            //     fast=fast->next;

            // }
            if(slow==fast)
            {
                //
                ListNode *intersecn=head;
                while (intersecn != slow) {
                    intersecn = intersecn->next;
                    slow = slow->next;
                }
                //return slow;
                return intersecn;
            }

        }
        return NULL;

    }
};
