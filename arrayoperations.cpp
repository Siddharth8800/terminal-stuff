#include <iostream>
using namespace std;
int tail = 0;

void show()
    {
        cout << "         MENU       " << endl;
        cout << "1. Insert at the end " << endl;
        cout << "2. Insert at the beginning" << endl;
        cout << "3. Insert at the given position " << endl;
        cout << "4. Insert after a number " << endl;
        cout << "5. Insert before a number " << endl;
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
            if (tail == 10) {
                cout << "Array is full!!";
                break;
            }
            cout << "Enter the number to insert at the end: ";
            cin >> a;
            arr[tail] = a;
            tail++;
            for (int i = 0; i < tail; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;
           
   
   
            case 2:
            if (tail == 10) {
                cout << "Array is full!!" << endl;
                break;
            }
            cout << "Enter the number to insert at the start: ";
            cin >> a;
            arr[tail + 1] = a;
            tail++;
            for (int i = tail; i > 0; i--) {
                int temp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;
            }
            for (int i = 0; i < tail; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;
             /* for (int i=tail; i >= 0; i--) {
                    arr[i] = arr[i-1];
                    arr[i] = a;
              }*/

            case 3: 
            cout << "Enter the position to insert number: ";
            cin >> pos;
            if (tail == 10) {
                cout << "Array is full!!";
                break;
            }
            else {
            cout << "Enter the number to insert: ";
            cin >> a;
            }
            arr[tail] = a;
            for (int i = tail; i >= pos; i--) {
                int temp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;
            }
            tail++;
            for (int i = 0; i < tail; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;

            case 4:
            if (tail == 10) {
                cout << "Array is full!!";
                break;
            }
            int num, i;
            cout << "Enter the number to insert after: ";
            cin >> num;
            cout << "Enter the number to insert number: ";
            cin >> a;

            for (i = 0; i < tail; i++) {
                if (arr[i] == num) {
                    break;
                }
            }
            arr[tail] = a;
            for (int j = tail; j > i + 1; j--) {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
            tail++;
            for (int i = 0; i < tail; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;

            case 5:
            if (tail == 10) {
                cout << "Array is full!!";
                break;
            }
            i = 0;
            cout << "Enter the number to insert before: ";
            cin >> num;
            cout << "Enter the number to insert number: ";
            cin >> a;
            arr[tail] = a;
             for (i = 0; i < tail; i++) {
                if (arr[i] == num) {
                    break;
                }
            }
            for (int j = tail; j > i; j--) {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
            tail++;
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
    
    cout << "Enter first three elements: ";
    for(int i = 0; i < 3; i++) {
        cin >> arr[i];
        tail++;
    }

     while (ask(arr)) {
       //cout << "____________________________" << endl;
       cout << tail << endl;
        }

    
}
