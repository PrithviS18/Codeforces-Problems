/*JOY MAA DURGA*/

#include <bits/stdc++.h>
using namespace std;

/*int gcd(int a,int b){
    if (a == 0)
        return b;
    return gcd(b % a, a); 
}*/

void solve(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int ans=0;
    for (int i=0;i<n;i++){
    	map <int,int> mpp;
    	int maxx=0;
    	for (int j=i;j<min(n,i+100);j++){
    		mpp[s[j]]++;
    		maxx=max(maxx,mpp[s[j]]);
    		if (maxx<=mpp.size())ans++;
    	}
    }
    cout<<ans<<endl;
}


int main(){
	int t;
	cin>>t;
	while (t--){
		solve();
	}
}
