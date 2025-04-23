#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,a,b) for(int i=a;i<b;i++)
#define rfo(i,a,b) for(int i=a;i>=b;i--)
#define mfo(it,m) for(auto it=m.begin(); it!=m.end(); it++)
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
bool check_collinear(int x1, int y1, int x2, int y2, int x3, int y3){
   int a = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
 //cout<<a<<endl;
   if (a == 0)
      return 1;
   else
      return 0;
}
void solve() {
	ll n;
  cin >> n;
  if(n%8==0){
      cout<<"Yes"<<endl;
      return;
  }
   vector<ll> a;
   while(n!=0){
       a.push_back(n%10);
       n/=10;
   }
   sort(a.begin(),a.end());
     int z=0;
   z+=a[a.size()-3]*100;
    z+=a[a.size()-2]*10;
     z+=a[a.size()-1];
    // cout<<z<<endl;
     if(z%8==0){
         cout<<"Yes"<<endl;
         return ;
     }
   while (next_permutation(a.begin(), a.end())){
    z=0;
   z+=a[a.size()-3]*100;
    z+=a[a.size()-2]*10;
     z+=a[a.size()-1];
     //cout<<z<<endl;
      if(z%8==0){
         cout<<"Yes"<<endl;
          return ;
     }
     }
     cout<<"No"<<endl;
  //unordered_map<ll> m;
  
   
   

    
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

