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
    ListNode* middleNode(ListNode* head) {
        if(!head || !head->next)return head;
        int length=0;
        ListNode* node=head;
        while(node){
            length++;
            node=node->next;
        }
         node=head;
        int val=(length/2)+1;
        int count=1;
        while(count<val){
        node=node->next;
        count++;
        }
        return node;

        
    }
};