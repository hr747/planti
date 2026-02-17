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
        int a,b,c;
        cin>>a>>b>>c;
        int sum=a+b;
        if(sum==c)
        cout<<"EQUAL"<<endl;
        else if(sum>c)
        cout<<"TRAIN"<<endl;
        else
        cout<<"PLANEBUS"<<endl;
    }
    

    return 0;
}