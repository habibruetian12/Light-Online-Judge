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
ll zeros(ll n, ll k)
{
    ll res = 0, kk = k;
    while (kk <= n)
    {
        res += n / kk;
        kk *= k;
    }
    return res;
}

ll get(ll n)
{
    return min(zeros(n, 2), zeros(n, 5));
}
int main()
{
    ll t=ILL;
    for(ll i=1; i<=t; i++)
    {
        ll q=ILL;
        ll low=0;
        ll high=LONG_LONG_MAX,res=LONG_LONG_MAX;
        while(low<=high)
        {
            ll mid = (low+high)/2;
            ll cnt_z=get(mid);
            if(cnt_z>=q)
            {
                high=mid-1;
                if(cnt_z==q)
                    res=min(res,mid);
            }
            else
                low=mid+1;
        }
        if(res!=LONG_LONG_MAX)
            pf("Case %lld: %lld\n",i,res);
        else
            pf("Case %lld: impossible\n",i);
    }
    return 0;
}
