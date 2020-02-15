#include <stdio.h>
#include <stdlib.h>
#define side 8

int arr[side][side];	

void create (void) {
	int i, j;
	for(i = 0; i < side; i++) {
		for(j = 0; j < side; j++) {
			arr[i][j] = 0;
		} 
	}
}

int main(void) {
	int kingState, queenState, queenMove;
	while(1) {
		scanf("%d %d %d", &kingSate, &queenState, &queenMove);
		if(kingState == queenState) {
			printf("Illegal state\n");
			continue;
		}else{
			if((queenMove - queenSate) % 8 == 0) {
				
			}
		}
	}
}
