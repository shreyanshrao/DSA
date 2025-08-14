#include<bits/stdc++.h>
using namespace std;


void solve() {
	string s;
	cin>>s;
	int n=s.length();
	if(s[0]==s[n-1]){
		cout<<s<<endl;
		return;
	}else{
		if(s[0]=='a'){
			s[0]='b';
			cout<<s<<endl;
			return;
		}else{
			s[0]='a';
			cout<<s<<endl;
			return;
		}
	}


	
}	

 
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--){
	solve();
}
	return 0;
}
 