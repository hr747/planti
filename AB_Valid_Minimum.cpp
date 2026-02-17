#include <bits/stdc++.h>

using namespace std;
#define f for (int i = 0; i < n; i++)
#define f1 for (int i = 1; i < n; i++)
#define fj for (int j = 0; j < n; j++)
#define s(x) sort(x.begin(), x.end());
#define ll long long

int main()

{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        vector<int> a(3);
        cin>> a[0] >> a[1] >> a[2];
        sort(a.begin(),a.end());
        if (a[0]==a[1])
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}