#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	int val;
};
struct Node table[5][5]; 

int check(int bingo, int n, int count) {
	int row, col, row_val = 0, col_val = 0, tri_left = 0, tri_right = 0; 
	for(row = 0; row < 5; row++) {
		if(table[row][bingo].data  == n) {
			table[row][bingo].val = 1;
			for(col = 0; col < 5; col++) { 
				row_val += table[col][bingo].val;
				col_val += table[row][col].val;
			}
			if(row_val == 5 || col_val == 5) {
				printf("BINGO after %d numbers announced\n", count);
				return 1;
			}
			row_val = 0; col_val = 0;
			if(row == bingo) {
				for(col = 0; col < 5; col++) {
					tri_left += table[col][col].val;
				}
				if(tri_left == 5) {
					printf("BINGO after %d numbers announced\n", count);
					return 1;
				}
				tri_left = 0;
			}else if(row + bingo == 4) {
				for(col = 0; col < 5; col++) {
					tri_right += table[4-col][col].val;
				}
				if(tri_right == 5) {
					printf("BINGO after %d numbers announced\n", count);
					return 1;
				}
				tri_right = 0;
			}
		}
	}
	return 0;
}

void circle(void) {
	int n, i;
	int count = 0;
	while(1) {
		scanf("%d", &n);
		count++;
		if(n <= 15) {
			if(check(0, n, count)) break;
		}else if(n <= 30) {
			if(check(1, n, count)) break;
		}else if(n <= 45) {
			if(check(2, n, count)) break;
		}else if(n <= 60) {
			if(check(3, n, count)) break;
		}else{
			if(check(4, n, count)) break;
		}
	}
	for(i = 0; i < 75-count; i++) {
		scanf("%d", &n);
	}
}

int main() {
	int t, i, j, k;
	scanf("%d", &t);
	for(i = 0; i < t; i++) {
		for(j = 0; j < 5; j++) {
			for(k = 0; k < 5; k++) {
				if(j == 2 && k == 2) {
					table[j][k].data = -1;
					table[j][k].val = 1;
				}else{
					scanf("%d", &table[j][k].data);
					table[j][k].val = 0;
				}	
			}
		}
		circle();
	}
}
