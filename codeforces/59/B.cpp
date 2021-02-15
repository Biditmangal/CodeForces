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
    int a[n];
    FOR(i, 0, n)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    vector<int> odd = {}, even = {};
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            odd.pb(a[i]);
        }
        else
        {
            even.pb(a[i]);
        }
    }
    int ans=0;
    if (odd.size() == 0)
    {
        ans = 0;
    }
    else if (even.size() == 0)
    {
        if(odd.size()%2==0){
            for(int i=1;i<odd.size();i++){
                ans+=odd[i];
            }
        }
        else{
            for (int i = 0; i < odd.size(); i++)
            {
                ans += odd[i];
            }
        }
        // ans = odd[odd.size() - 1];
    }
    else{
        // ans = odd[odd.size() - 1] + even[even.size() - 1];
        if (odd.size() % 2 == 0)
        {
            for (int i = 1; i < odd.size(); i++)
            {
                ans += odd[i];
            }
        }
        else
        {
            for (int i = 0; i < odd.size(); i++)
            {
                ans += odd[i];
            }
        }
        for (int i = 0; i < even.size(); i++)
        {
            ans += even[i];
        }
    }
    cout << ans << endl;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--)
        solve();

    return 0;
}