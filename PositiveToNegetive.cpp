#include <iostream>
#include <vector>
using namespace std;

void PositiveToNegative(vector<int>& v){
   int i=0;
   int j = v.size()-1;
    
   while (i<j){
      if (v[i]>0) i++;
      if (v[j]<0) j--;
      if(i>j) break;
      if (v[i]<0 && v[j]>0){
           int temp =v[i];
           v[i] =v[j];
           v[j] =temp;
           i++;
           j--;
      }
      
      
   }
   
}

int main(){
    int size;
    cout<<"Enter size..." ;
    cin>>size;
    vector<int> v(size);
    cout<<"Enter Positive Negative Numbers to sort ";
    for (int i = 0; i < size; i++)
    {
        cin>>v[i];
    }

    PositiveToNegative(v);

    cout<<"Rearranged (Positive first, Negative later): ";
    for (int i = 0; i < size; i++)
    {
        cout<<v[i]<<" ";
    }
    

}