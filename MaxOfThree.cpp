#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// 関数プロトタイプ
int MaxOfThree(int a, int b, int c);


int main()
{
	srand(time(nullptr));
	int a = rand() % 100;
	int b = rand() % 100;
	int c = rand() % 100;
	int ans = MaxOfThree(a, b, c);
	printf("MaxOfThree(%d,%d,%d)->%d\n", a, b, c, ans);
	return 0;
}

int MaxOfThree(int a, int b, int c)
{
	int max = a;
	if (max < b) {
		max = b;
	}
	if (max < c) {
		max = c;
	}
	return max;
}