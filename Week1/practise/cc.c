#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N, X, ans = 0;
        scanf("%d %d", &N, &X);
        int numbers[N];
        int sum = 0;
        for (int i = 0; i < N; i++) {
            scanf("%d", &numbers[i]);
            sum += numbers[i];
        }
        ans = (sum + X - 1) / X;
        printf("%d\n", ans);
    }
    return 0;
}
