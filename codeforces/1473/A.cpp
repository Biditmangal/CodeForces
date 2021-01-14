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
#define REP(i, n) FOR(i, 0, (int)n)
#define pb(x) push_back(x)
#define mp(a, b) make_pair(a, b)
#define MS0(x) memset(x, 0, sizeof(x))
#define MS1(x) memset(x, 1, sizeof(x))
#define SORT(a, n) sort(begin(a), begin(a) + n)
#define REV(a, n) reverse(begin(a), begin(a) + n)
#define ll long long
#define pii pair<int, int>
#define MOD 1000000007

const int mxN = 2e5;
void solve()
{
    int n,d;
    cin>>n>>d;
    vector<int> a(n),c;
    bool ans=true;
    FOR(i,0,n){
        cin>>a[i];
        if(a[i]>d){
            ans=false;
            c.pb(a[i]);
        }
    }
    int sum=0;
    sort(a.begin(),a.end());
    if(!ans){
        sum=a[0]+a[1];
        if(sum>d){
            ans=false;
        }
        else{
            ans=true;
        }
    }

    // sort(a.begin(),a.end());
    // sort(c.begin(),c.end());
    // int count=c.size();
    // int k=0;
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n-c.size();j++){
    //         if(a[i]+a[j]==c[k]){
    //             count--;
    //             k++;
    //         }
    //     }
    // }
    // if(c.size()!=0){
    //     ans=false;
    // }
    // else{
    //     ans=true;
    // }

    cout<< (ans ? "YES" : "NO") <<endl;

}   

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}