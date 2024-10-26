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

        int length = 0;
        int finder = 0;
        ListNode* current = head;

        if(head == nullptr)
            return head;

        while(current != nullptr) {
            current=current->next;
            length++;
        }

        current = head;

        while(finder != length / 2) {
            current=current->next;
            finder++;
        }
        return current;
    }
};