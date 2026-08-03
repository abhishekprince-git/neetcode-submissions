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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count =0;
        ListNode* curr=head;
        while(curr!=NULL){
            count++;
            curr=curr->next;
        }
        if(count==n){
            ListNode* temp= head;
            head=head->next;
            delete temp;
            return head;
        }
        int deletePosition = count-n;
        curr= head;
        ListNode* prev=NULL;
        while(deletePosition--){
            prev= curr;
            curr=curr->next;
        }
        prev->next = curr->next;
        delete curr;
        return head;
    }
};
