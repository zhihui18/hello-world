#include <stdio.h>
#include <string.h>
#define len 85

int main() {
    char s[len];
    int n = 0;
    scanf("%d", &n);
    while(n--) {
        int pos = 0, score = 0;
        scanf("%s", s);
        for(int i = 0; i < strlen(s); i++) {
            if(s[i] == 'X')
                pos = 0;
            else
                score += ++pos;
        }
        printf("%d\n", score);
    }
    return 0;
}