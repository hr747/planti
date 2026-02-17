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
    cin >> t; 

    while (t--) {
        int a;
        cin >> a;

        map<int, int> count; 
        int fre = 0;

        for (int i = 0; i < a; i++) {
            int n;
            cin >> n;

            count[n]++;

            
            if (count[n] > fre) {
                fre= count[n];
            }
        }

        
        int o = a - fre;
        cout << o<< endl;
    }

    

    return 0;
}