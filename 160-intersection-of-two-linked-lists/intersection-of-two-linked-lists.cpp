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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*temp=headA;
        ListNode*temp1=headB;
        if(headA==NULL||headB==NULL){
            return NULL;
        }
        while(temp!=temp1){
            if(temp==NULL){
                temp=headB;
            }
            else{
                temp=temp->next;
            }
            if(temp1==NULL){
                temp1=headA;
            }
            else{
                temp1=temp1->next;
            }
        }
        return temp1;
    }
};