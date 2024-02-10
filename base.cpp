// ┳┓┏┓┏┓┳┓  ┳┳┓┏┓┳┳┓┏┓  ┳┳┓┏┓┳┓┏┓
// ┃┃┣ ┣┫┃┃  ┃┃┃┗┓┃┃┃┣   ┃┃┃┃┃┃┃┣
// ┻┛┗┛┛┗┻┛  ┻┛┗┗┛┻┻┛┗┛  ┛ ┗┗┛┻┛┗┛

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;
#define fast ios::sync_with_stdio(NULL); cin.tie(0); cout.tie(0)
#define INF 1e9
#define f first
#define s second
#define pb push_back
#define fill(a,val) memset(a, val, sizeof(a));
#define rep(i,n) for(int i=1;i<=n;++i)
#define FOR(i,a,b) for(int i = a; i < b; ++i)
#define sortv(v) sort(v.begin(), v.end())
#define sortvr(v) sort(v.rbegin(), v.rend())
#define MOD 1000000007
#define ADD(a,b) ((a+b) % MOD)
#define MUL(a,b) ((a*b) & MOD)
#define LOCAL_TESTING 0

void solve() {
    ll n;
    cin >> n;

    vector<int> a(n);
    for(int i=0;i<n;++i) cin >> a[i];

    vector<int> p(n,-1);
    for(int i=1;i<n;++i){
        p[i]=p[i-1];
        if(a[i]!=a[i-1]) p[i]=i-1;
    }

    ll q;
    cin >> q;
    for(int i=0;i<q;++i){
        ll l,r;
        cin>>l>>r;
        l--;
        r--;

        if(p[r]<l){
            cout << "-1 -1\n";
        }else{
            cout << p[r]+1 << " " << r+1 << "\n";
        }
    }

    cout << "\n";
}


int main() {
    #if LOCAL_TESTING
        freopen("input.txt", "r", stdin);
    #endif
    
    fast;

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
