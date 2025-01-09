int peek(){
    if(top >= 0){
        int ele = a[top];
        cout<<"Peeked: "<<ele<<"\n";
        return top;
    }
    else{
        cout<<"Stack is empty. Cannot peek.\n";
        return top;
    }
}

int isEmpty(){
    return top == -1;
}

int isFull(){
    if(top >= MAX_SIZE){
        return top == -1;
    }
    else{
        return top;
    }
}
