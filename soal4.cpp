#include <iostream>
using namespace std;

struct node {
    int data;
    node* kiri;
    node* kanan;
};

node* createNode(int value) {
    node* baru = new node;
    baru->data = value;
    baru->kiri = NULL;
    baru->kanan = NULL;
    return baru;
}

node* insert(node* akar, int value) {
    if (akar == NULL) {
        return createNode(value);
    }

    if (value < akar->data) {
        akar->kiri = insert(akar->kiri, value);
    } 
  
    else if (value > akar->data) {
        akar->kanan = insert(akar->kanan, value);
    }

    return akar;
}

void preOrder(node* akar) {
    if (akar != NULL) {
        cout << akar->data << " ";
        preOrder(akar->kiri);
        preOrder(akar->kanan);
    }
}

void inOrder(node* akar) {
    if (akar != NULL) {
        inOrder(akar->kiri);
        cout << akar->data << " ";
        inOrder(akar->kanan);
    }
}

void postOrder(node* akar) {
    if (akar != NULL) {
        postOrder(akar->kiri);
        postOrder(akar->kanan);
        cout << akar->data << " ";
    }
}

int main() {
    system("cls");
    node* akar = NULL;
    int nilai;

    cout << "Masukkan angka. Ketik 0 untuk berhenti" << endl;

    while (true) {

        cout << "Masukkan angka: ";
        cin >> nilai;

        if (nilai == 0) {
            break;
        }

        akar = insert(akar, nilai);
    }

    cout << "Luaran";
    
    cout << "In-order   : ";
    inOrder(akar);
    cout << endl;

    cout << "Pre-order  : ";
    preOrder(akar);
    cout << endl;

    cout << "Post-order : ";
    postOrder(akar);
    cout << endl;
}

