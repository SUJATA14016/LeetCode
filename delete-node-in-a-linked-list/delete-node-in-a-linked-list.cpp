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
    void deleteNode(ListNode* node) {
        ListNode*p;
        while(node->next!=NULL){
            node->val=node->next->val;
            p=node;
            node=node->next;
        }
        p->next=NULL;
        delete(node);
        
    }
};