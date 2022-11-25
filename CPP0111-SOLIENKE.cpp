#include<bits/stdc++.h>
using namespace std;
int main()
{
		int t; cin>>t;
		while(t--){
		string v;
		cin>>v;
		int stop=0;
		for(int i=0;i<v.size()-1;i++)
		{
			if(abs((v[i]-'0')-(v[i+1]-'0'))!=1)
			{
				stop=1;
				cout<<"NO"<<endl;
				break;
			}
		}
		if(stop==0) cout<<"YES"<<endl;
	}
}
