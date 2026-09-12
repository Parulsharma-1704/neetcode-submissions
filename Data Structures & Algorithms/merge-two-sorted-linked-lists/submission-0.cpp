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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* start=NULL;
        ListNode* ptr1=list1;
        ListNode* ptr2=list2;
        ListNode* head=NULL;

        while(list1!=NULL && list2!=NULL){
            if(list1->val <= list2->val){
                if(start==NULL){
                    start=list1;
                    head=start;
                }
                else{
                    start->next=list1;
                    start=start->next;
                }
                list1=list1->next;
            }
            else{
                if(start==NULL){
                    start=list2;
                    head=start;
                }
                else{
                    start->next=list2;
                    start=start->next;
                }
                list2=list2->next;
            }
        }

        while(list1!=NULL){
            if(start==NULL){
                    start=list1;
                    head=start;
            }
            else{
            start->next=list1;
            start=start->next;
            }
            list1=list1->next;
        }
        while(list2!=NULL){
            if(start==NULL){
                    start=list2;
                    head=start;
            }
            else{
            start->next=list2;
            start=start->next;
            }
             list2=list2->next;
        }
        return head;
    }
};
