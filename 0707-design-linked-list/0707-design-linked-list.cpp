class MyLinkedList {
public:
    struct Node {
        int data;
        Node* next;
        Node(int data) {
            this->data = data;
            this->next = nullptr;
        }
        Node(int data, Node* nextNode) {
            this->data = data;
            this->next = nextNode;
        }
    };

    Node* head;
    MyLinkedList() { head = nullptr; }

    int get(int index) {
        Node* ptr = head;
        for (int i = 0; i < index; i++) {
            if (ptr == NULL) {
                return -1;
            }
            ptr = ptr->next;
        }
        if (ptr == nullptr) {
            return -1;
        }
        return ptr->data;
    }

    void addAtHead(int val) {
        Node* newNode = new Node(val, head);
        head = newNode;
    }

    void addAtTail(int val) {
        if (head == NULL) {
            addAtHead(val);
            return;
        }
        Node* newNode = new Node(val);
        Node* ptr = head;
        while (ptr->next != nullptr) {
            ptr = ptr->next;
        }
        ptr->next = newNode;
    }

    void addAtIndex(int index, int val) {
        if (index == 0) {
            addAtHead(val);
            return;
        }
        Node* ptr = head;
        Node* preptr = NULL;
        for (int i = 0; i < index; i++) {
            if (ptr == NULL) {
                return;
            }
            preptr = ptr;
            ptr = ptr->next;
        }

        Node* newNode = new Node(val, preptr->next);
        preptr->next = newNode;
    }

    void deleteAtIndex(int index) {
        if (head == NULL) {
            return;
        }
        if (index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node* ptr = head;
        Node* preptr = NULL;
        for (int i = 0; i < index; i++) {
            if (ptr == NULL) {
                return;
            }
            preptr = ptr;
            ptr = ptr->next;
        }
        if (ptr == NULL) {
            return;
        }
        preptr->next = ptr->next;
        delete ptr;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */