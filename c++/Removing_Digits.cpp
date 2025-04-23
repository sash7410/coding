#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
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
int solve(int n,int dp[],int k) {
  if(n==0)
    return 0;
  if(n<0)
    return INT_MAX-10;
  int c=INT_MAX-10;
  if(dp[n]!=-1)
    return dp[n]%mod;
    vector<int> a;
    int z=n;
    while(z!=0){
        if(z%10!=0)
        a.push_back(z%10);
        z/=10;
    }
    if(a.size()==0)
    return INT_MAX-10;
    /*for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }cout<<endl;*/
  for(int i=0;i<a.size();i++){
      c=min(c,1+(solve(n-a[i],dp,k)));
  }
  return dp[n]=c%mod;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
        int k;
        cin>>n;
     
        int dp[n+1]={};
        memset(dp,-1,sizeof(dp));
       
      cout<<solve(n,dp,k)<<endl;
    
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

