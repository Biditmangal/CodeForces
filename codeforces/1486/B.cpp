#include <math.h>
#include <time.h>
#include <ctype.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

#define sp system("pause")
#define FOR(i, a, b) for (int i = a; i < b; ++i)
#define FORD(i, a, b) for (int i = a; i > b; --i)
#define REP(i, n) FOR(i, 0, (int)n - 1)
#define pb(x) push_back(x)
#define mp(a, b) make_pair(a, b)
#define MS0(x) memset(x, 0, sizeof(x))
#define MS1(x) memset(x, 1, sizeof(x))
#define SORT(a, n) sort(begin(a), begin(a) + n)
#define REV(a, n) reverse(begin(a), begin(a) + n)
#define ll long long
#define pii pair<int, int>
#define MOD 1000000007

void solve()
{
    // code goes here...
    int n;
    cin >> n;
    // vector<pii> a(n);
    // FOR(i,0,n){
    //     cin>>a[i].first>>a[i].second;
    // }
    int x[n+1], y[n+1];
    FOR(i, 0, n)
    {
        cin >> x[i] >> y[i];
    }

    sort(x, x + n);
    sort(y, y + n);

    if(n%2==1){
        cout<<1<<endl;
        return;
    }

    ll ansx = x[(n) / 2] - x[(n - 1) / 2] + 1;
    ll ansy = y[(n) / 2] - y[(n - 1) / 2] + 1;
    cout << ansx * ansy << endl;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}