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
#define whilet() \
    int t;       \
    cin >> t;    \
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
    ll n, l;
    cin >> n >> l;
    vector<ll> arr(n);
    for (auto &i : arr)
        cin >> i;
    double ans = 0;
    double d1 = 0, d2 = l;
    double s1 = 1, s2 = 1;
    ll left = 0, right = n - 1;
    while (left <= right)
    {
        double dist1 = (double) (arr[left] - d1);
        double start1 =(double)  s1;
        double x = dist1 / start1;
        double dist2 = (double) (d2 - arr[right]);
        double start2 = (double) s2;
        double y = dist2 / start2;
        //cout<<setprecision(5)<<fixed<<d1<<" "<<d2<<" "<<s1<<" "<<s2<<" "<<x<<" "<<y<<endl;
        if (abs(x-y)<=1e-14)
        {
            d1 = arr[left];
            d2 = arr[right];
            s1++;
            s2++;
            ans += x;
            left++;
            right--;
        }
        else if (x < y)
        {
            s1++;
            d1 = arr[left];
            d2 -= x * s2;
            ans += x;
            left++;
        }
        else if (x > y)
        {
            s2++;
            d2 = arr[right];
            d1 += y * s1;
            ans += y;
            right--;
        }
    }
    double t = (double)(d2 - d1);
    double u = (double)(s2 + s1);
    double z = t / u;
    ans += z;
    cout << setprecision(10) << fixed << ans << endl;
}
int main()
{

    whilet()
    {
        solve();
    }
}
