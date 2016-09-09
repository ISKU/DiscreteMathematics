#include <stdio.h>
#include <math.h>

int main(void){

	int g, m, x, a, b;

	while (1) {
		printf("n번째 정수: ");
		scanf_s("%d", &x);
		g = (int)((sqrt((8 * x) - 7) - 1) / 2) + 1;
		m = (g*(g + 1)) / 2;
		printf("m:%d, g:%d\n", m, g);
		printf("%d/%d\n\n", m-x+1 , x-m+g);
		printf("유리수 a/b: ");
		scanf_s("%d %d", &a, &b);
		printf("%d\n\n", (a + b)*(a + b - 1) / 2 - a + 1);
	}

	return 0;
}
