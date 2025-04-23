#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(int i=0;i<n;i++)
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
unordered_map<ll,ll> p;
 vector<int> a;
void solve() {
    int n;
  cin >> n;
  
  if(n==1)
  {
      cout<<"1"<<endl;
  return ;
  }
  if(p[n]!=0){
  cout<<"-1"<<endl;
  return ;
  }
  else{
     fo(i,n){
       cout<<a[i]<<" "; 
       }
          cout<<endl;
          return;
 }
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    for(int i=0;i<=32;i++){
     p[pow(2,i)]++;
    }
    for(int i=0;i<1000000;i++){
              a.push_back(i+1);
       }
          swap(a[0],a[1]);
        for(int i=1;i<1000000;i++){
            if(p[a[i]]!=0){
               // deb(a[i]);deb(i);
                swap(a[i],a[i+1]);
                i++;
            }
            else{
                    continue;
            }
        }
            
    int t = 1;
	cin >> t;
	//deb(t);
    while(t--) {
      solve();
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

