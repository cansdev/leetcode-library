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
    ListNode* reverseList(ListNode* head) {

        vector<int> list;
        while(head!=nullptr) {
            list.push_back(head->val);
            head=head->next;
        }
        reverse(list.begin(), list.end());

        ListNode* sentinelNode = new ListNode(0);
        ListNode* temp = sentinelNode;
        for(int i=0; i<list.size(); i++) {
            temp->next = new ListNode(list[i]); //skip the sentinel node
            temp=temp->next;
        }
        return sentinelNode->next;
    }
};