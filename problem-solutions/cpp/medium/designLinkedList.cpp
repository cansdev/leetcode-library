class MyLinkedList {
public:
    int val;
    MyLinkedList* next;
    MyLinkedList* head;

    MyLinkedList() {
        val = 0;
        next = nullptr;
        head = nullptr;
    }
    
    int get(int index) {
        MyLinkedList* current = head; 
        int it = 0;
        while (current != nullptr && it != index) {
            it++;
            current = current->next;
        }
        if (current == nullptr) {
            return -1; 
        }
        return current->val;
    }
    
    void addAtHead(int val) {
        MyLinkedList* newNode = new MyLinkedList();
        newNode->val = val;
        newNode->next = head;
        head = newNode; 
    }
    
    void addAtTail(int val) {
        MyLinkedList* current = head;
        while (current != nullptr && current->next != nullptr) { 
            current = current->next;
        }
        MyLinkedList* newNode = new MyLinkedList();
        newNode->val = val;
        newNode->next = nullptr; 
        if (current != nullptr) { 
            current->next = newNode;
        } else {
            head = newNode; 
        }
    }
    
    void addAtIndex(int index, int val) {
        if (index < 0) 
            return; 
        if (index == 0) {
            addAtHead(val);
            return;
        }
        
        MyLinkedList* current = head;
        int it = 0;
        while (current != nullptr && it < index - 1) { 
            it++;
            current = current->next;
        }
        if (current == nullptr) {
            return;
        }
        MyLinkedList* newNode = new MyLinkedList();
        newNode->val = val;
        newNode->next = current->next;
        current->next = newNode;
    }
    
    void deleteAtIndex(int index) {
        if (index < 0 || head == nullptr)
            return; 
        
        if (index == 0) { 
            MyLinkedList* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        MyLinkedList* current = head;
        int it = 0;
        while (current != nullptr && it < index - 1) { 
            it++;
            current = current->next;
        }
        if (current == nullptr || current->next == nullptr) {
            return; // 
        }

        MyLinkedList* temp = current->next;
        current->next = current->next->next; 
        delete temp; 
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index, val);
 * obj->deleteAtIndex(index);
 */