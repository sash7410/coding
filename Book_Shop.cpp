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
int n, m, k;
//=======================
int lol(int n,int m,int a[],int b[],int **dp){
    if(n==0||m==0){
        return dp[n][m]=0;
    }
   int x=0;
   if(dp[n][m]!=-1){
       return dp[n][m];
   }
   if(a[n-1]>m){
       x=lol(n-1,m,a,b,dp);
   }
   else
        x=max(b[n-1]+lol(n-1,m-a[n-1],a,b,dp),lol(n-1,m,a,b,dp));

return dp[n][m]=x;
    }
    
void solve() {
    
  cin >> n>>m;
  int a[n],b[n];
  for(int i=0;i<n;i++){
      cin>>a[i];
  }
   for(int i=0;i<n;i++){
      cin>>b[i];
  }
  int dp[n+1][m+1];/*
  int** dp = new int*[n+1];
for(int i = 0; i < n+1; ++i)
    dp[i] = new int[m+1];
  //vector<int> b;
   */
  //memset(dp,sizeof(dp),0);
   for(int i = 0; i < n+1; i++){
      for(int j = 0; j < m+1;j++){
        dp[i][j]=0; //cout<< dp[i][j]<<" " ;
      }//cout<<endl;
  }
    
for(int i = 1; i < n+1; i++){
      for(int j =1; j < m+1; j++){
       
        if(a[i-1]>j){
            dp[i][j]=dp[i-1][j];
        }
        else
        {
            dp[i][j]=max(dp[i-1][j],dp[i-1][j-a[i-1]]+b[i-1]);
        }
        
    }
}
 cout<<dp[n][m]<<endl;
/*
  for(int i = 0; i < n+1; ++i){
      for(int j = 0; j < m+1; ++j){
          dp[i][j]=-1;
      }
  }
  /* for(int i = 0; i < n+1; ++i){
      for(int j = 0; j < m+1; ++j){
         cout<< dp[i][j]<<" " ;
      }cout<<endl;
  }
  cout<<lol(n,m,a,b,dp)<<endl;*/
  
   // return dp[n-1];
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

   
     solve();
   
    return 0;
}