// Last updated: 6/27/2025, 2:29:30 AM
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        if(head == NULL){
            return head;
        }

        Node* curr = head;
        while(curr != NULL){
            if(curr -> child != NULL){
                //Flatten the child list
                Node* next = curr -> next;
                curr -> next = flatten(curr -> child);
                curr -> next -> prev = curr;
                curr -> child = NULL;

                // Find tail
                while(curr -> next != NULL){
                    curr = curr -> next;
                }

                //Join the tail with next ptr
                if(next != NULL){
                    curr -> next = next;
                    next -> prev = curr;
                }
            }
            curr = curr -> next;;
        }
        return head;
    }
};