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
ll pass = 1;
ll n, m;
vector<vector<char>> arr;

void go(ll x, ll y)
{
    if (x == n - 1 && y == m - 1)
    {
        if (arr[n - 1][m - 1] == '#')
        {
            pass = 0;
        }
        return;
    }
    if (x + 1 < n)
    {
        if (arr[x + 1][y] == 'G' || arr[x + 1][y] == '.')
        {
            go(x + 1, y);
        }
        else
        {
            pass = 0;
            return;
        }
    }
    if (y + 1 < m)
    {
        if (arr[x][y + 1] == 'G' || arr[x][y + 1] == '.')
        {
            go(x, y + 1);
        }
        else
        {
            pass = 0;
            return;
        }
    }
}
void solve()
{
    pass = 1;
    cin >> n >> m;
    arr = vector<vector<char>>(n, vector<char>(m));
    f(i, 0, n) f(j, 0, m) cin >> arr[i][j];
    f(i, 0, n)
    {
        f(j, 0, m)
        {
            if (arr[i][j] == 'B')
            {
                if (i + 1 < n)
                {
                    if (arr[i + 1][j] == 'G')
                    {
                        cout << "No" << endl;
                        return;
                    }
                    if (arr[i + 1][j] == '.')
                    {
                        arr[i + 1][j] = '#';
                    }
                }
                if (j - 1 >= 0)
                {
                    if (arr[i][j - 1] == 'G')
                    {
                        cout << "No" << endl;
                        return;
                    }
                    if (arr[i][j - 1] == '.')
                    {
                        arr[i][j - 1] = '#';
                    }
                }
                if (i - 1 >= 0)
                {
                    if (arr[i - 1][j] == 'G')
                    {
                        cout << "No" << endl;
                        return;
                    }
                    if (arr[i - 1][j] == '.')
                    {
                        arr[i - 1][j] = '#';
                    }
                }
                if (j + 1 < m)
                {
                    if (arr[i][j + 1] == 'G')
                    {
                        cout << "No" << endl;
                        return;
                    }
                    if (arr[i][j + 1] == '.')
                    {
                        arr[i][j + 1] = '#';
                    }
                }
            }
        }
    }
    vector<vector<bool>> vis(n, vector<bool>(m, false));
    queue<pair<ll, ll>> q;
    if (arr[n - 1][m - 1] != 'B' && arr[n - 1][m - 1] != '#')
    {
        vis[n - 1][m - 1] = true;
        q.push({n - 1, m - 1});
    }
    while (!q.empty())
    {
        pair<ll, ll> p = q.front();
        q.pop();
        int x = p.first, y = p.second;
        if (x > 0 && !vis[x - 1][y] && (arr[x - 1][y] == '.' || arr[x - 1][y] == 'G'))
        {
            q.push({x - 1, y});
            vis[x - 1][y] = true;
        }
        if (y > 0 && !vis[x][y - 1] && (arr[x][y - 1] == '.' || arr[x][y - 1] == 'G'))
        {
            q.push({x, y - 1});
            vis[x][y - 1] = true;
        }
        if (x < n - 1 && !vis[x + 1][y] && (arr[x + 1][y] == '.' || arr[x + 1][y] == 'G'))
        {
            q.push({x + 1, y});
            vis[x + 1][y] = true;
        }
        if (y < m - 1 && !vis[x][y + 1] && (arr[x][y + 1] == '.' || arr[x][y + 1] == 'G'))
        {
            q.push({x, y + 1});
            vis[x][y + 1] = true;
        }
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (arr[i][j] == 'G' && !vis[i][j])
                pass = 0;
    if (pass)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

void solve1()
{
    ll cnt = 0;
    cin >> n >> m;
    arr = vector<vector<char>>(n, vector<char>(m));
    f(i, 0, n) f(j, 0, m) cin >> arr[i][j];
    f(i, 0, n)
    {
        f(j, 0, m)
        {
            if (arr[i][j] == 'G')
                cnt++;
            else if (arr[i][j] == 'B')
            {
                if (i > 0 && arr[i - 1][j] == 'G')
                {
                    cout << "No" << endl;
                    return;
                }
                if (i < (n - 1) && arr[i + 1][j] == 'G')
                {
                    cout << "No" << endl;
                    return;
                }
                if (j > 0 && arr[i][j - 1] == 'G')
                {
                    cout << "No" << endl;
                    return;
                }
                if (j < (m - 1) && arr[i][j + 1] == 'G')
                {
                    cout << "No" << endl;
                    return;
                }
            }
        }
    }
    if (n > 1 && arr[n - 2][m - 1] == 'B' && cnt > 0)
    {
        cout << "No" << endl;
        return;
    }
    if (m > 1 && arr[n - 1][m - 2] == 'B' && cnt > 0)
    {
        cout << "No" << endl;
        return;
    }
    if (arr[n - 1][m - 1] == 'B' || arr[n - 1][m - 1] == '#')
    {
        cout << "No" << endl;
        return;
    }
    cout << "Yes" << endl;
    return;
}
int main()
{

    whilet()
    {
        solve();
    }
}
