#include<bits/stdc++.h>
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
typedef long long int ll;

using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
    ll n;
    cin>>n;
    auto st=clock();
    vector<ll> v;
    v.push_back(10);
    for(int i=0;i<n;i++){
        v.push_back(n-i);
    }
    sort(v.begin(),v.end());
    auto en=clock();
    cout<<en-st<<endl;
    return 0;
}