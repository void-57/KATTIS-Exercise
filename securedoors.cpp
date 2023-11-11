// This is void-57
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    int n;
    cin >> n;
    map<string, bool> m;

    while (n--)
    {
        string operation, name;
        cin >> operation >> name;

        if (operation == "entry")
        {
            bool isInside = m[name];
            cout << name << " entered" << (isInside ? " (ANOMALY)" : "") << endl;
            m[name] = true;
        }
        else
        {
            bool isInside = m[name];
            cout << name << " exited" << (isInside ? "" : " (ANOMALY)") << endl;
            m[name] = false;
        }
    }

    return 0;
}