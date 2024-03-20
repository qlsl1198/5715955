#include <stdio.h>
#include <time.h>

clock_t start, end, start_2, end_2;
long f;
long c;
double duration, duration_2;
long factorial_iterative(int n);
long factorial_recursive(int n);

int main(void) {
	start = clock();
	c = factorial_recursive(20);
	end = clock();
	duration = (double)(end - start) / CLOCKS_PER_SEC;
	start = clock();
	f = factorial_iterative(20);
	end = clock();
	duration_2 = (double)(end - start) / CLOCKS_PER_SEC;
	printf("factorial iterative : %ld\n", f);
	printf("time : %lf\n", duration);
	printf("factorial recursive : %ld\n", c);
	printf("time : %lf", duration_2);

	return 0;

}
long factorial_iterative(int n) {

	if (n <= 0)  return (1); 
	else return (n * factorial_iterative(n - 1));

}
long factorial_recursive(int n) {

	long l = 1;
	for(long i = 1; i <= n; i++) {
			l = l * i;
	}
	return l;

	
}



