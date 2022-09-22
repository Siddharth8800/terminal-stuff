#include<iostream>
using namespace std;

int queue[100], n = 10;
int front = -1, rear = -1, total = 0;

void enqueue() {
    int val;
    if (rear == n - 1) {
        cout << "Queue Overflow" << endl;
        return;
    }
    else {
        if (front == -1)
            front = 0;
        cout<<"Insert the element in queue : ";
        cin>>val;
        rear++;
        queue[rear] = val;
        total++;
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        cout<<"Queue Underflow " << endl;
        return;
    } else {
        cout<<"Element deleted from queue is : "<< queue[front] <<endl;
        front++;
        total--;
    }
}



void display() {
    if (front == - 1) {
        cout << "Queue is empty" <<endl;
        return;
    }
    else {
        cout<<"Queue elements are : ";
        for (int i = front; i <= rear; i++)
            cout<<queue[i]<<" ";
        cout<<endl;
    }
}

void peek() {
    if (front == - 1) {
        cout << "Queue is empty" <<endl;
        return;
    }
    cout << queue[rear] << endl;
}

void over() {
    if (rear >= n - 1) {
        cout << "Queue is Overflowing" << endl;
    }
    else {
        cout << "Queue is not Overflowing" << endl;
    }
}

void under() {
    if (front <= -1) {
        cout << "Queue is underflowing" << endl;
    }
    else {
        cout << "Queue is not underflwoing" << endl;
    }
}

void ask() {
    cout << "   MENU   " << endl;
    cout << "1. Enqueue" << endl;
    cout << "2. Dequeue" << endl;
    cout << "3. Peek" << endl;
    cout << "4. Check Overflow" << endl;
    cout << "5. Check Underflow" << endl;
    cout << "6. Total elements in Queue" << endl;
    cout << "7. Display Queue" << endl;
    cout << "8. Exit" << endl;
    cout << "Enter your choice: ";
}

bool choice() {
    int n;
    ask();
    cin >> n;

    switch(n) {
        case 1:
            enqueue();
            break;

        case 2:
            dequeue();
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
            cout << "Total elements in the Queue are: " << total << endl;
            break;

        case 7:
            display();
            break;

        case 8:
            return false;
    }
    return true;
}


int main() {
    while(choice()) {

    }
}
