//https://cses.fi/problemset/task/1633
//the error was due to declaring the array globally 
//and using memset for a huge array
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

int n, m, k;
//=======================

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
 cin >> n;
 int dp[n+1];
 memset(dp,0,sizeof(dp));
 dp[0]=1;

for(int i=1;i<6;i++){
    if(i<n)
        dp[i]=2*dp[i-1];
    else
        break;
}
ll z=31;
for(int i=6;i<n;i++){
    dp[i]=(dp[i-1]+z)%mod;
    z=(dp[i]%mod-dp[i-6]%mod +mod)%mod;
 }
 /*
 for(int i=6;i<n;i++){
    //int c=0;int x=6;
     // deb(dp[i]);
    for(int j=1;j<=6;j++){
      (dp[i] += dp[i-j]) %= mod;
      //  dp[i]=( dp[i]%mod+(dp[i-j]%mod))%mod;
    }
 }
 */
 cout<<dp[n-1]%mod<<endl;
   
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
   /*
 int x=7;
    int c=0;
    while(x--){
        c=(c+(dp[i-x]%mod))%mod;
    }
    //deb(c);

 */
/*
ll solve(int n) {
if(n==0)
    return 1;
if(n<0)
    return 0;
int c=0;
if(dp[n]!=-1)
return dp[n];
fo(i,6){
    c=(c+(solve(n-a[i])%mod))%mod;
}
return dp[n]=c%mod;
}*/
/*int solve1(int n,vector<int> dp) {

    dp[0]=1;
for(int i=1;i<6;i++){
    if(i<n)
    dp[i]=2*dp[i-1];
    else
    {
        break;
    }
  }


 ll z=31;

for(int i=6;i<n;i++){
    dp[i]=(dp[i-1]+z)%mod;
   // z=(z+dp[i]);
    z=(dp[i]%mod-dp[i-6]%mod +mod)%mod;
 }

return dp[n-1]%mod;


}*/