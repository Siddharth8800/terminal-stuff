#include <iostream>
using namespace std;
int arr [100] = {0};
int size = 100;
int tail = -1;

void pop() {
    if (tail <= -1) {
        cout << "Stack is empty" << endl;
        return;
    }

    else {
        cout << arr[tail] << endl;
        tail--;
    }
}

void push(int n) {
    if (tail >= 99) {
        cout << "Stack is full" << endl;
    }
    else {
        tail++;
        arr[tail] = n;
    }
}

void peek() {
    if (tail <= -1) {
        cout << "Stack is empty" << endl;
    }
    else {
        cout << arr[tail] << endl;
    }
}

void over() {
    if (tail >= 99) {
        cout << "Stack is overflow" << endl;
    }
    else {
        cout << "Stack is not overflow" << endl;
    }
}

void under() {
    if (tail <= -1) {
        cout << "Stack is underflow" << endl;
    }
    else {
        cout << "Stack is not underflow" << endl;
    }
}

void display() {
    if(tail >= 0) {
        cout<<"Stack elements are: " << endl;
        for(int i = tail; i >= 0; i--)
            cout << arr[i] << endl;
        cout << endl;
    } else
        cout<<"Stack is empty" << endl;

}


int choice() {
    cout << "1. POP" << endl;
    cout << "2. PUSH" << endl;
    cout << "3. PEEK" << endl;
    cout << "4. CHECK OVERLFLOW" << endl;
    cout << "5. CHECK UNDERFLOW" << endl;
    cout << "6. DISPLAY STACK" << endl;
    cout << "7. EXIT" << endl;
    cout << "Please enter your choice: ";
}

bool ask() {

    int n;
    choice();
    cin >> n;
    cout << endl;

    switch(n) {
        case 1:
            pop();
            break;

        case 2:
            int num;
            cout << "Enter the number to push: ";
            cin >> num;
            push(num);
            break;

        case 3:
            peek();
            break;

        case 4:
            over();
            break;

        case 5:
            under();
            break;

        case 6:
            display();
            break;

        case 7:
            return false;

    }
    return true;
}


int main() {
   while(ask()) {
      cout << "_____________________" << endl;
   }
}
