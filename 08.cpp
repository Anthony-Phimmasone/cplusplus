#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int *myArray = new int[n];

    for(int i = 0; i < n; i++) {
        cin >> myArray[i];
    }

    for(int j = n - 1; j >= 0; j--) {
        cout << myArray[j] << " ";
    }

    return 0;
}