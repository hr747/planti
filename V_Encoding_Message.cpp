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
        for(auto i=0;i<n-1;i+=2)
        
            swap(s[i],s[i+1]);

            f
            s[i]='z'-(s[i]-'a');
        
cout<<s<<endl;
    }
    

    return 0;
}