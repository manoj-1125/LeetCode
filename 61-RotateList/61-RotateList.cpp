// Last updated: 8/11/2026, 10:01:54 PM
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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr || k==0)
            return head;
        int len=1;
        ListNode* tail=head;
        while(tail->next!=nullptr){
            len++;
            tail=tail->next;
        }
        if(k%len==0)
            return head;
        k=k%len;
        tail->next=head;
        ListNode* temp=head;
        int cnt=1;
        while(temp!=nullptr){
            if(cnt==(len-k))
                break;
            cnt++;
            temp=temp->next;
        }
        head=temp->next;
        temp->next=nullptr;
        return head;
    }
};