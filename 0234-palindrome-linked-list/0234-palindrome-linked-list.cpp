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

 #include<bits/stdc++.h>
class Solution {
public:
    bool isPalindrome(ListNode* head) {
       string s="";
       while(head){
           s+=to_string(head->val);
           head=head->next;
       }
       string s2=s;
       reverse(s2.begin(),s2.end());
       return(s==s2);

    }
};