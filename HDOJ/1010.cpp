#include "stdio.h"
using namespace std;

int N = 0, M = 0, T = 0;
int Si = 0, Sj = 0, Di = 0, Dj = 0;
int count = 0;
char map[6][6];

bool dfs(int ci, int cj) {
	count++;
	if (ci == Di && cj == Dj)
		return count == T;
	if (ci > 0 && map[ci][cj] != 'X') {  //xxxxxxxxxxxxxxxxxxx
		if (dfs(ci - 1, cj)) return true;
	}
	if (ci < M && map[ci][cj] != 'X') {
		if (dfs(ci + 1, cj)) return true;
	}
	if (cj > 0 && map[ci][cj] != 'X') {
		if (dfs(ci, cj - 1)) return true;
	}
	if (cj < N && map[ci][cj] != 'X') {
		if (dfs(ci, cj + 1)) return true;
	}
	return false;
}

int main() {
	
	do {
		scanf("%d %d %d", &N, &M, &T);
		getchar();
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				scanf_s("%c", &map[i][j], 1);
				if (map[i][j] == 'S') {
					Si = i; Sj = j;
				}
				if (map[i][j] == 'D') {
					Di = i; Dj = j;
				}
			}
			getchar();
		}

		count = 0;
		if (dfs(Si, Sj))
			printf("YES\n");
		else
			printf("NO\n");
	} while (N != 0 && M != 0 && T != 0);

	return 0;
}