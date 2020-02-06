#include <stdio.h>
#include <stdlib.h>

double  arr[100][100];

int IsSymmetric(int n) {
	int i, j;
	for(i = 0; i < n; i++) {
		for(j = 0; j < n; j++) {
			//printf("%d\n", arr[i][j]);
			if(arr[i][j] != arr[n-1-i][n-1-j] || arr[i][j] < 0) {
				return 0;
			}
		}
	}
	return 1;
}

int main(void) {
	int t, time, n, i, j;
	char c;
	scanf("%d", &t);
	for(time = 0; time < t; time++ ) {
		scanf(" %c %c%d", &c, &c, &n);
		for(i = 0; i < n; i++) {
			for(j = 0; j < n; j++) {
				scanf("%lf", &arr[i][j]);
			}
		}
		if(IsSymmetric(n)) {
			printf("Test #%d: Symmetric.\n", time+1);
		}else{
			printf("Test #%d: Non-symmetric.\n", time+1);
		}
	}
} 
