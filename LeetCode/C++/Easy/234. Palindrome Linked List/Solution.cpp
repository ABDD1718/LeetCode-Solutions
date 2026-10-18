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
    int length(ListNode* head){
        ListNode*temp=head;
        int len=0;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        return len;
    }
    ListNode* mid(ListNode* head){
        if(!head->next) return head;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
       return slow;

    }
    ListNode *reverseLL(ListNode *head){
        ListNode *prev=NULL;
        ListNode *curr=head;
        while(curr!=NULL){
            ListNode* forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        int len =length(head);
        ListNode* midd= mid(head);
        ListNode* finalmid=midd;
        if(len&1) finalmid=midd->next;
        ListNode* rev=reverseLL(finalmid);
        ListNode* temp=head;
        while(temp!=midd && finalmid!=NULL){
            if(temp->val!=rev->val) return false;
             temp=temp->next;
            rev=rev->next;
        }
        return true;

    }
};