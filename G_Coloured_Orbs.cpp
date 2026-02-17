#include <bits/stdc++.h>

using namespace std;
#define f for (int i = 0; i < n; i++)
#define f1 for (int i = 1; i < n; i++)
#define fj for (int j = 0; j < n; j++)
#define s(x) sort(x.begin(),x.end());
#define ll long long

 int main()

{
    int r,b;
    cin>>r>>b;
    int k=min(r,b);
    int l=r-k;
    int s=b-k;
    int sum=(k*5)+(l*1)+(s*2);
    cout<<sum<<endl;

    return 0;
}