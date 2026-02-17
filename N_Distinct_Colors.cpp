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
        int n;
        cin>>n;
        vector<int> v(n);
        for(auto i=0;i<n;i++)
        {
            cin>>v[i];
        

        }
         int sum= *max_element(v.begin(),v.end());
         cout<<sum<<endl;

    }
    
    

    return 0;
}