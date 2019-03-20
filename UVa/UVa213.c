#include<stdio.h>
#include<string.h>  //使用memset
int readchar() {  //处理多行组成的编码文本，可跨行读字符
    for(;;) {
        int ch = getchar();
        if(ch != '\n' && ch != '\r') return ch;  //一直读到非换行符为止
    }
}
int readint(int c) {  //读取c位二进制字符,转化为十进制整数
    int v = 0;
    while(c--)
        v = v * 2 + readchar() - '0'; //转化为十进制
    return v;
}

int code[8][1<<8];
int readcodes() {
    memset(code, 0, sizeof(code)); //清空数组
    code[1][0] = readchar(); //直接调到下一行开始读取。如果输入已经结束，会读到EOF
    for(int len = 2; len <= 7; len++) {
        for(int i = 0; i < (1<<len)-1; i++) {
            int ch = getchar();
            if(ch == EOF) return 0;
            if(ch == '\n' || ch == '\r') return 1;
            code[len][i] =ch;
        }
    }
    return 1;
}

int main() {
    while(readcodes()) {  //无法读取更多编码头时退出
    //printcodes();
    for(;;) {
        int len = readint(3);
        if(len == 0) break;
        //printf("len = %d\n", len);
        for(;;) {
            int v = readint(len); 
            //printf("v = %d\n",v);
            if(v == (1 << len)-1) break;  //全1结束
            putchar(code[len][v]);
        }
    }
    putchar('\n');
    }
    return 0;
}