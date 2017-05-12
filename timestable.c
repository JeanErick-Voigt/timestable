#include <stdio.h>



int myatoi(char s[])
{
	int i = 0, n = 0;
	while (s[i] >= '0' && s[i] <= '9'){
		n = 10 * n + s[i++] - '0';
	}
	return(n);
}

int spaces(int row, int column)
{	
	int pad;	
	if((row * column) < 1000){
		pad = 4;
	}
	else if((row * column) < 10000){
		pad = 5;
	}else{
		pad = 6;
	}	
	return(pad);
}



int main(int argc, char *argv[])
{	
	int max;	
	int i;
	for (i = 0; i < argc; i++){
		if(argc > 1){		
			if (i == 1){
				max = myatoi(argv[i]) + 1;
				break;
			}
		}else{
			max = 11;
		}	
	}
	
	int numbers[max][max];
	int pad_space;		
	pad_space = spaces(max, max); 
	char asterisk = '*';		
	int answer;
	int x, y;
	printf("   > timestable \n");
	for (x = 0; x<max; x++){
		for (y = 0; y< max; y++){
			if ((x==0) && (y == 0)){
				printf("%*c", pad_space, asterisk);
					continue;
			}
						
			else if (x == 0 && y != 0){
				answer = 1 * y;
				numbers[x][y] = answer;
			
			}
			else if (x != 0 && y == 0){
				numbers[x][y] = x * 1;
			}else{
				numbers[x][y] = x * y;			
			}
			printf("%*d", pad_space, numbers[x][y]);
		
		}
		printf("\n");
	}	
}


