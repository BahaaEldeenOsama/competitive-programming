#include<bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int const N = 1e5+9;
int T,b,n,cnt=0,sum=0;
int arr[N];

int main()
{
    FasterIO;
    cin>>T;
    for(int k=1 ; k<=T;++k)
    {
       cin>>n>>b;
       sum=0;
       cnt=0;
       bool flag = true;
       for(int i=0 ; i<n;++i)
       {
           cin>>arr[i];
       }
       sort(arr,arr+n);
       if( arr[0] > b )
       {
           flag = false;
       }

       if(flag)
       {
         for(int i=0;i<n;++i)
         {
             sum+=arr[i];

            if(sum <= b)
            {

                ++cnt;
            }
         }

       }


       cout << "Case #"<<k<< ": " <<cnt<<endl;
    }

}
