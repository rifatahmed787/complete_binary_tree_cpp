#include<bits/stdc++.h>
using namespace std;
 
int main(){
    vector<int>v={50, 40, 45, 30, 35, 42, 32, 25, 20, 10};
    int x;
    cin>>x;
    v.push_back(x);
    int current_indx =v.size()-1;
    // cout<<current_indx<<endl;
    while(current_indx!=0){
        int parent_indx=(current_indx - 1)/2;
        if(v[current_indx] > v[parent_indx]){
            swap(v[current_indx], v[parent_indx]);
        }else {
            break;
        };
        current_indx = parent_indx;

    }
    for(int val:v)cout<<val<<" ";
    return 0;
}

// complexity log(N);