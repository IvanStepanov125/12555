#include <stdio.h>
#include <math.h>

int main (void){
    int V, U, T1, T2;
    scanf("%d %d %d %d %d", &V, &U, &T1, &T2);
    printf("%d", V * T1 + (U - V) * T2); /*V * T1 - путь пройденный по озеру. (U - V) * T2 - путь пройденный по реке против течения*/
    return 0;
}