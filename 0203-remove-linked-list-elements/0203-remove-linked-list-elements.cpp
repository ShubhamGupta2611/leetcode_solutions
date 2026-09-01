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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL){
            return head;
        }
        while(head!=NULL && head->val==val){
            head=head->next;           
        }
        if(head==NULL){
            return head;
        }
        ListNode* prev=head;
        ListNode* curr=head;
        while(curr->next!=NULL){
            
            if(curr->val==val){
                prev->next=curr->next;
                
                curr=prev->next;
            }
            else{
                prev=curr;
                curr=curr->next;
            }
        }
        if(curr->val==val){
            prev->next=NULL;
        }
        return head;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna