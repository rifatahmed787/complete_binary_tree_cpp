#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int, 
    vector<int>, 
    greater<int>> pq;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int v; cin >> v;
        pq.push(v);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            int v;
            cin >> v;
            pq.push(v);
            cout << pq.top() << endl;
        }
        else if (x == 1)
        {
            if (pq.size())
            {
                cout << pq.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else
        {
            if(!pq.empty()){
                pq.pop();
            }
            if (pq.size())
            {
                cout << pq.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }
    return 0;
}