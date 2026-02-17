#include <bits/stdc++.h>

using namespace std;
#define f for (int i = 0; i < n; i++)
#define f1 for (int i = 1; i < n; i++)
#define fj for (int j = 0; j < n; j++)
#define s(x) sort(x.begin(),x.end());
#define ll long long

 int main()

{
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n;
        cin>>n;
        string s; 
        cin>>s;
        int one=0;
        int zero=0;
        int ans=0; 

        f
        { 
            if(s[i]=='1')
            {
                one++;
                if(zero > ans) ans = zero; 
                zero = 0; 
            }
            else
            {
                zero++;
            }

        }
        if(zero > ans) ans = zero; 
        int mat = ans + one;
        cout<<mat<<endl;

    }

    return 0;
}