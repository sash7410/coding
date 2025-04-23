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

void solve() {
    vector<string> a;
    int r,c;
    cin>>r>>c;
    fo(i,r){
        string b;
        cin>>b;
        a.push_back(b);
    }
    int c1=0;
    for(int i=0;i<r-1;i++){
        for(int j=0;j<c-1;j++){
            if(a[i][j]=='.'&&a[i][j+1]=='.'){
                c1++;
            }
            if(a[i][j]=='.'&&a[i+1][j]=='.'){
                c1++;
            }
        }
       // cout<<a[i]<<endl;
    }
    for(int i=0;i<r-1;i++){
        if(a[i][c-1]=='.'&&a[i+1][c-1]=='.'){
                c1++;
            }
    }
    for(int i=0;i<c-1;i++){
         if(a[r-1][i]=='.'&&a[r-1][i+1]=='.'){
                c1++;
            }
    }
    cout<<c1<<endl;
 // cin >> n;
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

