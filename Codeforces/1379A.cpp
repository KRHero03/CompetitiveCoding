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
    ll cnt = 0;
    f(i, 0, n - 6)
    {
        string temp = s.substr(i, 7);
        if (temp == "abacaba")
            cnt++;
    }
    if (cnt >= 2)
    {
        cout << "No" << endl;
        return;
    }
    if (cnt == 1)
    {
        cout << "Yes" << endl;
        f(i, 0, n)
        {
            if (s[i] != '?')
                cout << s[i];
            else
                cout << 'z';
        }
        cout << endl;
        return;
    }
    f(i, 0, n - 6)
    {
        if ((s[i] == 'a' || s[i] == '?') && (s[i + 1] == 'b' || s[i + 1] == '?') && (s[i + 2] == 'a' || s[i + 2] == '?') && (s[i + 3] == 'c' || s[i + 3] == '?') && (s[i + 4] == 'a' || s[i + 4] == '?') && (s[i + 5] == 'b' || s[i + 5] == '?') && (s[i + 6] == 'a' || s[i + 6] == '?'))
        {
            string s1 = s;
            s1[i] = 'a';
            s1[i + 1] = 'b';
            s1[i + 2] = 'a';
            s1[i + 3] = 'c';
            s1[i + 4] = 'a';
            s1[i + 5] = 'b';
            s1[i + 6] = 'a';
            ll pass = 0;
            ll cnt1 = 0;
            f(j, 0, n - 6)
            {
                string temp = s1.substr(j, 7);
                if (temp == "abacaba")
                    cnt1++;
            }
            if (cnt1 == 1)
            {
                cout << "Yes" << endl;
                f(i, 0, n)
                {
                    if (s1[i] == '?')
                        cout << 'z';
                    else
                        cout << s1[i];
                }
                cout << endl;
                return;
            }
        }
    }
    cout << "No" << endl;
    return;
}
int main()
{

    whilet()
    {
        solve();
    }
}
