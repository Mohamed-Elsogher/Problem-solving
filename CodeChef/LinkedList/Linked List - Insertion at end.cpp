#include <iostream>

using namespace std;

class Node {
    public: int value;
    Node * next;

    // Constructor to initialize the node with a given value
    Node(int val): value(val),
    next(nullptr) {}
};

class LinkedList {
    public: Node * head;
    void insertAtEnd(int value) {
        Node* newnode = new Node(value);
        if (head == NULL) {
            head = newnode;
            return;
        }
        Node* curr = head;
        while (curr -> next != NULL) {
            curr = curr -> next;
        }
        curr -> next = newnode;
        newnode -> next = NULL;
    }
    int getLastValue() {
        Node* temp = head;
        if (head == NULL) {
            return temp -> value;
        }
        while (temp -> next != NULL) {
            temp = temp -> next;
        }
        return temp -> value;
    }
};

int main() {
    int n;
    cin >> n;

    LinkedList * list = new LinkedList();

    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        list -> insertAtEnd(x);
        cout << list -> getLastValue() << ' ';
    }
}
