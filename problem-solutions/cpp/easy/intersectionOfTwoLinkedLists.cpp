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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        ListNode* currentA = headA;
        ListNode* currentB = headB;

        if(currentA == currentB)
            return currentA;

        while (currentA != currentB) {
            if (currentA == nullptr) 
                currentA = headB;
            
            else 
                currentA = currentA->next;
            
            if (currentB == nullptr) 
                currentB = headA;
            
            else 
                currentB = currentB->next;

            if (currentA == currentB) 
                return currentA;
        }
        return nullptr;
        
    }
};