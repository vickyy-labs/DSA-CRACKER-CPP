#include <iostream>
using namespace std;

 int main(){
    int size;
    cout<<"Enter array size ";
    cin>>size;
    int* arr = new int[size];
    
    cout<<size<<" "<<"Elements enter";
     for(int i=0;i<size;i++){
        cin>>arr[i];
     }

     int* fptr = arr;
    int* lptr = &arr[size-1];

    while (fptr < lptr)
    {
      int temp =*fptr;
      *fptr = *lptr;
      *lptr = temp;
      *fptr++;
      *lptr--;
    }
     cout<<"reversed array";
     for (int i = 0; i < size; i++)
     {
       cout<<arr[i]<<" ";
     }
     delete[] arr;
     
 }