#include <bits/stdc++.h>

using namespace std;
#define f for (int i = 0; i < n; i++)
#define f1 for (int i = 1; i < n; i++)
#define fj for (int j = 0; j < n; j++)
#define s(x) sort(x.begin(), x.end());
#define ll long long

int main()

{
    
        int r;
        cin >> r;
        while (r--)
        {
            int n, m;
            cin >> n >> m;

            int count = 1;
            int w = 0;
            int tw;
            bool possible = true;

            f
            {
                cin >> tw;

                if (tw > m)
                {
                    possible = false;
                }

                if (possible)
                {
                    if (w + tw <= m)
                    {

                        w = w + tw;
                    }
                    else
                    {

                        count++;
                        w = tw;
                    }
                }
            }

            if (!possible)
                cout << -1 << endl;
            else
                cout << count << endl;
        }

        return 0;
    
}