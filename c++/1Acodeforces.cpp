
#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int a,b,c,d=0;
  cin>>a>>b>>c;
  d+=a/c;
  b-=c;
  
  if(a%c!=0){
      d++;
  }
  if(b>0){
      int n=0;
      n=b/c;
      if(b%c!=0){
          n++;
      }
      d*=(n+1);
 }
  cout<<d<<endl;
  
    return 0;
}