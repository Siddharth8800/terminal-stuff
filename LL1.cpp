#include<iostream>
using namespace std;

class node {
public: 
    int num;
    node *next;

    node(int num) {
        this -> num = num;
        next = NULL;
    }
};

void print(node *head) {
    while (head != NULL) {
        cout << head -> num << " ";
        head = head -> next;
    }
}

bool ask() {
    int choice;
    cout << "Do you want to enter a number? " << endl;
    cout << "1. YES" << endl;
    cout << "2. NO " << endl;
    cin >> choice;
    if (choice == 1) {
        return true;
    }
    else {
        return false;
    }
}

node* insert() {
    int num;
    node *head = NULL;
    node *tail = NULL;
    while(ask()) {
        cout << "Enter the number: ";
        cin >> num;
        node *n = new node(num);
        if (head == NULL) {
            head = n;
            tail = n;
        }
        else {
            tail -> next = n;
            tail = n;
        }
    }
    return head;
}

int main() {
  node *head = insert();
    print(head);
}