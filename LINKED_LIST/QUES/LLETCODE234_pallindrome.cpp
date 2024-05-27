/*Given the head of a singly linked list, return true if it is a 
palindrome or false otherwis*/
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
         if ( head==NULL || head->next == NULL )
    {
        return true;
    }
        ListNode*slow=head;
        ListNode*fast=head;
        ListNode*prev=NULL;
        while(fast!=NULL && fast->next!=NULL ){
            
            slow=slow->next;
            fast=fast->next->next;
        }
      
        ListNode*first=head;ListNode*temp=NULL;
        while(slow!=NULL ){
            temp=slow->next;
            slow->next=prev;
            prev=slow;
            slow=temp;
        }
        ListNode*second=prev;
        while(second!=NULL ){
            if(first->val!=second->val){
                return 0;
            }
            first=first->next;
            second=second->next;
        }
        return 1;
    }
};