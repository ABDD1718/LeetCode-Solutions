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
    ListNode* partition(ListNode* head, int x) {
        ListNode* lessthan= new ListNode(-1);
        ListNode* other=new ListNode(-1);
        ListNode* temp=head;
        auto fptail=lessthan;
        auto sptail=other;
        while(temp!=NULL){
            if(temp->val<x) {
                fptail->next=temp;
                fptail=fptail->next;
            }
            else{
                sptail->next=temp;
                sptail=sptail->next;
            }
            temp=temp->next;
        }
        fptail->next=other->next;
        sptail->next=NULL;
        return lessthan->next;

    }
};