#include <iostream>
using namespace std;

  void countEvenOdd(int arr[],int n,int &Even,int &Odd){
    Even = 0;
    Odd = 0;  
    for (int i = 0; i< n; i++)
      {
        if (arr[i]%2==0)
          Even++;
        else
          Odd++;
      }
  }
  
  int  main(){
    int size;
    cout<<"Enter Size of array";
    cin>>size;
    cout<<"Enter Elements: ";
    int* ptr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin>>ptr[i];
    }
    int even,odd;
    countEvenOdd(ptr,size,even,odd);

    cout<<"Even "<<even<<endl;
    cout<<"Odd "<<odd;
    delete[] ptr;

}