/**https://leetcode.com/problems/reverse-linked-list/submissions/
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
public://three pointer soln is lit
     ListNode* r(ListNode* head,ListNode* lol) {
        if(head==NULL){
            return lol;
        }
         ListNode* x=new ListNode(head->val);
         x->next=lol;
        return r(head->next,x);
       
    }
    ListNode* reverseList(ListNode* head) {
        return r(head,NULL);
    }
};