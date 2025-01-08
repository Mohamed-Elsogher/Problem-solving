#include <iostream>
using namespace std;

class Node {
    public:
    int value;
    Node* next;
    
    // Constructor to initialize the node with a given value
    Node(int val): value(val), next(nullptr) {}
};

class LinkedList {
    public : 
    Node * head; 
    void insertFront(int value){
        cout << "Inserting " << value << endl ; 
        Node* newnode = new Node(value);
        newnode->next = head ;
        head = newnode;
    }
    int getHeadValue(){
        if(head == NULL){
            return -1;
        }
        return head->value;
    }
};

int main() {
    LinkedList* list = new LinkedList();
    list -> insertFront(3);
    cout << "The value at the head is: " << list -> getHeadValue() << '\n';
    
    list -> insertFront(2);
    cout << "The value at the head is: " << list -> getHeadValue() << '\n';
    
}
