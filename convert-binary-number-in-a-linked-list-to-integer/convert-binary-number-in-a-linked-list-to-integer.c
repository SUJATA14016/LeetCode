/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


int getDecimalValue(struct ListNode* head){
    struct  ListNode*p=head;
    int count=-1;
    while(p!=NULL){
        count++;
        p=p->next;
    }
   int sum=0;
   while(head!=NULL){
        for(int i=count;i>=0;i--){
        sum+=head->val*pow(2,i);
            head=head->next;
    }
   }
return sum;
}