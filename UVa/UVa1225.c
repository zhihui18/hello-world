#include <stdio.h>
#include <string.h>

int main() {
    int dig[10];
    int n, num;
    scanf("%d", &n);
    while (n--) {
        memset(dig, 0, sizeof(dig));
        scanf("%d", &num);
        for (int i = 1; i <= num; i++) {
            int x = i;
            while (x != 0) {
                dig[x%10]++;
                x /= 10;
            }
        }
        for(int i = 0; i < 9; i++)
            printf("%d ", dig[i]);
        printf("%d\n", dig[9]);
    }
    return 0;
}