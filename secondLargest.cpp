#include <iostream>
using namespace std;

int main(){
    int arr[7] = {10,75,9,46,46,39,96};
    
    int largest = arr[0];
    int secondlrgst = -1;

    for (int i = 0; i < 7; i++)
    {
      if (arr[i]>largest)
      {
        secondlrgst = largest;
        largest = arr[i];
      }
      else if (largest!= arr[i] && arr[i]>secondlrgst)
      {
        secondlrgst = arr[i];
      }
    }
    cout<<"SecondLargest value "<<secondlrgst;
}