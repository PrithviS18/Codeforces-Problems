/*JOY MAA DURGA*/

#include <bits/stdc++.h>
using namespace std;

/*int gcd(int a,int b){
     if (a == 0)
         return b;
     return gcd(b % a, a); 
}*/

/*void recursion(long long x,string s,int c,long long pf[],vector <long long>vec){
	if (x<=s.size()){
		cout<<s[x-1]<<'\n';
		return;
	}
	int val=lower_bound(pf,pf+c,x)-pf;
	//cout<<val<<endl;
	x=(x-pf[val-1])+vec[val]-1;
	recursion(x,s,c,pf,vec);
}*/

void solve(){
	int n,c,q;
	cin>>n>>c>>q;
	string s;
	cin>>s;
	vector <long long> vec;
	long long pf[c+1];
	pf[0]=s.size();
	vec.push_back(1);
	int index=1,count=c;
	while (count--){
		long long a,b;
		cin>>a>>b;
		pf[index]=pf[index-1]+(b-a+1);
		vec.push_back(a);
		index++;
	}
	while (q--){
		long long x;
		cin>>x;
		bool flag=true;
		for (int i=c;i>=0;--i){
			if (x<=s.size()){
				cout<<s[x-1]<<endl;
				flag=false;
				break;
			}
			if (x>pf[i])x=(x-pf[i]+vec[i+1]-1);
		}
		if (flag)cout<<s[x-1]<<endl;
	}
	//cout<<endl;
}


int main(){
	ios::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin>>t;
	while (t--){
		solve();
	}
}
