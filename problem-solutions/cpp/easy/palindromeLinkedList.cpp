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
    bool isPalindrome(ListNode* head) {

        vector<int> list; 
        while(head!=nullptr) {
            list.push_back(head->val);
            //cout<<list.back()<<" ";
            head=head->next;
        }

        for(int i=0; i < list.size() / 2; i++) {
            if(list[i] == list[list.size() - i - 1])
                continue;
            return false;
        }

        return true;
        
    }
};