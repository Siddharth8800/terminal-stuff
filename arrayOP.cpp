#include<iostream>
using namespace std;
int arr[10], total[10] = {0};

void choice() {
    cout << "1. Enter a five digit number" << endl;
    cout << "2. Print Array" << endl;
    cout << "3. Count the number of digits occuring each time" << endl;
    cout << "4. Exit" << endl;

}

void count() {
    int newArr[10];
    for (int i = 0; i < 10; i++) {
        newArr[i] = arr[i];
    }
 for (int i = 0; i < 10; i++) {
    while(newArr[i] != 0){
        
        switch(newArr[i] % 10){
            
            case 0:
            total[0] += 1;
            break;
            
            case 1:
            total[1] += 1;
            break;
            
            case 2:
            total[2] += 1;
            break;
            
            case 3:
            total[3] += 1;
            break;
            
            case 4:
            total[4] += 1;
            break;
            
            case 5:
            total[5] += 1;
            break;
            
            case 6:
            total[6] += 1;
            break;
            
            case 7:
            total[7] += 1;
            break;
            
            case 8:
            total[8] += 1;
            break;
            
            case 9:
            total[9] += 1;
            break;
        }
        newArr[i] /= 10;
    }
 }
}

bool ask() {
    int n;
    choice();
    cin >> n;

    switch(n) {
       case 1:
       for (int i = 0; i < 10; i++) {
	     cout << "Enter a number: ";
	     cin >> arr[i];
	       if (arr[i] > 99999 || arr[i] < 9999) {
		         i--;
		       cout << "Please enter the number again" << endl;
	        }
        }
        break;

        case 2:
        for (int i = 0; i < 10; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        break;

        case 3:
        count();
           cout << "Total 0's are: " << total[0] << endl;
           cout << "Total 1's are: " << total[1] << endl;
           cout << "Total 2's are: " << total[2] << endl;
           cout << "Total 3's are: " << total[3] << endl;
           cout << "Total 4's are: " << total[4] << endl;
           cout << "Total 5's are: " << total[5] << endl;
           cout << "Total 6's are: " << total[6] << endl;
           cout << "Total 7's are: " << total[7] << endl;
           cout << "Total 8's are: " << total[8] << endl;
           cout << "Total 9's are: " << total[9] << endl;
        break;

        case 4:
        return false;
        
    }
    return true;
}

int main() {

    while(ask()) {

    }
}
