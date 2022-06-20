#include <iostream>
#include <string>

using namespace std;

struct Node {
    string data;
    Node* next;
};

class myStack {
    Node* top;
public:
    myStack() :top(NULL) {}
    ~myStack();
    void push(string);
    string pop();
    void func(string);
};

myStack::~myStack() {
    while (top) {
        Node* p = top;
        top = top->next;
        delete p;
    }
}

void myStack::push(string word) {
    Node* temp = new Node;
    temp->data = word;
    temp->next = top;
    top = temp;
}

string myStack::pop() {
    string word;
    Node* temp = top;
    if (!temp) {
        cout << "Stack is empty" << endl;
        return 0;
    }
    word = temp->data;
    top = temp->next;
    delete temp;
    return word;
}

void myStack::func(string arg) {
    string word="", res="";
    for(int i=0;i<5;i++) {
        word += "lpo";
        push(word);
    }
    while (top) {
        res += pop() + ' ';
    }
    cout << res;
}

int main()
{
    string arguments;
    myStack st;
    st.func(arguments);
}