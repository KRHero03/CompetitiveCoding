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
    ll n;
    cin >> n;
    string s;
    cin >> s;
    string t = s;
    reverse(t.begin(), t.end());
    int i = 0, j = 0;
    ll ans = 0;
    vector<ll> flag(n,0);
    while (i < n)
    {
        j = 0;

        while (s[j] != t[i])
        {
            j += 1;
        }
        flag[j+i]=1;
        while (i < j)
        {
            char temp = s[j];
            s[j] = s[j - 1];
            s[j - 1] = temp;
            j -= 1;
            ans += 1;
        }
        i += 1;
    }
    cout << ans << endl;
}

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

typedef tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>rbTree;

void solve1(){
    ll n,ans=0;
    cin >> n;
    string s;
    vector<vector<ll>> arr(26);
    cin >> s;
    rbTree rb;
    for (ll i = n - 1; i >= 0; i--)
    {
        arr[s[i] - 'a'].pb(i);
    }
    ll j,k;
    for (ll i = n - 1; i >= 0; i--)
    {
        j = arr[s[i] - 'a'].back();
        arr[s[i] - 'a'].pop_back();
        ll ind = n - 1 - i;
        k=rb.order_of_key(j);
        k=rb.size()-k;
        rb.insert(j);
        ans+=j-ind+k;
    }
    cout<<ans<<endl;
    return;
}
int main()
{
    fastio;
    solve1();
}
