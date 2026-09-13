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
        int count=0;
        ListNode* ptr=head;
        while(ptr!=nullptr){
            count++;
            ptr=ptr->next;
        }
        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=length(head);
        ListNode* ptr=head;
        n=count-n+1;
        if(n==1){
            head=head->next;
            delete ptr;
            return head;
        }
        for(int i=1;i<n-1;i++){
            ptr=ptr->next;
        }
        ListNode* temp=ptr->next;
        
        
            ptr->next=temp->next;
            temp->next=nullptr;
            delete temp;
        return head;
    }
};
