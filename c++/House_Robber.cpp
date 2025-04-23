#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll unsigned long long int
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef vector<int>		vi;
typedef vector<pii>		vpii;
typedef vector<vi>		vvi;
//=======================
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
	uniform_int_distribution<int> uid(0,lim-1);
	return uid(rang);
}
const int mod = 1000000007;
const int N = 2e6+13, M = N;

int mpow(int base, int exp); 
//=======================
vi g[N];
int a[N];
int n, m, k;
//=======================
ll s=0;

int solve(ll a[],ll dp[],ll n) {
  if(n==0)
  {
      return 0;
  }
  if(n<0)
  return 0;
   cout<<a[n-1]<<endl;
     int x=(a[n-1]+solve(a,dp,n-1));
     int y=a[n-2]+solve(a,dp,n-2);
   cout<<x<<endl;
   return max(x,y);
   // return max((a[n-1]+solve(a,dp,n-1)),1);//,a[n-2]+solve(a,dp,n-2));
 // if(dp[x]!=-1){
  //    return dp[x];
  //}
  //fo(i,n){
    //  cout<<a[i][0]<<" "<<a[i][1];
    //    }
   // cout<<st<<endl;

}
int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cin>>n;
    ll a[n];
   ll dp[n+1];
    fo(i,n){
        cin>>a[i];
    }
    cout<<maxSumIS(a,n)<<endl;
  // cout<<solve(a,dp,n)<<endl;//<<endl;
   
    return 0;
}
int mpow(int base, int exp) {
	base %= mod;
	int result = 1;
	while (exp > 0) {
	  if (exp & 1) result = ((ll)result * base) % mod;
	  base = ((ll)base * base) % mod;
	  exp >>= 1;
	}
	return result;
  }
  