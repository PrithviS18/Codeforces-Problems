/*JOY MAA DURGA*/

#include <bits/stdc++.h>
using namespace std;

/*int gcd(int a,int b){
     if (a == 0)
         return b;
     return gcd(b % a, a); 
}*/
//This gives TLE
int recursion(int index,int start,int end,int len,string s){
	if (len==1){
		return !(s[start]-'a'==index);
	}
	int mid=(start+end)/2;
	int left=0,right=0;
	for (int i=start;i<=mid;i++){
		if (s[i]-'a'==index)left++;
	}
	left=len/2-left+recursion(index+1,mid+1,end,len/2,s);
	for (int i=mid+1;i<=end;i++){
		if (s[i]-'a'==index)right++;
	}
	right=len/2-right+recursion(index+1,start,mid,len/2,s);
	//cout<<index<<endl;
	return min(left,right);
}

//This doesn't gives TLE
int recursion(char c,string s){
	if (s.size()==1){
		return !(s[0]==c);
	}
	int mid=s.size()/2;
	string l=s.substr(0,mid),r=s.substr(mid,mid);
	int left=mid-count(s.begin(),s.begin()+mid,c);
	left+=recursion(c+1,r);
	int right=mid-count(s.begin()+mid,s.end(),c);
	right+=recursion(c+1,l);
	//cout<<index<<endl;
	return min(left,right);
}

void solve(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int val=recursion('a',s);
	cout<<val<<'\n';
}
int main(){
	ios::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin>>t;
	while (t--){
		solve();
	}
}
