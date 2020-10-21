#include<bits/stdc++.h>
using namespace std;
#define ot(x) cout<<x<<" ";
#define out(x) cout<<x<<"\n";
#define pb push_back
#define in insert
#define ll long long int
#define ld long double
#define ull unsigned long long int
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define yes cout<<"yes\n";
#define no cout<<"no\n";
#define Yes cout<<"Yes\n";
#define No cout<<"No\n";
#define fa(i,a) for(auto i:a)
#define f(i,x,a) for(i=x;i<a;i++)
#define next cout<<"\n";
#define sp(n) cout<<fixed<<setprecision(n);
#define  gcd(a,b)    __gcd(a,b)
#define bs  binary_search
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define test int t;cin>>t;while(t-->0)
#define mod 1000000007

ll bsearch(ll a[],ll l,ll h,ll ele){
  while(l<=h){
      ll m=l+(h-l)/2;
      if(a[m]==ele){
          return m;
      }
      if(a[m]>ele){
          h=m-1;
      }
      if(a[m]<ele){
          l=m+1;
      }
  }
  return -1;
}

ll xyz(ll a[],ll n,ll k){
    sort(a,a+n);
    ll c=0,i;
    f(i,0,n-1){
        if(bsearch(a,i+1,n-1,a[i]+k)!=-1){
            c++;
        }
    }
    return c;
}


int main()
{
   fast
 
     ll n,k,c=0,j,i;cin>>n>>k;
     ll a[n];
     f(i,0,n){
        cin>>a[i] ;
     }
     
     cout<<xyz(a,n,k);
  return 0;
}
