#include <iostream>
#include <vector>
using namespace std;

void ReversePart(vector<int>& v,int s_idx, int e_idx){
     while (s_idx <= e_idx)
     {
        int temp =v[s_idx];
       v[s_idx]=v[e_idx];
       v[e_idx]=temp;
     
       s_idx++;
       e_idx--;
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
    int s_idx,e_idx;
    cout<<"Enter indexes to reverse ";
    cin>>s_idx>> e_idx;
    ReversePart(v,s_idx,e_idx);    
    cout<<"Reverse From your given position ";
    for (int i = 0; i < size; i++)
    {
        cout<<v[i]<<" ";
    }
    
    return 0;
}