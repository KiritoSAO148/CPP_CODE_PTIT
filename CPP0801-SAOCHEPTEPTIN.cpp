#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main(){
	ofstream fp;
	fp.open("PTIT.in.txt");
	string name;
	getline(cin,name);
	fp << name;
	fp.close();
	ifstream fpA;
	fpA.open("PTIT.in.txt");
	ofstream fpB;
	fpB.open("PTIT.out.txt");
	while (!fpA.eof()){
		getline(fpA,name);
		fpB << name << endl;
	}
	fpA.close();
	fpB.close();
	return 0;
}
