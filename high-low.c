#include <stdio.h>

int main() {
  printf("Welcome to the High Low game...\n");
  char playAgain;


do {

	int low = 1;
	int high = 100;
	int avg;
	char answer;
    printf("Think of a number between 1 and 100 and press <enter>\n");
	getchar();

		do {
		avg = (high + low) / 2;
			printf("Is it higher than %d? (y/n)\n", avg);
			answer = getchar();
			getchar();
				if(answer == 'y'){
					low = avg + 1;	
				} else if (answer == 'n'){
					high = avg -1;
				}else  {
					printf("Type y or n\n");
                   			continue;
                                }
		} while(high >= low);
				printf("\n>>>>>> The number is %d\n\n", low);
			
		
	printf("Do you want to continue playing (y/n)?\n");
	playAgain = getchar();
	getchar();
	} while (playAgain == 'y');

printf("Thanks for playing!!!\n");
}

