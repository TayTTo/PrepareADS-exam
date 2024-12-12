#include <iostream>
#include <vector>
using namespace std;

// Function to check if three numbers form a Pythagorean triplet
bool isPythagoreanTriplet(int a, int b, int c) {
    return (a * a + b * b == c * c);
}

// Recursive function with i, j, and k starting from 0 each time
void findTriplets(const vector<int>& arr, int i, int j, int k, int n) {
    // Base case: if i exceeds the size of the array
    if (i >= n) return;

    // Base case: if j exceeds the size of the array
    if (j >= n) {
        findTriplets(arr, i + 1, 0, 0, n);  // Reset j and k, and increment i
        return;
    }

    // Base case: if k exceeds the size of the array
    if (k >= n) {
        findTriplets(arr, i, j + 1, 0, n);  // Reset k and increment j
        return;
    }

    // Make sure the triplet is not comparing the same element (i == j == k)
    if (i != j && j != k && i != k) {
        if (isPythagoreanTriplet(arr[i], arr[j], arr[k])) {
            cout << "Found triplet: " << arr[i] << ", " << arr[j] << ", " << arr[k] << endl;
        }
    }

    // Recursively call for the next value of k
    findTriplets(arr, i, j, k + 1, n);
}

int main() {
    vector<int> arr = {3, 4, 5, 6, 8, 10, 15, 20}; // Example array
    int n = arr.size();

    // Start recursion, where i, j, and k all start from 0
    findTriplets(arr, 0, 0, 0, n);

    return 0;
}

