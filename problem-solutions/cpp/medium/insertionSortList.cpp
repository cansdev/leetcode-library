class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {

        if (head == nullptr || head->next == nullptr) 
            return head;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* current = head->next;  
        head->next = nullptr;  
        while (current) {
            ListNode* nextNode = current->next;   
            ListNode* prev = dummy;  
            while (prev->next && prev->next->val < current->val) {
                prev = prev->next;  
            }
            current->next = prev->next;
            prev->next = current;
            current = nextNode;
        }
        ListNode* sortedHead = dummy->next;
        return sortedHead;
    }
};
