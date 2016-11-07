#include <cstdio>

// 时间复杂度为 O(n+m)
// n：生成table
// m：m个数的查询

const int maxn = 100000;
bool table[maxn] = {false};
int main() {
	int n, m, x;
	printf("m n = \n");
	scanf("%d %d", &n, &m);

	printf("number in hash:\n");
	for (int i = 0; i < n; i++) {
		scanf("%d", &x);
		table[x] = true;
	}

	printf("number to be searched:\n");
	for (int i = 0; i < m; i++) {
		scanf("%d", &x);
		if(table[x] == true) {
			printf("yes\n");
		} else {
			printf("no\n");
		}
	}

}