//https://cses.fi/problemset/task/1636/
//this problem really shows the power of top down dp
//compared to bottom up
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
//int a[6], dp[MAX];
ll mpow(ll base, ll exp); 
//=======================
 
int n, m, k;
//=======================
int p(int **dp,int n,int x){
   fo(i,n){
    for(int j=0;j<x;j++){
       cout<<dp[i][j]<< " "; 
        }
    cout<<endl;
    }
}
int solve(int a[],int n,int x,int **dp){
    if(x==0)
        return dp[n][x]=1;
       if(n<0)
        return 0;
    if(x<0)
        return 0;
   if(dp[n][x]!=-1)
        return dp[n][x];
       if(a[0]<=x)
    return dp[n][x]=(solve(a+1,n-1,x,dp)%mod+solve(a,n,x-a[0],dp)%mod)%mod;
    else
    {
        return dp[n][x]=solve(a+1,n-1,x,dp)%mod;
    }
}

int solvei(int a[],int n,int x,int **dp){
    dp[0][0]=1;
   // p(dp,n,x);
     for(int i=1;i<n+1;i++){
         for(int j=0;j<=x;j++){
      
       if(j-a[i-1]>=0)
            dp[i][j]=(dp[i-1][j]+dp[i][j-a[i-1]])%mod;
    //(solve(a,n-1,x,dp)%mod+solve(a,n,x-a[0],dp)%mod)%mod;
    else
    {   dp[i][j]=(dp[i-1][j])%mod;
        //return dp[n][x]=solve(a+1,n-1,x,dp)%mod;
    }
      }
     }
     return dp[n][x];
}
int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
 int x;
 cin >>n>>x;

 int a[n];
// sort(a,a+n);
 fo(i,n)
 {
     cin>>a[i];
 }
 int **dp=new int*[n+2];
       for(int i=0;i<n+2;i++){
           dp[i]=new int[x+1];
       }
fo(i,n+1){
    for(int j=0;j<x+1;j++){
        dp[i][j]=0;
        }
    }
   // p(dp,n,x);
cout<<solvei(a,n,x,dp)%mod<<endl;
 return 0;
}
