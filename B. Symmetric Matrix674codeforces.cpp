#include <bits/stdc++.h> 
using namespace std; 
 
int main() 
{ 
	int t;// = 1333; 
cin>>t;
while(t--){
    int n,x;
    cin>>n>>x;
    bool f=0;
    int a[2][2];
    while(n--){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>a[i][j];
        }
    }//a[0][0]==a[1][1]&&
    if(a[0][1]==a[1][0])
    f=1;
   }
   if(x<2||x%2!=0)
   cout<<"NO"<<endl;
   else if(x==2){
       if(f==1)
             cout<<"YES"<<endl;
       else
            cout<<"NO"<<endl;
       
   }
    else{
        if(f==1)
          cout<<"YES"<<endl;
          else
            cout<<"NO"<<endl;
    }
        
    
}

	return 0; 
} 
