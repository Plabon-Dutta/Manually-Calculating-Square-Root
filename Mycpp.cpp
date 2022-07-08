#include <bits/stdc++.h>
#include<cmath>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

typedef long long int ll;

const ll mod = 1e9+7;

#define pi atan(1)*4
#define sc scanf
#define pf printf
#define fin for(ll i=0; i<n; i++)
#define fiz for(ll i=n-1; i>=0; i--)
#define fjm for(ll j=0; j<m; j++)
#define fr(i,a,n) for(ll i=a; i<n; i++)
#define pb push_back
#define pb2(x,y) push_back(make_pair(x,y))
#define INF 1e18
#define nl '\n'
#define sz(a) a.size()
#define readfirst() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define make(a,n) memset(a, n, sizeof(a))
#define all(x) x.begin(),x.end()


void OJ() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w", stdout);
    #endif
}

ll gcd(ll p, ll q) {
    return q==0?p:gcd(q,p%q);
}

bool isPowerOfTwo(ll n) {
   if(n==0)
   return false;
   return (ceil(log2(n)) == floor(log2(n)));
}

ll power(ll a, ll n) {
    if(n==1) return a%mod;
    ll x=power(a,n/2);
    if(n%2==0) return (x*x)%mod;
    else return (x*x)%mod*a%mod;
}

ll digitSum(ll n) {
    ll s=0;
    while(n>0) {
        s+=n%10;
        n/=10;
    }
    return s;
}

ll fact(ll n){
    return tgamma(n + 1);
}

bool isPrime(ll n) {
    if (n <= 1) return false;
    for (ll i=2; i*i<=n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    auto st = clock();
    readfirst();
    OJ();

    ll t=1, cn=1;
    // cin >> t;
    // cin.ignore();
    while(t--) {
        // cout << "Case " << cn++ << ": ";
        ll n;
        cin >> n;
        ll m=n/2, ans=0;
        if(n%2) m++;
        for(ll i=1; i<=m; i++) {
            if(i*i<=n) ans=i;
            else break;
        }
        float mm=((float)n-ans)/2;
        float ans2=0, a=ans;
        for(float i=0.0001; i<=mm; i+=0.0001) {
            if((a+i)*(a+i)<=n) ans2=i;
        }
        cout << fixed << setprecision(3);
        cout << float(ans+ans2) << nl;
        // cout << sqrt(n) << nl;
    }   

    // while(cin >> n) {
    //     if(n==0) break;
        
    // }
    cerr << 1.0 * (clock()-st) / CLOCKS_PER_SEC << " Seconds" << nl;
    return 0;
}
