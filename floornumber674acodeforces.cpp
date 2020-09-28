#include <bits/stdc++.h> 
using namespace std; 
 
int main() 
{ 
	int t;// = 1333; 
cin>>t;
while(t--){
    int n,x;
    cin>>n>>x;
    if(n<=2)
        cout<<1<<endl;
        else
        {
            n-=2;
            if(n%x==0)
                cout<<(n/x)+1<<endl;
                else
                    cout<<(n/x)+2<<endl;
        }
    
}

	return 0; 
} 
