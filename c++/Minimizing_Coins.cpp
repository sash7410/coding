//https://cses.fi/problemset/task/1634
//watch out for INT_MAX overflow and shii
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
#define MAX 100010
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
//int a[6], dp[MAX];
ll mpow(ll base, ll exp); 
//=======================
int a[MAX];
int n, m, k;
//=======================
int solve(int x,int dp[]){
    if(x==0)
        return 0;
    if(x<0)
        return 1000000;
    if(dp[x]!=-1)
        return dp[x];
    int c=1000000;
    fo(i,n){
        if(x-a[i]>=0)
     c=min(c,solve(x-a[i],dp));
    }
    return dp[x]=(c+1);
}
int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
 int x;
 cin >>n>>x;
 int dp[x+1];
 fo(i,n)
 {
     cin>>a[i];
 }
 memset(dp,-1,sizeof(dp));
 int z=solve(x,dp);
 if(z==1000001)
    cout<<-1<<endl;
 else
    cout<<z<<endl;
 return 0;
}

 
ll mpow(ll base, ll exp) {
	base %= mod;
	ll result = 1;
	while (exp > 0) {
	  if (exp & 1) result = ((ll)result * base) % mod;
	  base = ((ll)base * base) % mod;
	  exp >>= 1;
	}
	return result;
  }
 