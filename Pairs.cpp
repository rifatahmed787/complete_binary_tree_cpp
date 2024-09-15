#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int val;
    Student(string s, int v)
    {
        name = s;
        val = v;
    }
};

bool cmp(Student a, Student b)
    {
        if (a.name == b.name)
        {
            return a.val > b.val;
        }else{
            return a.name < b.name;
        }
    }

int main()
{
   vector<Student> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        int a;
        cin >> s >> a;
        v.push_back((Student(s, a)));
    }
    sort(v.begin(), v.end(),cmp);
    for (int i = 0; i < n; i++)
    {
       cout << v[i].name << " " << v[i].val << endl;
    }
    
    return 0;
}