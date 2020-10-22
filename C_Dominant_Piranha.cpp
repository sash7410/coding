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
bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
} 
int solve() {
	int n,mi=INT_MAX,ma=INT_MIN;
  cin >> n;
  int a[n];
  fo(i,0,n){
      cin>>a[i];
    mi=min(a[i],mi);
    ma=max(ma,a[i]);
  }
 /* if(ma-mi<0)
  return -1;
  if(n==0)
  return -1;
  if(n==1)
  return 0;
  if(a[0]>a[1]&&a[0]+1>a[1])
    return 0;
  if(a[n-1]>a[n-2]&&a[n-1]+1>a[n-2])
    return n-1;
  */
vector<pair<int, int>> b;
  fo(i,1,n-1){
      if(a[i]>a[i+1]||a[i]>a[i-1])
     b.push_back( make_pair(i,a[i]) ); 
  }
  /* fo(i,2,n){
      if(a[i]>a[i-1]&&a[i]+1>a[i-2])
      return i;
  }
  if(a[n-2]>a[n-1]&&a[n-2]+1>a[n-3])
    return n-2;
     if(a[1]>a[0]&&a[1]+1>a[2])
    return 0;
  return -1;*/
  if(n>1&&a[0]>a[1])
   b.push_back( make_pair(0,a[0]) ); 
  if(a[n-1]>a[n-2])
   b.push_back( make_pair(n-1,a[n-1]) ); 
  if(b.size()>=1)
{    sort(b.begin(), b.end(), sortbysec); 
    return b[b.size()-1].first;
}
  
  return -1;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
	cin >> t;
	//deb(t);
    while(t--) {
        int z=solve();
        if(z==-1)
        cout<<-1<<endl;
        else
        {
            cout<<z+1<<endl;
        }
        
      //cout<<solve()<<endl;
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

