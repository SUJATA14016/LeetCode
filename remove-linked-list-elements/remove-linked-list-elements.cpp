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
        ListNode *t=head,*p;
        if(head==NULL){return head;}
        while(t!=NULL&& t->next!=NULL){
            if(t->next->val==val){
                p=t->next;
                t->next=t->next->next;
                delete p;
            }   
            else{t=t->next;} 
        }
        if(head->val==val){
            p=head;
            head=head->next;
            delete p;
        }
       
        return head;
    }
};