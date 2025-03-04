//Nguyen Bao Lam -SE1711
#include <stdio.h>
#include <math.h>

int check_prime(int n) {
    if (n < 2) {
        return 0;
    }
    int loop = (int) sqrt(n);
    int i;
    for (i = 2; i <= loop; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
 

int main() {
 int i, n1, n2;
 scanf("%d %d", &n1, &n2);
    for (i = n1; i <= n2; i++) {
        if (check_prime(i)) {
            printf("%d ", i);
        }
    }
}
