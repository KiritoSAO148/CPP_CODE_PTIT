#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd (ll a, ll b){
	ll r;
	while (b){
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}

struct PhanSo{
	ll tu;
	ll mau;
};

void nhap (PhanSo &p){
	cin >> p.tu >> p.mau;
}

void rutgon (PhanSo &p){
	ll g=gcd(p.tu,p.mau);
	p.tu/=g;
	p.mau/=g;
}

void in(PhanSo p){
	cout << p.tu << "/" << p.mau << endl;
}

int main(){
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
