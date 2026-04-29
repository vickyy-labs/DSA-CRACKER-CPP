#include <iostream>
#include <vector>
using namespace std;

  void ReversePart(vector<int>& v,int startIdx, int endIdx){
     while (startIdx <= endIdx)
     {
        int temp =v[startIdx];
       v[startIdx]=v[endIdx];
       v[endIdx]=temp;
     
       startIdx++;
       endIdx--;
     }
    }
 int main() {
    int size;
    cout<<"Enter size of array ";
    cin>>size;

    vector<int> v;
    cout<<"Enter elements : ";
    for (int i = 0; i < size; i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    int n = v.size();
    int position;
    cout<<"Enter Position to rotate ";
    cin>>position;
    if (position>n)
        position=position%n;
    
    ReversePart(v,0, n-position-1);
    ReversePart(v,n-position,n-1);
    ReversePart(v,0,n-1);
    
    for (int i = 0; i < n; i++)
    {
       cout<<v[i]<<" ";
    }
    
    return 0;
}
