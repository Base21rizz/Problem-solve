#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    char digits[n+1];
    scanf("%s", digits);
    for (int i = 0; i < n; i++) {
        sum =sum+ digits[i] - '0';
    }
    printf("%d\n",sum);
    return 0;
}