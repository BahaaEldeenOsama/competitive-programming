#pragma GCC optimize ("O3")
#include<bits/stdc++.h>
using namespace std;
 
 
 
/// Info.
///****************************************************************************************************************************************///
/// My name               : BAHAA El_DEEN OSAMA .
/// Problem name          : A. New Year and Hurry
/// level                 : A-div2
/// Method                : implementation/math
/// Date                  : 12/6/2020
///****************************************************************************************************************************************///
 
#define repRot0(i,n)     for(int i=0;i*i<=n;++i)
#define rep0(i,x)        for(int i=0; i<x ;++i)
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
#define rep(i,x,xx)        for(int i=x;i<=xx;i*=10)
#define RE               return
//#define LD               long double
#define all(v) ((v).begin()),((v).end())
#define rev_rep(i,x)     for(int i=x-1 ;i>=0;--i)
 
const  int  N   = (int) 1e4+100;
const  int  M   = (int) 1e4+4;
const  int  INF = (int) 0x3f3f3f3f;
///const double ESP = 1e-7;
///const ll MOD=1e8+9;
 
 
bool flag = false;
int n=0,k=0,cnt=0,allTime=240,diff=0,i=1;
int Solve()
{
        cin>>n>>k;
        diff = allTime-k;
        while(diff)
        {
            flag=false;
            if(diff >= i*5 )
            {
                ++cnt;
                diff-=i*5;
                ++i;
                flag =true;
            }
            if(flag==false)
            {
                break;
            }
            if(cnt==n)
            {
                break;
            }
        }
 
        cout << cnt<<endl;
 
RE0;
}
 
 
 
 
 
 
 
 
 
 
int main()
{
Solve();
RE0;
}
