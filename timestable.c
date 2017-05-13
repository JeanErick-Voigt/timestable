#include <stdio.h>
//This program will make a timestable.  It can take up to two values a maximum
// and a minimum. If only one value is given it will treat it as the max
// and use 1 as the default.  If no values are given,
// then it will give a general table with range from 1 to 10 inclusive. 
//It pads all numbers evenly and variably depending on largest number.
int myatoi(char s[]);
int spaces(int row, int column);

int main(int argc, char *argv[])
{	
	int max, min;	
	int i;
	if(argc == 1){
		max = 10;
		min = 1;
	}
	else if(argc == 2){		
		max = myatoi(argv[1]);
		min = 1;
	}else{ 
		min = myatoi(argv[1]);
		max = myatoi(argv[2]);
	}
	
	int limit = ((max - min) + 2);	
	int numbers[limit][limit];
	int pad_space;		
	pad_space = spaces(min, max); 
	char asterisk = '*';		
	int answer;
	int x, y;
	printf("   > timestable \n");
	for (x = min; x<=max + 1; x++){
		for (y = min; y<= max + 1; y++){
			if ((x==min) && (y == min)){
				printf("%*c", pad_space, asterisk);
					continue;
			}
						
			else if (x == min && y != min){
				answer = 1 * (y-1);
				numbers[limit][limit] = answer;
			
			}
			else if (x != min && y == min){
				numbers[limit][limit] = (x-1) * 1;
			}else{
				numbers[limit][limit] = (x-1) * (y - 1);			
			}
			printf("%*d", pad_space, numbers[limit][limit]);
		
		}
		printf("\n");
	}	
}


int myatoi(char s[])
{
	//function takes a number in its ascii representation and turns it into an
	// integer.
	int i = 0, n = 0;
	while (s[i] >= '0' && s[i] <= '9'){
		n = 10 * n + s[i++] - '0';
	}
	return(n);
}

int spaces(int row, int column)
{	
	//This pads the numbers in the table based on the largest number in the
	//table.
	int pad;	
	if (row == 1){
		if((row * column) < 10){
			pad = 3;
		}
		else if((row * column) < 32){
			pad = 4;
		}
		else if((row * column) < 100){
			pad = 5;
		}else{
			pad = 6;
		}	
		
	}else{
		if((column * column) < 81){
			pad = 3;
		}	
		else if((column * column) < 100){
			pad = 4;
		}else if((column * column) <= 10000){
			pad = 5;
		}else{
			pad = 6;
		}
	}
	return(pad);		
	
}





