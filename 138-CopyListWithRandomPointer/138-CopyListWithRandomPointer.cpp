// Last updated: 8/13/2026, 6:09:28 PM
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==nullptr)
            return nullptr;
        Node* temp=head;
        while(temp!=nullptr){
            Node* copyNode=new Node(temp->val);
            copyNode->next=temp->next;
            temp->next=copyNode;
            temp=copyNode->next;
        }
        temp=head;
        while(temp!=nullptr){
            if(temp->random!=nullptr){
                temp->next->random=temp->random->next;
            }else{
                temp->next->random=temp->random;
            }
            temp=temp->next->next;
        }
        Node* dummyNode=new Node(-1);
        Node* res=dummyNode;
        temp=head;
        
        while(temp!=nullptr){
            res->next=temp->next;
            res=res->next;
            temp->next=temp->next->next;
            temp=temp->next;
            
        }
        return dummyNode->next;
    }
};