void insertAfterK(int value, int k) {
    Node* newnode = new Node(value);
    Node* current = head;
    
    if(head == NULL){
        head = newnode;
        return;
    }
    for(int i = 1 ; i < k && current !=NULL ;++i){
        current = current->next;
    }
    if(current == NULL){
        return;
    }
    newnode->next = current->next;
    current->next = newnode;
    
}
