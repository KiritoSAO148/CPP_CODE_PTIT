#include <bits/stdc++.h>
using namespace std;

bool nt (int n){
    if (n == 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
	return true;
}

bool check (int n){
    do{
    	n/=10;
        if (nt(n) == false)
            return false;
    } while (n != 0);
    return true;
}


int main(){
    string s; cin >> s;
    int d1=s[0]-'0'; int d2=s[1]-'0';
    int m1=s[3]-'0'; int m2=s[4]-'0';
    int y1=s[6]-'0'; int y2=s[7]-'0'; int y3=s[8]-'0'; int y4=s[9]-'0';
    int n=d1+d2+m1+m2+y1+y2+y3+y4;
    if(check(n)) cout << n << " la so sieu nguyen to" << endl;
    else cout << n << " khong phai la so sieu nguyen to" << endl;
    return 0;
}
