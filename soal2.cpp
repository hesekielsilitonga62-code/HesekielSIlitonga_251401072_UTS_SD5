#include <iostream>
using namespace std;

struct node {
    int value;
    node* next;
};

struct nama {
    char value1;
    nama* next1;

node* head = NULL;
node* tail = NULL;
nama* head1 = NULL;
nama* tail1 = NULL;

void insertLastImo(int n) {
    node *newnode = new node;
    newnode -> value = n;
    newnode -> next = NULL;

    if (head == NULL) {
        head = newnode;
        tail = head; 
    } else {
        tail -> next = newnode;
        tail = newnode;
    }
};

void insertLastnama(char c) {
    nama *newnode1 = new nama;
    newnode1 -> value1 = c;
    newnode1 -> next1 = NULL;

    if (head == NULL) {
        head1 = newnode1;
        tail1 = head1; 
    } else {
        tail1 -> next1 = newnode1;
        tail1 = newnode1;
    }
};

void deleteFirst() {
    if(head == NULL) {
        cout << "List Kosong!" << endl;
        return;
    }

    node *temp = head;
    head = head -> next;
    if (head == NULL) tail = NULL;
    delete temp1;
};

void deleteFirstnama() {
    if(head1 == NULL) {
        cout << "List Kosong!" << endl;
        return;
    }

    nama *temp1 = head1;
    head1 = head1 -> next1;
    if (head1 == NULL) tail1 = NULL;
    delete temp1;
};

void deleteLast() {
    if (head == NULL) {
        cout << "List kosong!" << endl;
        return;
    }

    if (head == tail) {
        delete head;
        head = tail = NULL;
        return;
    }

    node *p = head;
    while (p -> next != tail) {
        p = p -> next;
    }

    delete tail;
    tail = p;
    tail -> next = NULL;
};

void deleteLastnama() {
    if (head1 == NULL) {
        cout << "List kosong!" << endl;
        return;
    }

    if (head1 == tail1) {
        delete head1;
        head1 = tail1 = NULL;
        return;
    }

    nama *p = head1;
    while (p -> next1 != tail1) {
        p = p -> next1;
    }

    delete tail1;
    tail1 = p;
    tail1 -> next1 = NULL;
};

void displayangka() {
    node *temp = head;
    cout << "Isi linked list: ";
    while (temp != NULL) { 
        cout << temp -> value << " -> ";
        temp = temp -> next;}
    cout << "NULL\n";
};

void displaynama() {
    nama *temp1 = head1;
    cout << "Isi linked list: ";
    while (temp1 != NULL) { 
        cout << temp1 -> value1 << " -> ";
        temp1 = temp1 -> next1;}
    cout << "NULL\n";
};


int main() {
    system("cls");

    cout << "1. insert tail, 2, delete head 3. Delete tail, 4.tampilkan player imo) 5. keluar: ";
            int pilihan;
         cin >> pilihan;

    while (pilihan != 5 ){    
          if (pilihan == 1) {;
                cout << "Masukkan Nama: ";
                char b;
                cin >> b;
                insertLastnama(b);
                cout << "Masukkan Nilai";
                int c;
                cin >> c;
                insertLastImo (c);
          }else if (pilihan == 2) {
                deleteFirst();
                deleteFirstnama();
          } else if (pilihan == 3){
                deleteLast();
                deleteLastnama();
          } else if (pilihan == 4){
               break;
          }
        }

    displayangka();
    displaynama();
}
