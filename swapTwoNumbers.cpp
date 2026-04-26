#include <iostream>
using namespace std;

  void swap(int* a,int* b){
     int temp = *a;
     *a = *b;
     *b = temp;
     return;
  }

  int main(){
    int a, b;
    cout<<"Enter tow number to swap";
    cin>>a>>b;
    swap(&a,&b);
    cout<<"Swapped: "<<a <<" " <<b;
  }