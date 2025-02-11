#include <stdio.h>
int main(){
    int n; scanf("%d",&n);
    int years = n/365;
    int months = (n%365)/30;
    int days = (n%365)%30;

    printf("%d years\n",years);
    printf("%d months\n",months);
    printf("%d days\n",days);
    return 0;
}