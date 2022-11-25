#include <bits/stdc++.h>
#include <ostream>
#include <istream>
#define nullptr 0
using namespace std;

string chuanHoa (string s){
	s[0]=toupper(s[0]);
	for (int i=1; i<s.length(); i++){
		s[i]=tolower(s[i]);
	}
	return s;
}

bool check (char c){
	return c=='.' || c=='!' || c=='?';
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	vector<string> v;
	string tmp,s="";
	while (cin >> tmp){
		if (check(tmp[tmp.size()-1])){
			tmp.erase(tmp.size()-1);
			s+=tmp;
			v.push_back(s);
			s="";
		}
		else{
			s+=tmp+" ";
		}
	}
	for (string x : v){
		cout << chuanHoa(x) << endl;
	}
	return 0;
}

