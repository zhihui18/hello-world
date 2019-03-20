#include <stdio.h>
#include <string.h>
#define maxn 100
char s[maxn], s2[maxn];
int win, lose;

void Judge(int len, int len2) {
    int chance = 7;
    int i, j;
    for(i = 0; i < len2; i++) {
        int bad = 0;
        for(j = 0; j < len; j++) {
            if(s[j] == s2[i]) {s[j] = ' '; bad = 1;}
        }
        if(!bad) chance--;
        if(!chance) {lose = 1; break;}
        //printf("%s %d %d\n",  s, i, chance);
    }
    for(j = 0; j < len ; j++)
        if(s[j] != ' ') break;
    if(j == len) win = 1;
}

int main() {
    int rnd, len, len2;
    while(scanf("%d%s%s", &rnd, s, s2) == 3 && rnd != -1) {
        printf("Round %d\n", rnd);
        win = lose = 0;
        len = strlen(s);
        len2 = strlen(s2);
        Judge(len, len2);
        if(win) printf("You win.\n");
        else if(lose) printf("You lose.\n");
        else printf("You chickened out.\n");
    }
    return 0;
}