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
long long a[MAX], dp[MAX];
ll mpow(ll base, ll exp); 
//=======================

int n, m, k;
//=======================
ll sq(ll a)

{

  return (a * a)% mod;

}

void solve() {
    
  cin >> n;
 
  for(ll i=1;i<=n;i++){
      cin>>a[i];
  }
  
  vector<ll> b;
  
   dp[1]=0;
   //b.push_back(-1);
   //b.push_back(-1);
   ///b.push_back(1);
   if(n==2)
   dp[2]=sq((a[2]-a[1]))% mod;
 //cout<<dp[2]<<" ";
  else
  {ll y=sq(3*((a[3]-a[1])))% mod+sq((a[2]-a[3])% mod)% mod;
      dp[2]=min(sq((a[2]-a[1])),y)% mod;
  }
  
    for(ll i=3;i<=n;i++){
        ll x=(sq((a[i]-a[i-1]))% mod+dp[i-1]% mod)% mod;
        ll y=(sq(3*((a[i]-a[i-2])))% mod+dp[i-2]% mod)% mod;
      if(x>=y){
          dp[i]=y% mod;
         // deb(y);
        // b.push_back(i-2);
      }
      else{
          dp[i]=x% mod;
         // deb(x);
          //b.push_back(i-1);
      }
       // dp[i]=min(a[i]-a[i-1]+dp[i-1],3*(a[i]-a[i-2])+dp[i-2]);

    }
  cout<<dp[n]% mod<<endl;
   /*int z=0,c[100000]={};
    for(int j=n;j>0;j=b[j])
    c[z++]=j;
 
    cout<<dp[n]<<endl;
    //b.push_back(n);
    cout<<z<<endl;
    for(int k=z-1;k>=0;k--){
      cout<<c[k]<<" ";
    }
    //cout<<b.size()<<endl;
    for(int i=0;i<b.size();i++){
       // cout<<b[i]<<" ";
    }	*/
   // return dp[n-1];
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

   
     solve();
   
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
  