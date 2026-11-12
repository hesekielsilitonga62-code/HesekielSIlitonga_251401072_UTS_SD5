#include <iostream>
#include <string>
using namespace std;

struct Node {
    char data;
    Node* next;
};

Node* top = NULL;

void push(char c) {
    Node* newNode = new Node;
    newNode->data = c;
    newNode->next = top;
    top = newNode;
}

char pop() {
    if (top == NULL) return '\0';
    Node* temp = top;
    char c = temp->data;
    top = top->next;
    delete temp;
    return c;
}

int main() {
    string kata;
    cout << "Masukkan sebuah kata: ";
    cin >> kata;

    for (int i = 0; i < kata.length(); i++) {
        push(kata[i]);
    }

    cout << "Hasil dibalik: ";
    while (top != NULL) {
        cout << pop();
    }
    cout << endl;


}