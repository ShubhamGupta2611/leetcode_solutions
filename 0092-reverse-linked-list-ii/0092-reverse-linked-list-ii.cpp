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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        if(head->next==NULL||left==right){
            return head;
        }
        ListNode dummy(0);
        dummy.next=head;
        ListNode* prev=&dummy;
        ListNode* current=head;
        ListNode* after;
        for(int i=0;i<left-1;i++){
            prev=current;
            current=current->next;
        }
        for(int i=left;i<right;i++){
            after=current->next;
            
            current->next=after->next;
            after->next=prev->next;
            prev->next=after;
        }
        return dummy.next;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna