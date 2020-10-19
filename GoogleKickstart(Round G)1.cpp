#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array
#define mod 1000000007

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    string s;
    cin>>s;
    map<string , ll> mp;
    ll res = 0;
    if(s.size() < 9){
        cout<<0<<endl;
        return;
    }
    for(int i = 0 ; i < s.size() - 4 ; ++i ){
        string temp = s.substr(i , 4);
        if(temp == "KICK"){
            mp["KICK"] += 1;
        }
        temp = s.substr(i,5);
        if(temp == "START"){
            res += mp["KICK"];
        }
    }
    cout<<res<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	for(int i=1; i<=t; ++i) {
		cout << "Case #" << i << ": ";
		solve();
	}
}