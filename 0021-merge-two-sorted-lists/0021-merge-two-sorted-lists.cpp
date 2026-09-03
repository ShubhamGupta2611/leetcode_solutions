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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }
        ListNode* head1=(list1->val<=list2->val)?list1:list2;
        ListNode* head2=(list1->val>list2->val)?list1:list2;
        ListNode* prev=head1;
        head1=head1->next;
        while(head1!=NULL && head2!=NULL){
            
            if (head1->val<=head2->val){
                prev=head1;
                head1=head1->next;
            }
            else{
                ListNode* temp=head2->next;
                prev->next=head2;
                prev=head2;
                head2->next=head1;
                head2=temp;
                prev->next=head1;
            }
        }
        if(head1!=NULL){
            prev->next=head1;
        }
        else{
            prev->next=head2;
        }
        return (list1->val<=list2->val)?list1:list2;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna