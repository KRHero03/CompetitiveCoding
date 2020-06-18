/*
	author: KRHero
	IDE: VSCode	
*/

#include <bits/stdc++.h>

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define f(i, a, b) for (int i = a; i < b; i++)
#define fe(i, a, b) for (int i = a; i <= b; i++)
#define fd(i, a, b) for (int i = b; i > a; i--)
#define fde(i, a, b) for (int i = b; i >= a; i--)
#define fastio   \
    cin.tie(0);  \
    cout.tie(0); \
    ios_base::sync_with_stdio(false);
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define MID(s, e) (s + (e - s) / 2)
#define whilet()     \
    int t;           \
    scanf("%d", &t); \
    while (t--)
#define F first
#define S second
#define mp make_pair
#define epsilon 1e-15
#define pb push_back
#define PI 3.1415926535897932384626433832

using namespace std;

void solve()
{
    ll n, r;
    cin >> n;
    ll arr[n], a[n];
    f(i, 0, n)
            cin >> arr[i];
    ll c = 0, z = 0;
    f(i, 0, n)
    {
        cin >> a[i];
        if (a[i] == 1)
            c++;
        else
            z++;
    }
    if (n == 1)
    {
        cout << "Yes" << endl;
    }
    else if ((c > 0) && (z > 0))
        cout << "Yes" << endl;
    else
    {
        r = 1;
        f(i, 1, n)
        {
            if (arr[i] < arr[i - 1])
            {
                r = 0;
                break;
            }
        }
        if (r == 0)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return;
}
int main()
{

    whilet()
    {
        solve();
    }
}
