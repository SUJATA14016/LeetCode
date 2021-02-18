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
    bool isPalindrome(ListNode* head) {
        ListNode *t=head;
        int i,j;
        vector <int> v;
        if(head==NULL){return true;}
        while(t!=NULL){
            v.push_back(t->val);
            t=t->next;
        }
        i=0;
        j=v.size()-1;
        while(i<j){
            if(v[i]!=v[j])
                return false;
            i++;
            j--;
        }
        return true;
   }
};