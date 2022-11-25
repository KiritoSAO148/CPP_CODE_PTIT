#include <iostream>
#include <string.h>

using namespace std;

string sum (string a, string b){
	string res="";
	while (a.length() < b.length()){
		a="0"+a;
	}
	while (b.length() < a.length()){
		b="0"+b;
	}
	int c=0;
	for (int i=a.length()-1; i>=0; i--){
		int tmp=a[i]-48+b[i]-48+c;
		c=tmp/10;
		tmp=tmp%10;
		res=(char) (tmp+48)+res;
	}
	if (c>0){
		res="1"+res;
	}
	return res;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		string s1,s2;
		cin >> s1 >> s2;
		cout << sum(s1,s2) << endl;
	}
}
