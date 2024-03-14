#include <stdio.h>
#include <time.h>

int main() {

	int sum = 2; //Prime Number 2.
	clock_t start, stop;
	double duration;

	start = clock();
	for (int i = 3; i <= 100; i++) {
		for (int j = 2; j < i; j++) {

			if (j == i - 1) {
				sum += i;
			}
			else if (i % j == 0) {
				break;
			}

		}

	}


	printf("%d\n", sum);
	stop = clock();
	duration = (double)(stop - start) / CLOCKS_PER_SEC;
	printf("%f\n", duration);
	return 0;
}