#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 int main (void) {
 	int t, i, n, j;
 	char c;
 	scanf("%d", &t);
 	getchar();
	 for(i = 0; i < t; i++)	{
	 	printf("Case %d: ", i+1);
	 	while(1){
	 		c = getchar();
	 		if(c == '\n') {
	 			printf("\n");
	 			break;
			 }
	 		scanf("%d", &n);
	 		for(j = 0; j < n; j++) {
	 			printf("%c", c);
			 }
		 }
	 }
 } 
