#include<iostream>
using namespace std;

int gcd(int a, int b){
	while(b != 0){
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

void findCoprime(int* arr, int n){
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(gcd(arr[i], arr[j]) == 1) cout << '(' << arr[i] << ',' << arr[j] << ')';
		}
	}
}

int main(){
	int arr[] = {2, 10, 27, 13, 90, 45, 5, 26, 49, 50};
	int n = sizeof(arr) / sizeof(arr[0]);
	findCoprime(arr, n);
	return 0;
}
