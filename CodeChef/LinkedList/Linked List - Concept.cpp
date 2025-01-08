#include <iostream>
using namespace std;

// Create a struct with two values
struct Node {
    int value; 
    Node* next ;
    Node (int val): value(val) , next(nullptr){}
};

int main() {
    // Creating head of the Linked list
    Node* head = new Node(1);
    cout << "The value at head is " << head -> value << '\n';
}
