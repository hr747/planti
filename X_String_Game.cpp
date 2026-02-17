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
        if(n%2!=0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        sort(s.begin(),s.end());
        string a;
        string b;
    f
        {
            /* code */
            
            if(i%2==0)
                a.push_back(s[i]);
                else
                b.push_back(s[i]);
            

        }
        if(a==b)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        
    }
    

    return 0;
}