#include <stdio.h>

int main(void)
{
	int x, y; 
	int numbers[10][10];
	for (x = 0; x<10; x++){
		for (y = 0; y<=10; y++){
			numbers[x][y] = x * y;
			printf("%d", numbers[x][y]);
		}
		printf("\n");
	}	
}


