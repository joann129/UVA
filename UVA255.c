#include <stdlib.h>
#include <stdio.h>

int map[8][8];
int dxy[4][2] = {0, 1, 0, -1, -1, 0, 1, 0};	//king能走為1 queen能走為2 兩者皆可為3 

void create(void) {
	int i, j;
	for(i = 0; i < 8; i++) {
		for(j = 0; j < 8; j++) {
			map[i][j] = 0;
		}
	}
}

void print(void) {
	int i, j;
	for(i = 0; i < 8; i++) {
		for(j = 0; j < 8; j++) {
			printf("%d ", map[i][j]);
		}
		printf("\n");
	}
}

int main(void) {
	int k, q, m, i, x, y;
	while(scanf("%d %d %d", &k, &q, &m) != EOF) {
		create();//printf("1");
		for(i = 0; i < 4; i++) {
			x = k / 8 + dxy[i][0];
			y = k % 8 + dxy[i][1];
			if(x >= 0 && x <= 7 || y >= 0 && y <= 7) {
				map[x][y] += 1;
			}
			x = q / 8;
			y = q % 8;
			while(1) {
				x += dxy[i][0];
				y += dxy[i][1];
				if(x >= 0 && x <= 7 && y >= 0 && y <= 7 && 8*x+y != k) {
					map[x][y] += 2;
				}else{
					break;
				}
			}
		}
		if(k == q) {
			printf("Illegal state\n");
		}else if(map[m/8][m%8] < 2 || m == k ) {
			printf("Illegal move\n");
		}else if(map[m/8][m%8] == 3) {
			printf("Move not allowed\n");
		}else if(k == 0 && m == 9 || k == 7 && m == 14 
					|| k == 56 && m == 49 || k == 63 && m == 54) {
			printf("Stop\n");
		}else{
			printf("Continue\n");
		}
	}
	
	
}
