#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define len 85

float mass(char X) {
    switch(X) {
        case 'C': return 12.01;
        case 'H': return 1.008;
        case 'O': return 16.00;
        case 'N': return 14.01;
        default: break;
    }
}

int dig(char num) {
    return num -'0';
}

int main() {
    int n;
    char molar[len];
    scanf("%d", &n);
    memset(molar, 0, sizeof(molar));
    while(n--) {
        float ans = 0.0;
        int slen;
        scanf("%s", molar);
        slen = strlen(molar);
        for(int i = 0; i < slen; i++) {
           if(isalpha(molar[i])) {
               if(i < slen-2) {
                   if(isalpha(molar[i+1])) {
                       ans += mass(molar[i]);
                   }
                   else{
                       if(isdigit(molar[i+2])) {
                           ans += mass(molar[i]) * (dig(molar[i+1]) * 10 + dig(molar[i+2]));
                           i += 2;
                        }
                        else {
                            ans += mass(molar[i]) * (dig(molar[i+1]));
                            i++;
                        }
                    }
                }
                else {
                    if(i == slen - 2) {
                        if(isalpha(molar[i+1])) {
                            ans += mass(molar[i]) + mass(molar[i+1]);
                            break;
                        }
                        else {
                            ans += mass(molar[i]) * (dig(molar[i+1]));
                            break;
                        }
                    }
                    else
                        ans += mass(molar[i]);
                }
            }
        }
        printf("%.3f\n", ans);
    }
} 