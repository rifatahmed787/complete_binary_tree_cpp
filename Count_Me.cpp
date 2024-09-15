#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {

        string s;
        getline(cin, s);
        string w;
        stringstream ss(s);
        map<string, int> m;
        pair<string, int> p("",0);
        while (ss >> w)
        {
            m[w]++;
            if (m[w] > p.second)
            {
                p.second = m[w];
                p.first = w;
            }
        }
        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;
}