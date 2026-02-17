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
    vector<int>v(n);
    vector<int>x(n);
    
 int s1 = 0, s2 = 0;
    f {
        int a, b;
        cin >> a >> b;
        s1 += a; // Proti round er score jog kora
        s2 += b;
        v[i] = s1; // Vector-e total score rakha
        x[i] = s2;
    }
    int max_led=0;
    int w=0;
    int lid,lider;
    for(auto i=0;i<n;i++)
    {
        if(v[i]>x[i])
        {
            lid=v[i]-x[i];
            lider=1;
        }
        else{
        lid=x[i]-v[i];
        lider=2;
        }
        if(lid>max_led)
        {
            max_led=lid;
            w=lider;

        }
    }
    cout<<w<<" "<<max_led;

   

    return 0;
}