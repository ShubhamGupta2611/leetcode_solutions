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
private:
    ListNode* mergesort(ListNode* head){
        if(head==NULL || head->next==NULL)
        return head;
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* prev=NULL;
        while(fast!=NULL && fast->next!=NULL){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next=NULL;
        ListNode* leftHead=mergesort(head);
        ListNode* rightHead=mergesort(slow);
        return merge(leftHead,rightHead);
        
    }
    ListNode* merge(ListNode* q,ListNode* p){
        ListNode dummy(0);
        ListNode* temp=&dummy;
        while(q!=NULL && p!=NULL){
            if(q->val<=p->val){
                temp->next=q;
                q=q->next;
            }
            else{
                temp->next=p;
                p=p->next;
            }
            temp=temp->next;
        }
        if(q!=NULL)
            temp->next=q;
        else
            temp->next=p;
        return dummy.next;
    }
public:
    ListNode* sortList(ListNode* head) {               
        return mergesort(head);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna