#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// �֐��v���g�^�C�v
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
/// <summary>
/// �R�l�̍ő�l���v�Z����
/// </summary>
/// <param name="a">�l1</param>
/// <param name="b">�l2/param>
/// <param name="c">�l3</param>
/// <returns>�R�l�̍ő�l��Ԃ�</returns>
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