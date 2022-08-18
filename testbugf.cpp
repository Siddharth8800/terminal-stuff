#include <iostream>
using namespace std;
int tail = 0;

void show()
{
    cout << "         MENU       " << endl;
    cout << "1. Delete at the end " << endl;
    cout << "2. Delete at the beginning" << endl;
    cout << "3. Delete at the given position " << endl;
    cout << "4. Delete after a number " << endl;
    cout << "5. Delete before a number " << endl;
    cout << "6. Exit " << endl;
    cout << "Enter your choice : ";
}

bool ask(int arr[]) {

    int n;
    show();
    cin >> n;
    cout << endl;


    switch(n) {
        int a, pos;
        case 1:
            if (tail <= 0) {
                cout << "Array is Empty!!";
                return false;
            }
            arr[tail] = 0;
            tail--;
            for (int i = 0; i < tail; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;



        case 2:
            if (tail <= 0) {
                cout << "Array is Empty!!" << endl;
                return false;
            }
            for (int i = 0; i < tail; i++) {
                arr[i] = arr[i + 1];
            }
            tail--;
            for (int i = 0; i < tail; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;


        case 3:
            cout << "Enter the position to delete number: ";
            cin >> pos;
            if (tail <= 0) {
                cout << "Array is Empty!!";
                return false;
            }
            for (int i = pos - 1; i < tail; i++) {
                arr[i] = arr[i + 1];
            }
            tail--;
            for (int i = 0; i < tail; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;

        case 4:
            if (tail <= 0) {
                cout << "Array is Empty!!";
                return false;
            }
            int num, i;
            cout << "Enter the number to delete after: ";
            cin >> num;

            for (i = 0; i < tail; i++) {
                if (arr[i] == num) {
                    break;
                }
            }
            for (int j = i + 1; j < tail; j++) {
                arr[j] = arr[j + 1];
            }
            tail--;
            for (int i = 0; i < tail; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;

        case 5:
         
            if (tail <= 0) {
                cout << "Array is Empty!!";
                return false;
            }
            i = 0;
            cout << "Enter the number to delete before: ";
            cin >> num;
            for (i = 0; i < tail; i++) {
                if (arr[i] == num) {
                    break;
                }
            }
            for (int j = i - 1; j < tail; j++) {
                arr[j] = arr[j + 1];
            }
            tail--;
            for (int i = 0; i < tail; i++) {
                cout << arr[i] << " ";
            }

            cout << endl;
            break;

        case 6:
            return false;
    }



    return true;

}

int main() {
    int arr[10] = {0};

    cout << "Enter first five elements: ";
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
        tail++;
    }

    while (ask(arr)) {
        //cout << "____________________________" << endl;
        cout << tail << endl;
    }


}