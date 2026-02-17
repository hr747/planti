#include <bits/stdc++.h>

using namespace std;
#define f for (int i = 0; i < n; i++)
#define f1 for (int i = 1; i < n; i++)
#define fj for (int j = 0; j < n; j++)
#define s(x) sort(x.begin(),x.end());
#define ll long long

 int main()

{
    int q;
    cin>>q;
    while (q--)
    {
        /* code */
        int a,b;
        cin>>a>>b;
       while (a%2==0)
       {
        a/=2;
       }
       while(b%2==0)
       {
        /* code */
        b/=2;
       }
       if(a==b)
       cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;

    }
    

    return 0;
}