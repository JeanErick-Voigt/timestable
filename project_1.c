#include <stdio.h>

/*int command_line(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++){
		printf("This is command and line argument: %d %s\n", i, argv[i]);
	}
}*/

int myatoi(char s[])
{
	int i = 0, n = 0;
	while (s[i] >= '0' && s[i] <= '9'){
		n = 10 * n + s[i++] - '0';
	}
	return(n);
}



int main(int argc, char *argv[])
{
	int max;	
	int i;
	for (i = 0; i < argc; i++){
		printf("This is command number and line argument: %d  %s\n", i, argv[i]);
		if (i == 1){
			max = myatoi(argv[i]) + 1;
			printf("%d", max);
		}	
	}
	//command_line(int argc, char *argv[]);
	int numbers[max][max];
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
			if (x==0 & y == 0){
				printf("%5c", asterisk);
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


