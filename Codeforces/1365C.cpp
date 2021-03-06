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
    ll n, max = 0;
    cin >> n;
    vector<ll> a(n), b(n), c(n + 1);
    map<ll, ll> umap;
    f(i, 0, n)
            cin >> a[i];
    f(i, 0, n)
    {
        cin >> b[i];
        c[b[i]] = i;
    }
    f(i, 0, n)
    {
        ll f = i - c[a[i]];
        f = (f + n) % n;
        umap[f]++;
    }
    for (auto p : umap)
    {
        if (p.S > max)
            max = p.S;
    }
    cout << max << endl;
}
int main()
{
    solve();
}
