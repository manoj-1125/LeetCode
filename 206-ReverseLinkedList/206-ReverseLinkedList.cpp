// Last updated: 8/8/2026, 12:23:40 AM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* reverseList(ListNode* head) {
14        if(head==nullptr || head->next==nullptr)
15            return head;
16        ListNode *newHead = reverseList(head->next);
17        ListNode *front = head->next;
18        front->next = head;
19        head->next = nullptr;
20        return newHead;
21    }
22};