#pragma GCC optimize ("O3")
#include<bits/stdc++.h>
using namespace std;
 
/// Info.
///****************************************************************************************************************************************///
/// Coder               : BAHAA El_DEEN OSAMA SAYED.
/// Problem name        : A. cAPS lOCK
/// Method              : IM-string
/// Date                : 22/2/2020
///****************************************************************************************************************************************///
 
 
#define rep0(i,x)         for(int i=0; i<=x ;++i)
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
#define rep1(i,x)        for(int i=1;i<x;++i)
#define rep2(i,x)        for(int i=2;i<x;++i)
#define RE               return
//#define LD               long double
#define all(v) ((v).begin()),((v).end())
 
 
const  int  N   = (int) 1e5+100;
const  int  M   = (int) 1e4+4;
const  int  INF = (int) 0x3f3f3f3f;
///const double ESP = 1e-7;
///const ll MOD=1e8+9;
 
 
string str;
 
int main()
{
 
FasterIO;
 
cin>>str;
 
for(int i=1 ; i<str.length();++i)
{
    if(str[i]>='a')
    {
        cout << str;
        RE0;
    }
}
 
rep0(i,str.length())
{
    if(str[i]>='a')
    {
        str[i]-=32;
    }
    else
    {
        str[i]+=32;
    }
}
cout << str;
 
 
 
 RE0;}
