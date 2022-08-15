#include<iostream>
using namespace std;

class dynamicarray{
   int *arr;
   int ni;
   int size;
   
   public:

   dynamicarray() {
    arr = new int [5];
    ni = 0;
    size = 5;
   }

   void add(int n) {
    if (ni >= size) {
        int *newarr = new int [size *= 2];
        for (int i = 0; i < size; i++) {
            newarr[i] = arr[i];
        }
        delete []arr;
        arr = newarr;
    }
    arr[ni] = n;
    ni++;
   }

   int get(int n) {
    if (n >= ni) {
        return -1;
    }
    else {
       return arr[n];
    }
   }

   void addat(int i, int n) {
      if (i < size) {
        arr[i] = n;
      }

      else if(i == ni) {
        add(n);
      }

      else {
        return;
      }
   }

   dynamicarray(dynamicarray const &da) {
       this -> ni = da.ni;
       this -> size = da.size;
       this -> arr = new int[da.size];
       for (int i = 0; i < da.ni; i++) {
        this -> arr[i] = da.arr[i];
       }
   }
  
  void operator = (dynamicarray const &da) {
    this -> size = da.size;
    this -> ni = da.ni;
    this -> arr = new int[da.size];
    for(int i = 0; i < this -> ni; i++) {
        this -> arr[i] = da.arr[i];
    }
  }

  void print() {
    for (int i = 0; i < ni; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
  }
 void getinfo() {
    cout << size << " " << ni << endl;
 }


};

int main() {
    dynamicarray d1;
    
    for (int i = 0; i < 20; i++) {
        d1.add(i);
    }

    d1.addat(1, 1000);
    d1.addat(19, 9000);
    d1.print();
    d1.getinfo();
    dynamicarray d2(d1);
    d1.addat(10, 9999);
    d2.print();
    d1.print();
    
}