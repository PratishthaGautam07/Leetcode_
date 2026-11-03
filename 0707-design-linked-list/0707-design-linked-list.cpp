class MyLinkedList {
public:
class node{
public:
    int data;
    node* next;
    node(int new_data){
        this->data = new_data;
        this->next = NULL;
    }
};
  node*head;
    MyLinkedList() {
        
        head = NULL;
    }
    int get(int index) {
        node* temp = head;
        int cnt = 0;
        if(index < 0) return -1;
        while(temp!= NULL){
            if(cnt == index){
                return temp->data;

            }
            temp = temp->next;
            cnt++;

        }
        return -1;
    }
    
    void addAtHead(int val) {
       node *begin = new node(val);
       begin->next= head;
      head = begin;
        
    }
    
    void addAtTail(int val) {
        node*end = new node(val);
        node*temp = head;
        if (head == NULL){
            head = end;
            return;
        }
        while(temp->next != NULL){
            temp = temp->next;
            
        }
        temp->next= end;
        end->next = NULL;

        
    }
    
    void addAtIndex(int index, int val) {
        if(index<0){
        return;
    }
        node *add = new node(val);
         if(index == 0) {
        add->next = head;
        head = add;
        return;
    }
    
    node *temp = head;
        int cnt = 0;
        while( temp != NULL){
            if(cnt == index-1){
                break;
            }
            temp = temp->next;
            cnt++;
        }
        if(temp == NULL){
            delete add;
            return;
        }
        add->next= temp->next;
        temp->next= add;
       
        
    }
    
    void deleteAtIndex(int index) {

    if(head == NULL || index < 0) return;

    if(index == 0) {
        node *temp = head;
        head = head->next;
        delete temp;
        return;
    }

    node *temp = head;
    int cnt = 0;

    while(temp != NULL) {
        if(cnt == index - 1) {
            break;
        }
        temp = temp->next;
        cnt++;
    }

    if(temp == NULL || temp->next == NULL) {
        return;
    }

    node *del = temp->next;
    temp->next = temp->next->next;

    delete del;
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