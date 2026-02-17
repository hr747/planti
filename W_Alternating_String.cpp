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
        f
        {
            if(s[i]=='0')
            zero++;
            else
            one++;

        }
        int sum= min(one,zero);
        if(one==zero)
        {
            cout<<n<<endl;
           
        }
        else
         cout<<(sum*2)+1<<endl;

    }
    

    return 0;
}