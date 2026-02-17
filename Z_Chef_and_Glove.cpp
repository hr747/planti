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
        vector<int>a(n),g(n);
        bool flag1=false;
        bool flag2=false;
       f cin>>a[i];
       f cin>>g[i];
        f
        
        {
            if(a[i]>g[i])
            {
                flag1=true;
                break;
            }

        }
        reverse(g.begin(),g.end());
          f
        
        {
            if(a[i]>g[i])
            {
                flag2=true;
                break;
            }

        }
        if(flag1==false&&flag2==false)
        cout<<"both"<<endl;
        else if(flag1==false)
        cout<<"front"<<endl;
        else if(flag2==false)
        cout<<"back"<<endl;
        else
        cout<<"none"<<endl;
        

    }
    

    return 0;
}