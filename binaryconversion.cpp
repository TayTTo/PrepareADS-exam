#include<iostream>
using namespace std;

void binaryConverse(double n, int k){
	int intPart = n;
	double fracPart = n - intPart;
	int i = 0;
	int binaryDigit[32];
	while(intPart > 0){
		binaryDigit[i] = intPart % 2;
		intPart /= 2;
		i++;
	}
	while(i--){
		cout << binaryDigit[i];
	}
	cout << '.';
	int fracDigit[32];
	for(int j = 0; j < k; j++){
		double temp = fracPart * 2;
		fracDigit[j] = (int)(temp);
		if(temp > 1) fracPart = temp - 1;
		else fracPart = temp;
	}
	for(int j = 0; j < k; j++){
		cout << fracDigit[j];
	}
}

int main(){
	double n = 4.47;
	int k = 4;
	binaryConverse(n, k);
	return 0;
}
