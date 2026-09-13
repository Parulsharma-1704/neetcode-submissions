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

    ListNode* reverseList(ListNode* head){
        ListNode* p=nullptr;
        ListNode* curr=head;
        ListNode* n=nullptr;

        while(curr!=nullptr){
            n=curr->next;
            curr->next=p;
            p=curr;
            curr=n;
        }
        return p;
    }
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* prev=nullptr;

        while(fast!=nullptr && fast->next!=nullptr){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        if(slow==head){
            return;
        }
        ListNode* ptr2=reverseList(slow);
        prev->next=nullptr;
        ListNode* ptr=head;
        ListNode* N=nullptr;

        while(ptr!=nullptr && ptr2!=nullptr){
            if(N==nullptr){
                N=ptr;
            }
            else{
                N->next=ptr;
                N=N->next;
            }
            ptr=ptr->next;
            N->next=ptr2;
            ptr2=ptr2->next;
            N=N->next;
        }
        while(ptr!=nullptr){
            N->next=ptr;
            N=N->next;
            ptr=ptr->next;
        }
        while(ptr2!=nullptr){
            N->next=ptr2;
            N=N->next;
            ptr2=ptr2->next;
        }
    }
};
