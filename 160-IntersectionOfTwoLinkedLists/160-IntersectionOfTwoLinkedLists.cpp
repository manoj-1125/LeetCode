// Last updated: 8/10/2026, 2:47:15 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *intersectionPoint(ListNode* list1, ListNode* list2, int d){
        while(d){
            list2=list2->next;
            d--;
        }
        while(list1!=list2){
            list1=list1->next;
            list2=list2->next;
        }
        return list1;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* t1=headA;
        ListNode* t2=headB;
        int cnt1=0,cnt2=0;
        while(t1!=NULL){
            cnt1++;
            t1=t1->next;
        }
        while(t2!=NULL){
            cnt2++;
            t2=t2->next;
        }
        if(cnt1<cnt2)
            return intersectionPoint(headA,headB,cnt2-cnt1);
        else
            return intersectionPoint(headB,headA,cnt1-cnt2);
    }
};