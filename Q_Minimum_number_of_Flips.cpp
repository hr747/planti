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
        int a;
        cin>>a;
        int sum=0;
        int count=0;

        int x[a];
        for(auto i=0;i<a;i++)
        {
        cin>>x[i];
        sum+=x[i];
        if(x[i]==1)
        count++;
        }
        if(a%2!=0)
        cout<<-1<<endl;
        else{
            int b=(a/2);
        cout<<abs(count-b)<<endl;
        }



    }
    

    return 0;
}