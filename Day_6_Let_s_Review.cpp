#include <bits/stdc++.h>

using namespace std;
#define f for (int i = 0; i < n; i++)
#define f1 for (int i = 1; i < n; i++)
#define fj for (int j = 0; j < n; j++)
#define s(x) sort(x.begin(),x.end());
#define ll long long

 int main()

{
       int n;
    cin>>n;
    while(n--)
    {
        string s,e,o;
        cin>>s;
        for(auto i=0;i<s.size();i++)
        {
            if(i%2==0)
            o.push_back(s[i]);
            else
            e.push_back(s[i]);
            
            
        }
        cout<<o<<" "<<e<<endl;
    }

    return 0;
}