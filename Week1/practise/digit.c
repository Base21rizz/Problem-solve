#include<stdio.h>
int main()
{
    long long int i,a,p;
    scanf("%lld",&i);
    if (i<=999999999)
    {
        while (i>0)
        {
            a=i%10;
            i=i/10;
            printf("%lld \n",a);
        }
    }
    else if(i>999999999)
    {
            a=i%10;
            i=i/10;
            printf("%lld \n",a);
    }
    
    
    return 0;
}
/* #include <stdio.h>
int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N, X, ans;
        scanf("%d %d", &N, &X);
        int numbers[N];
        int sum = 0;
        for (int i = 0; i < N; i++) {
            scanf("%d", &numbers[i]);
            if (sum + numbers[i] <= X) {
                sum += numbers[i];
            } else {
                break;
            }
        }
        ans=(sum+X-1)/X;
        printf("%d", ans);
    }
    return 0;
} */