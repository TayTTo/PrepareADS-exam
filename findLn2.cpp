#include<iostream>
using namespace std;

double findLn(int i, int n, double ln2){
	if(i == n){
		return ln2;
	}
	else if(i % 2 == 0){
		ln2 += - 1.0 / (i * (i + 1));
	}
	else ln2 += 1.0 / (i * (i + 1));
	return findLn(i + 1, n, ln2);
}

int main(){
	int n = 100;
	double ln2 = 0.5;
	cout << findLn(0, n, ln2) ;
	return 0;
}
