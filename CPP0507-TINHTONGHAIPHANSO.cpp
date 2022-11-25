#include <bits/stdc++.h>
using namespace std;

long long gcd (long long a, long long b){
	long long r;
	while (b){
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}

long long lcm (long long a,long long b){
	return a/gcd(a,b)*b;
}

struct PhanSo{
	long long tu;
	long long mau;
};

void nhap(PhanSo &p){
	cin >> p.tu >> p.mau;
}

void rutgon(PhanSo &p){
	long long l=gcd(p.tu,p.mau);
	p.tu/=l;
	p.mau/=l;
}

void in(PhanSo p){
	cout << p.tu << "/" << p.mau;
}

PhanSo tong (PhanSo a,PhanSo b){
	long long mc=lcm(a.mau,b.mau);
	a.tu=mc/a.mau*a.tu;
	b.tu=mc/b.mau*b.tu;
	a.tu+=b.tu;
	a.mau=mc;
	rutgon(a);
	return a;
}

int main(){
	struct PhanSo p,q;
	nhap(p);
	nhap(q);
	PhanSo t=tong(p,q);
	in(t);
	return 0;
}
