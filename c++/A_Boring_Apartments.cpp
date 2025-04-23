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
int nod(int x){
    int c=0;
    while(x!=0){
        x/=10;
        c++;
    }
    return c;
}
void solve() {
	int n;
  cin >> n;
  int c=nod(n);
  int f=n%10;
  int co=0;
  if(f==1)
  co=0;
  else if(f==2)
    co=10;
  else if (f==3)
    co=20;
    else if (f==4)
    co=30;
    else if (f==5)
    co=40;
    else if (f==6)
    co=50;
    else if (f==7)
    co=60;
    else if (f==8)
    co=70;
else if (f==9)
    co=80;
    else
    {
        co=90;
    }
    vector<int > lol;
    lol.push_back(1);
    lol.push_back(3);lol.push_back(6);
    lol.push_back(10);
    co+=lol[c-1];
    cout<<co<<endl;
    

}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

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

