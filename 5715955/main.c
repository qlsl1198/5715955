#include <stdio.h>

int main() {

	int sum = 2;

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

	return 0;
}