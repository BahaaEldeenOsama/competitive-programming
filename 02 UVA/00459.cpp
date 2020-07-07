#pragma GCC optimize ("O3")
#include<bits/stdc++.h>
using namespace std;


/// Info.
///****************************************************************************************************************************************///
/// author                : BAHAA El_DEEN OSAMA .
/// Problem name          : 495 - Fibonacci Freeze
/// level                 :
/// Method                : Math
/// Online judge          : UVA
/// Date                  : 27/6/2020
///****************************************************************************************************************************************///

#define loop(x)          while(x--)
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
#define rep1(i,x)        for(int i=1;i<x;++i)
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

int const row = 5009;
int const col = 500;

vector<vector<int> > vec(row, vector<int> (col)  );
int n;


int Solve()
{
   
       vec[1][0] = 1;
       rep(i,2,5000)
       {
           rep0(j,500)
           {
               vec[i][j]+= vec[i-1][j] + vec[i-2][j] ;
               if(vec[i][j]>=1000)
               {
                   vec[i][j]-=1000;
                   vec[i][j+1]++ ;
               }
           }
       }

       while(cin>>n)
       {
        printf("The Fibonacci number for %d is ",n);
        if (!n) printf("0\n");
        else {
            int i=500;
            while (vec[n][--i]==0);
            printf("%d",vec[n][i--]);
            for (; i>=0; i--) printf("%.3d",vec[n][i]);
            printf("\n");
        }
       }





        RE0;
}










int main()
{
Solve();
RE0;
}