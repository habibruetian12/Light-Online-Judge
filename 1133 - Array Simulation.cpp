using namespace std;
#include<bits/stdc++.h>
#define db          double
#define ll          long long
#define ull         unsigned long long
#define vi          vector<int>
#define vl          vector<long>
#define vll         vector<ll>
#define pi          pair<int,int>
#define pl          pair<long,long>
#define pll         pair<ll,ll>
#define pb          push_back
#define mp          make_pair
#define pf          printf
#define sf          scanf
#define mii         map<int,int>
#define mll         map<ll,ll>
#define II          ({int a; sf("%d",&a); a;})
#define IL          ({long a; sf("%ld",&a); a;})
#define ILL         ({ll a; sf("%lld",&a); a;})
#define ID          ({db a; sf("%lf",&a); a;})
#define IF          ({float a; sf("%f",&a); a;})
#define IC          ({char a; sf("%c",&a); a;})
#define FRI(a,b,c)  for(int i=a;   i<=b; i+=c)
#define FRL(a,b,c)  for(long i=a;  i<=b; i+=c)
#define FRLL(a,b,c) for(ll i=a;    i<=b; i+=c)
#define all(V)      V.begin(),V.end()
#define in          freopen("in.txt","r",stdin)
#define out         freopen("out.txt","w",stdout)
#define PI          2*acos(0.0)
#define mod         1000000007
#define INF         LLONG_MAX
#define endl	    '\n'

template <class T> inline T bigmod(T p,T e,T M)
{
    ll ret = 1;
    for(; e > 0; e >>= 1)
    {
        if(e & 1) ret = (ret * p) % M;
        p = (p * p) % M;
    }
    return (T)ret;
}
template <class T> inline T gcd(T a,T b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}
template <class T> inline T modinverse(T a,T M)
{
    return bigmod(a,M-2,M);
}
//------------------------------------------------------


int main()
{
    ll t=ILL;
    for(ll cs=1; cs<=t; cs++)
    {
        ll n=ILL,m=ILL;
        vector<ll>v;
        for(ll i=0; i<n; i++)
        {
            ll temp=ILL;
            v.pb(temp);
        }
        for(ll i=0; i<m; i++)
        {
            char q;
            cin>>q;
            if(q=='S')
            {
                ll d=ILL;
                for(ll j=0; j<n; j++)
                    v[j]+=d;
            }
            else if(q=='M')
            {
                ll d=ILL;
                for(ll j=0; j<n; j++)
                    v[j]*=d;
            }
            else if(q=='D')
            {
                ll d=ILL;
                for(ll j=0; j<n; j++)
                    v[j]/=d;
            }
            else if(q=='R')
            {
                reverse(all(v));
            }
            else if(q=='P')
            {
                ll y=ILL,z=ILL;
                swap(v[y],v[z]);
            }
        }
        pf("Case %lld:\n",cs);
        for(ll j=0; j<n-1; j++)
            pf("%lld ",v[j]);
        pf("%lld\n",v[n-1]);
    }
    return 0;
}
