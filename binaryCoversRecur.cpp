#include<iostream>
using namespace std;

int findIntPart(int i, int* intDigit, int intPart, int size){
	if(intPart == 0 || i == size) return i;
	intDigit[i] = intPart % 2;
	return findIntPart(i + 1, intDigit, intPart / 2, size);
}

void findFracPart(int i, int* fracDigit, double fracPart, int k, int size){
	if(i > k - 1) return;
	double temp  = fracPart * 2;
	fracDigit[i] = (int)(temp);
	if(temp > 1) fracPart = temp - 1;
	else fracPart = temp;
	findFracPart(i + 1, fracDigit, fracPart, k, size);
}

void printIntPart(int n, int* intDigit){
	if(n <= 0) return;
	cout << intDigit[n - 1];
	printIntPart(n - 1, intDigit);
}

void printFracPart(int k, int* fracDigit){
	if(k <= 0) return;
	printFracPart(k - 1, fracDigit);
	cout << fracDigit[k - 1];
}
	
void binaryConverse(double n, int k){
	int intPart = n;
	double fracPart = n - intPart;
	int intDigit[32];
	int i = findIntPart(0, intDigit, intPart, 32);
	int fracDigit[32];
	findFracPart(0, fracDigit, fracPart, k, 32);
	printIntPart(i, intDigit);
	cout << '.';
	printFracPart(k, fracDigit);
}

int main(){
	double n = 4.47;
	int k = 4;
	binaryConverse(n, k);
	return 0;
}
