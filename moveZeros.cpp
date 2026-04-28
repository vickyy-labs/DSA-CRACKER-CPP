#include <iostream>
using namespace std;
 
   void moveZeros(int arr[],int n){
     int j= 0;
       for (int i = 0; i < n; i++)
       {
         if(arr[i]!=0){
            arr[j]=arr[i];
            j++;
         }
       }
       while(j<n){
         arr[j]=0;
         j++;
       }
   }

int main(){
    int size;
    cout<<"Enter Size of array ";
    cin>>size;
    int* ptr = new int[size];
    cout<<"Enter elements ";
    for (int i = 0; i < size; i++)
    {
      cin>>ptr[i];
    }
    moveZeros(ptr,size);
    cout<<"Shifted zeros in end  ";
    for (int i = 0; i < size; i++)
    {
      cout<<ptr[i]<<" ";
    }
   delete[] ptr;   
    
}