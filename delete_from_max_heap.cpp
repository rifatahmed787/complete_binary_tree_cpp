#include <bits/stdc++.h>
using namespace std;

void insert(vector<int> &v, int x)
{
    v.push_back(x);
    int current_indx = v.size() - 1;
    // cout<<current_indx<<endl;
    while (current_indx != 0) // complexity log(N)
    {
        int parent_indx = (current_indx - 1) / 2;
        if (v[current_indx] > v[parent_indx])
        {
            swap(v[current_indx], v[parent_indx]);
        }
        else
        {
            break;
        };
        current_indx = parent_indx;
    }
}
void delete_heap(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();

    int curr = 0;
    while (true)
    {
        int left_inx = curr * 2 + 1;
        int right_inx = curr * 2 + 2;
        int last_inx = v.size() - 1;

        if (left_inx <= last_inx && right_inx <= last_inx)
        {
            if (v[left_inx] >= v[right_inx] && v[left_inx] > v[curr])
            {
                swap(v[left_inx], v[curr]);
                curr = left_inx;
            }
            else if (v[right_inx] >= v[left_inx] && v[right_inx] > v[curr])
            {
                swap(v[right_inx], v[curr]);
                curr = right_inx;
            }
            else
            {
                break;
            }
        }
        else if (left_inx <= last_inx)
        {
            if(v[left_inx] > v[curr]){
                swap(v[left_inx], v[curr]);
                curr=left_inx;
            }else{
                break;
            }
        }
        else if (right_inx <= last_inx)
        {
            if(v[right_inx] > v[curr]){
                swap(v[right_inx], v[curr]);
                curr=right_inx;
            }else{
                break;
            }
        }
        else
        {
            break;
        }
    }
}
void print_heap(vector<int>v){
    for(int val:v){
        cout<<val<<" ";
    }
}
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert(v, x);
    }
    delete_heap(v);
    
    print_heap(v);
    return 0;
}