#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,a,b) for(int i=a;i<b;i++)
#define rfo(i,a,b) for(int i=a;i>=b;i--)
#define mfo(it,m) for(auto it=m.begin(); it!=m.end(); it++)
#define Fo(i,k,n) for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long int
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
void solve() {
	ll n;
  cin >> n;
  char a[n][n];
  ll dp[n][n]={};
  
  fo(i,0,n){
      fo(j,0,n){
          cin>>a[i][j];
      }
  }
 
  if(a[0][0]=='*')
    dp[0][0]=0;
  else
    dp[0][0]=1;
  fo(j,1,n){
       if(a[0][j]=='*')
    dp[0][j]=0;
    else
      dp[0][j]=dp[0][j-1];
  }
  fo(j,1,n){
       if(a[j][0]=='*')
    dp[j][0]=0;
    else
      dp[j][0]=dp[j-1][0];
  }
  fo(i,1,n){
      fo(j,1,n){
         if(a[i][j]=='*')
    dp[i][j]=0;
    else
    {
        dp[i][j]=(dp[i-1][j]%mod+dp[i][j-1]%mod)%mod;
    }
    
      }
     
  }
 //cout<<endl;
      
      cout<<dp[n-1][n-1]%mod;

}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

   
      solve();
   

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

