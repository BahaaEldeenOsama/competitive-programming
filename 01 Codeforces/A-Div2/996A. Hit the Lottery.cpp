#include<bits/stdc++.h>
using namespace std;
/// Info.
///****************************************************************************************************************************************///
/// I am studying Computer Science and artificial intelligence at Cairo University.
/// Programmer      : BAHAA El_DEEN OSAMA SAYED.
/// Problem name    : Hit the Lottery
/// ONline judged   : CodeForces
/// Assignment      : free problem
/// Algorithm       : DP
/// Date            : 20/7/2019.
/// h:m             :
///****************************************************************************************************************************************///
 
 
///defines
///****************************************************************************************************************************************///
#define rep(i,v)         for(long long i=0;i<(v);++i)
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
#define OO               1e19
#define Fx(n)            fixed<<setprecision(n)
#define Faster           std::ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define RE0              return 0
#define RE1              return 1
#define mp(a,b)          make_pair(a,b)
#define X                first
#define Y                second
#define pii              pair(int a, int b)
///****************************************************************************************************************************************///
 
 
///***************************************************************************************************************************************///
///constants
///****************************************************************************************************************************************///
 
const long long int  N = (int) 1e5+5;
const long long int  M = (int) 1e4+5;
const int  INF = (int) 0x3f3f3f3f;
const double ESP = 1e-7;
const int MOD=1000000007;
 
///****************************************************************************************************************************************///
 
int arr[] = {1,5,10,20,100};
int ways =0;
int solve(int n ) ;
 
 
int main()
{
 
Faster;
int n ; cin >> n ;
cout << solve(n) <<endl;
 
 
RE0;}
 
 
 int solve(int n)
{
 
for(int i=4 ;i>=0;--i)
{
    ways+=n/arr[i] ;
    n%=arr[i];
}
 
return ways ;
}
