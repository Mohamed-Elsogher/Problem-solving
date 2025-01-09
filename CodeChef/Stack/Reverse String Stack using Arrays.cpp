#include <bits/stdc++.h>
using namespace std;

#define STACK_MAX_SIZE 101
char stackArray[STACK_MAX_SIZE];
int stackTop = -1;

bool isStackEmpty() {
    return stackTop == -1;
}

bool isStackFull() {
    return stackTop >= STACK_MAX_SIZE - 1;
}

void pushToStack(char element) {
    if (isStackFull()) {
        cout << "Stack is full";
    } else {
        stackTop++;
        stackArray[stackTop] = element;
    }
}

char popFromStack() {
    if (isStackEmpty()) {
        cout << "Stack is empty";
        return '-1';
    } else {
        char poppedElement = stackArray[stackTop];
        stackTop--;
        return poppedElement;
    }
}

int main() {
    string inputString = "Hello, World!";
    int inputLength = inputString.length();

    // Push each character onto the stack
    for (int i = 0; i < inputLength; i++) {
        char currentChar = inputString[i];
        pushToStack(currentChar);
    }

    // Pop the characters from the stack to construct the reversed string
    string reversedString;
    while (!isStackEmpty()) {
        reversedString.push_back(popFromStack());
    }
    cout << reversedString << "\n";
    return 0;
}
