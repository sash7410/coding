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
    string a;
    string b;
    cin>>a;
    cin>>b;
     int i=0;
 
	while (i < a.size() && a[i] == '0') {
		i++;
	}
 
	if ((i > 0 && a[i - 1] == '0') || (i == 0 && a[i] == '0')) {
		a = a.substr(i);
	}
 
	i = 0;
 
	while (i < b.size() && b[i] == '0') {
		i++;
	}
 
	if (i > 0 && b[i - 1] == '0' || (i == 0 && a[i] == '0')) {
		b = b.substr(i);
	}
   bool f=0;
  
if(a.length()==0&&b.length()==0){
    cout<<"="<<endl;
}
else if(a.length()>b.length()){
        cout<<">"<<endl;
    }
    else if(a.length()<b.length()){
         cout<<"<"<<endl;
    }
    else{
        if(a==b){
             cout<<"="<<endl;
             return;
        }
        fo(i,a.size()){
            int x=a[i]-'0';
            int y=b[i]-'0';
           // cout<<x<<" "<<y<<" ";
            if(x<y){
                 cout<<"<"<<endl;
                 f=0;
                 break;
            }
            else if(x>y){
                 cout<<">"<<endl;
                 f=0;
                 break;
            }
            else{
                f=1;
                continue;
            }
        }
       
    }
    if(f){
        cout<<"="<<endl;
    }
  //deb(a);
  //deb(b);
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

