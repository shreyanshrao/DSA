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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL||head->next==NULL) return head;
        ListNode*current=head;
        
    ListNode* newHead = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
        
        // ListNode* prev = NULL;
        // while(current!=NULL){
        //    ListNode* nextNode = current->next; // Store next
        //     current->next = prev;              // Reverse the link
        //     prev = current;                    // Move prev forward
        //     current = nextNode; 
        // }
        // return prev;





        // stack<int>st;
        // ListNode*temp=head;
        // while(temp!=NULL){
        //     st.push(temp->val);
        //     temp=temp->next;


            
        // }
        // temp=head;
        // while(temp!=NULL){
        //     temp->val=st.top();
        //     st.pop();
        //     temp=temp->next;


        // }
        // return head;
    }
};