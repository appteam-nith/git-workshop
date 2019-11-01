#include<bits/stdc++.h>
using namespace std;
int cmp(pair<int,int> p,pair<int,int> p1){
	return p.first<p1.second;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<pair<int,int>> v[n];
		for(int i=0;i<n;i++){
		
			cin>>v[i].first>>v[i].second;
		}
		sort(v.begin(),v.end(),cmp);
		int dp[n+1]={0};
		dp[0]=0;
		for(int i=1;i<=n;i++){
			for(int j=0;j<i;j++){
				if(v[i])
			}
		}

	}
}
