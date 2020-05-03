#include<stdio.h>
#include <time.h> 
#include <windows.h>
int main()
{
	srand(time(NULL));
	int ans = rand() % 100, max = 100, min = 0, guess, count = 0;

	while(printf("%d ~ %d:", min, max) && scanf("%d",&guess))
	{
		count++;
        //printf("%d ~ %d:", min, max);
        //scanf("%d",&guess);
		//Sleep(500);
		
		
		if(guess == ans)
		{
			printf("bingo\n");
			break;
		}
		else if(guess > ans)
		{
			max = guess;
			 
		}
		else
		{
			min = guess;
		}
	}
	printf("you have guessed for %d times", count);
	return 0;	
} 
