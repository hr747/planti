#include <bits/stdc++.h>

using namespace std;
#define f for (int i = 0; i < n; i++)
#define f1 for (int i = 1; i < n; i++)
#define fj for (int j = 0; j < n; j++)
#define s(x) sort(x.begin(), x.end());
#define ll long long

int main()

{
    int q;
    cin >> q;
    while (q--)
    {
        /* code */
        int a, b;
        cin >> a >> b;
        
        if (a == b)
        {
            cout << 0 << endl;
        }

        else if (a < b)
            cout << b - a << endl;
        else if (a > b)
        {
            int sum=a-b;
            if(sum%2==0)
            cout<<sum/2<<endl;
            else
            cout<<(sum+1)/2+1<<endl;
           
        }
    }

    return 0;
}