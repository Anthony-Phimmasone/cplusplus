#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four(int max, int a, int b, int c, int d) {
    if(a >= b && a >= c && a >= d) {
        max = a;
    }
    else if (b >= a && b >= c && b >= d) {
      max = b;

    }
    else if (c >= a && c >= b && c >= d) {
      max = c;
    }
    else {
        max = d;
    }
    return max;
}

int main() {
    int max;
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(max, a, b, c, d);
    printf("%d", ans);
    
    return 0;
}