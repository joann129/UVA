#include <stdlib.h>
#include <stdio.h>
#define root 1

int main(void) {
	int test, i, j, depth, ball, current = root, sw;
	scanf("%d", &test);
	for(i = 0; i < test; i++) {
		scanf("%d %d", &depth, &ball);
		while(1) {
			if(ball / 2 == 0) {
				break;
			}
			current *= 2;
			if(ball % 2 == 0) {
				current += 1;
			}
			ball = ball / 2 + ball % 2;
			depth--;			
		}
		for(j = 1; j < depth; j++) {
			current *= 2;
		}
		printf("%d\n", current);
		current = root;
	}
	while(1) {
		scanf("%d", &sw);
		if(sw == -1) {
			break;
		}
	}	
}
