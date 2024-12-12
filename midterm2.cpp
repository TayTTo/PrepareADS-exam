#include<iostream>
using namespace std;

void binaryConver(double n, int k){
	int intPart = n;
	double fracPart = n - intPart;
	int i = 0;
	int intDigit[32];
	while(intPart != 0){
		intDigit[i] = intPart % 2;
		intPart /= 2;
		i++;
	}
	while(i--){
		cout << intDigit[i];
	}
	cout << '.';
	int fracDigit[32];
	for(int j = 0; j < k; j++){
		double temp = fracPart * 2;
		if(temp > 1) {
			fracDigit[j] = 1;
			fracPart = temp - 1;
		}
		else{
			fracDigit[j] = 0;
			fracPart = temp;
		}
	}
	for(int j = 0; j < k; j++){
		cout << fracDigit[j];
	}
}
int main(){
	double n = 4.47;
	int k = 4;
	binaryConver(n, k);
	return 0;
}
