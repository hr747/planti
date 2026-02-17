#include <bits/stdc++.h>

using namespace std;
#define f for (int i = 0; i < n; i++)
#define f1 for (int i = 1; i < n; i++)
#define fj for (int j = 0; j < n; j++)
#define s(x) sort(x.begin(),x.end());
#define ll long long

 int main()

{
     int a, b, c, d;
    
    cin >> a >> b >> c >> d;

    int count = 0;

    
    if (a >= 10) count++;
    if (b >= 10) count++;
    if (c >= 10) count++;
    if (d >= 10) count++;

    
    cout << count << endl;

    return 0;
}