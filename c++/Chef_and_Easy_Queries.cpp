#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(long long int i=0;i<n;i++)
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
const int N = 2e6+13, M = N;

int mpow(int base, int exp); 
//=======================


//=======================

ll solve() {
    ll n, m,c=0,c1=0,idx;bool f=0;
  cin >> n>>m;
  ll a[n+1];
  fo(i,n){
      cin>>a[i];
  }
  long long int i=0;
  for(i=0;i<n;i++){
     if(a[i]>=m){
         c++;
         a[i+1]+=(a[i]-m);
     }
     else
     {
         return i+1;
     }/*
     
     // ll x=a[i];
      c+=x-m;
    // cout<<x<<" ";deb(c);
      if(c<0)
      {
          return i+1;
      }*/
  }
  if(i==n){
      c+=((a[n-1]-m)/m);
      return c+1;
  }
  
 /* c-=a[n-1];
  n+=c/m;
  if(c%m!=0){
      //n++;
  }*/
  return n+1;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
	cin >> t;
	//deb(t);
    while(t--) {
      cout<<solve()<<endl;
    }

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

