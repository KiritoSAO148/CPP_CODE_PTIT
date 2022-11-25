#include <iostream>
using namespace std;

long long tachso(long long n){
	long long a=0;
	long long c=n;
	int check=0;
	while (n>0){
		int b=n%10;
		if(b==4 && check ==0){
			c/=10;
			if (c%10==8){
				c/=10;
				if(c%10==0){
					check++;
					c/=10;
				}
			}
		}
		if(check==1){
			check++;
			n=c;
			b=n%10;
			a=a*10+b;
			n/=10;
			c/=10;
		}else{
			a=a*10+b;
			c=n;
			n/=10;
			c/=10;
		}
	}
	return a;
}

void inso (long long n){
	while (n>0){
		int b=n%10;
		cout << b;
		n/=10;
	}
}

int main(){
	int t;
	cin >> t;
	while (t--){
		long long n;
		cin >> n;
		long long a=tachso(n);
		inso(a);
		cout << endl;
	}
}
