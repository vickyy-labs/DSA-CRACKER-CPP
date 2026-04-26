#include <iostream>
using namespace std;
 
 int main(){
    int arr[5] = {10,50,46,78,96};
    int* ptr = arr;

    // cout<<*ptr<<endl; // arr itself pointer to first element
    // cout<<*(ptr+1); // means next element 

    for(int i=0;i<5;i++){
        cout<<*(ptr+i)<<endl;
    }
     
 }