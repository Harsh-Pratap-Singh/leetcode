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
    void deleteNode(ListNode* node) {
        while(node->next != NULL){
            node->val = node->next->val;
            if(node->next->next == NULL){
                node->next = nullptr;
                break;
            }
            node = node->next;
        }

        
    }
};
        // node->val= node->next->val;
        // node->next= node->next->next; correct way 