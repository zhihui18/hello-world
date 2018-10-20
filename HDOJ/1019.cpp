//Lcm
#include <stdio.h>
using namespace std;

int gcd(int a, int b) {
	if (b == 0)
		return a;
	return gcd(b, a%b);
}

int lcm(int a, int b) {
	return a / gcd(a, b) * b;  //��ֹ���������a*b����/gcd
}

int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		int m, ans, next;
		scanf("%d %d", &m, &ans);
		for (int i = 0; i < m - 1; i++) { //mΪ1ʱ��ֱ������ѭ��
			scanf("%d", &next);
			ans = lcm(ans, next);
		}
		printf("%d\n", ans);
	}
	return 0;
}