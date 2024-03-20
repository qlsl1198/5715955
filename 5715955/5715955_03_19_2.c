#include <stdio.h>
#include <time.h>

long long power_iter(int a, int b);
long long power_rec(int a, int b);


int main() {

	clock_t start, stop;

	start = clock();
	long long result_iter = power_iter(13, 21);
	stop = clock();
	printf("%lld, time : %.6f seconds\n", result_iter, (double)(stop - start) / CLOCKS_PER_SEC);

	start = clock();
	long long result_rec = power_rec(13, 21);
	stop = clock();
	printf("%lld, time : %.6f seconds\n", result_rec, (double)(stop - start) / CLOCKS_PER_SEC);



}

long long power_iter(int a, int b) {
	long long result = 1;
	for (int i = 0; i < b; i++) {
		result *= a;
	}
	return result;
}

long long power_rec(int a, int b) {
	if (b == 0) {
		return 1;
	}
	else {
		return a * power_rec(a, b - 1);
	}
}