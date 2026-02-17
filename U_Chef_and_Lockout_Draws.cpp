#include <bits/stdc++.h>

using namespace std;
#define f for (int i = 0; i < n; i++)
#define f1 for (int i = 1; i < n; i++)
#define fj for (int j = 0; j < n; j++)
#define s(x) sort(x.begin(), x.end());
#define ll long long

int main()

{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int a, b, c;
        cin >> a >> b >> c;
        string result = "NO";

        if (a + b == c)

            result = "YES";
        else if (a + c == b)
            result = "YES";
        else if (b + c == a)
            result = "YES";

        cout << result << endl;
    }

    return 0;
}