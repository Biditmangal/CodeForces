#include<iostream>
using namespace std;
#define ll long long
int main(){
    int n,m,a;
    cin>>n>>m>>a;
    ll ans = (n+a-1)/a;
    ans*=(m+a-1)/a;
    cout<<ans;
    return 0;
}