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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *l1=head,*p;
        while(l1!=NULL && l1->next!=NULL){
            if(l1->val==l1->next->val){
                p=l1->next;
                l1->next=l1->next->next;
                delete p;
                
            }
            else{
                l1=l1->next;
            }
            
        }
 return head;       
    }
};