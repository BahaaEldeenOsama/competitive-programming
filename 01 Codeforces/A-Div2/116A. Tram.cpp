#pragma GCC optimize ("O3")
#include<bits/stdc++.h>
using namespace std;
 
 
/// Info.
///****************************************************************************************************************************************///
/// author                : BAHAA El_DEEN OSAMA .
/// Problem name          : A. Tram
/// level                 : A-Div2
/// Method                : IMP
/// Date                  : 21/6/2020
///****************************************************************************************************************************************///
 
 
#define repRot0(i,n)     for(int i=0;i*i<=n;++i)
#define rep0(i,x)        for(ll i=0; i<x ;++i)
#define all(v)           ((v.begin()),((v.end())
#define mm(v,d)          memset(v,d,sizeof(v))
#define lp(i,v)          for(int i=0;i<sizeof(v);++i)
#define lpi(i,j,n)       for(int i=(j);i>=(int)n;++i)
#define lpd(i,j,n)       for(int i=(j);i>=(int)n;--i)
#define MP               make_pair
#define SZ(v)            ((int) ( (v).size() ) )
#define ull              unsigned long long
#define ll               long long
#define pi               3.1415926536
#define oo               1e9
#define OO               1e18
#define Fx(n)            fixed<<setprecision(n)
#define FasterIO           std::ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define RE0              return 0
#define RE1              return 1
#define mp(a,b)          make_pair(a,b)
#define X                first
#define Y                second
#define pii              pair(int a, int b)
#define rep1(i,x)        for(int i=1;i<=x;++i)
#define rep2(i,x)        for(int i=2;i<x;++i)
#define rep(i,x,xx)        for(ll i=x;i<=xx;i++)
#define RE               return
//#define LD               long double
#define all(v) ((v).begin()),((v).end())
#define rev_rep(i,x)     for(int i=x ;i>0;--i)
 
const  int   N  = (int) 1e6+100;
const  int   M  = (int) 1e4+4;
const  int  INF = (int) 0x3f3f3f3f;
///const double ESP = 1e-7;
///const ll MOD=1e8+9;
 
ll GCD(ll a,ll b)
{
     return (b==0) ? a :GCD(b,a%b);
}
 
 
 
int n=0 ,a=0,b=0,Capacity=0,MX=INT_MIN;
int Solve()
{
     FasterIO;
 
///      4
///    0 3  >> Capacity = 3 .
///    2 5  >> Capacity = 3-2+5= 6. (MAX)
///    4 2  >> Capacity = 6-4+2= 4.
///    4 0  >> Capacity = 4-4=0 .
 
    cin>>n;
    rep0(i,n)
    {
        cin>>a>>b;
        Capacity +=(b-a);
        MX=max(Capacity,MX);
    }
    cout << MX<<endl;
 
 
RE0;
}
 
 
 
 
 
 
 
int main()
{
Solve();
RE0;
}