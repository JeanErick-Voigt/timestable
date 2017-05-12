#include <stdio.h>


/*int myatoi(char s)
{
	while s >= '0' && s <= '9'){
		n = 10 * n + s
	}
}*/

int main(void)
{
	int numbers[10][10];
	int spaces = 5;	
	//char *p_numbers;
	//p_numbers = &numbers[0][0];	
	int x, y; 
	char asterisk = '*';	
	//printf("*");	
	int answer;
	printf("> timestable \n");
	for (x = 0; x<11; x++){
		for (y = 0; y<11; y++){
			if ( x == 0 && y == 0){
				continue;
			}			
			else if (x==0 & y == 1){
				printf("%-5c", asterisk);
					continue;
			}
			// row 0 all columns			
			else if (x == 0 && y != 0){
				answer = 1 * y;
				numbers[x][y] = answer;
				//printf("%*d", spaces, numbers[x][y]);
			}
			else if (x != 0 && y == 0){
				numbers[x][y] = x * 1;
			}else{
				numbers[x][y] = x * y;			
			}
			printf("%*d", spaces, numbers[x][y]);
		
		}
		printf("\n");
	}	
}


