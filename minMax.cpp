#include <iostream>
using namespace std;

int main (){
    int arr[5] ={10,50,12,30,45};
    int* ptr =arr;
    int min=arr[0];
    int max=arr[0];
    for(int i=0;i<5;i++){
       if (*(ptr+i)>max)
       {
        max=*(ptr+i);
       }
       else if(*(ptr+i)<min)
       {
        min=*(ptr+i);
       }
    }
    cout<<"max value "<<max<<"min value "<<min;
    
}