#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n=0;
		int c=0,l=0;
		char kitu=' ';
		while (kitu!='\n'){
			int x;
			cin >> x;
			n++;
			if (x%2==0) c++;
			else l++;
			kitu=getchar();
		}
		if ((n%2==0 && c>l) || (n%2==1 && c<l))
			cout << "YES";
		else
			cout << "NO";
		cout << endl;
	}
	return 0;
}
