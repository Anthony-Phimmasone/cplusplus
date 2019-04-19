#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string num[9] = {"one", "two", "three", "four", "five", 
                  "six", "seven", "eight", "nine"};
    if(n >= 1 && n <= 9) {
        cout << num[n-1];
    }
    else if(n > 9){
        cout << "Greater than 9";
    }
    return 0;
}