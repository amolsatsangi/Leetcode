class MyLinkedList {
    struct Node {
		int val;
		Node *next;
		Node(int x): val(x), next(nullptr) {}
	};

    Node * head;
    int size;
public:
    MyLinkedList() {
        head = nullptr;
        size = 0;
    }
    
    int get(int index) {
        Node * ptr = head;
        if(index>=size)
            return -1;
        for(int i=0;i<index;i++){
            ptr=ptr->next;
        }
        return ptr->val;
    }
    
    void addAtHead(int val) {
        Node * ptr = new Node(val);
        if(head == nullptr){
            head = ptr;
        }
        else{
            ptr->next = head;
            head = ptr;
        }
        ++size;
    }
    
    void addAtTail(int val) {
        Node * p = new Node(val);
        if(head == nullptr){
            head = p;
        }
        else{
            Node *  ptr = head;
            while(ptr->next != nullptr)
                ptr=ptr->next;
            ptr->next = p;
        }
        size++;
    }

    void addAtIndex(int index, int val) {
        if(index == 0){
            addAtHead(val);
            size--;
        }
        else if(size == index){
            addAtTail(val);
            size--;
        }
        else if(index>size)
            return;
        else{
            Node * ptr = head;
            for(int i=0;i<index-1;i++)
                ptr = ptr-> next;
            Node * p = new Node(val);
            if(ptr->next == nullptr)
                ptr ->next = p;
            else{
                Node * temp = ptr->next;
                ptr->next = p;
                p->next = temp;
            }
        }
        size++;
    }
    
    void deleteAtIndex(int index) {
        if(index==0){
            if(head == nullptr)
                return;
            else
                head = head->next;
        }
        else if(index>=size)
            return;
        else{
            Node * ptr = head;
            for(int i=0;i<index-1;i++)
                ptr = ptr->next;    
            Node * temp = ptr->next;
            ptr->next= ptr->next->next;
            delete(temp);
        }
        size--;
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
