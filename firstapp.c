#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	printf("BASIC ROCK-PAPER-SCISSORS GAME \n\n");
	/*
	rock -> scissors
	scissors -> paper
	paper -> rock
	*/
	srand(time(NULL));
	int i = 0, guess;
	int userPoint = 0, computerPoint = 0;
	
	while(i < 10){
		printf("Please insert your guess (1. rock, 2. paper, 3. scissors): \n");
		scanf("%d",&guess);
		
		int computerGuess = (rand()%3)+1;
		
		if(guess == 1){
			
			if(computerGuess == 3)
			{
				userPoint++;
				printf("You won!! \n");
			}
				
			else if(computerGuess == 2)
			{
				computerPoint++;
				printf("Computer won!! \n");
			}
				
			else if(computerGuess == 1)
				printf("Round Draw!! \n");
				
		}else if(guess == 2){
			
			if(computerGuess == 3)
			{
				computerPoint++;
				printf("Computer Won!! \n");
			}
				
			else if(computerGuess == 2)
				printf("Round Draw!! \n");
			else if(computerGuess == 1)
			{
				userPoint++;
				printf("You won!! \n");
			}
				
			
		}else if(guess == 3){
			
			if(computerGuess == 3)
				printf("Round Draw!! \n");
			else if(computerGuess == 2)
			{
				userPoint++;
				printf("You won!! \n");
			}
				
			else if(computerGuess == 1)
			{
				computerPoint++;
				printf("Computer Won!! \n");
			}
				
				
		}else{
			printf("Wrong Guess!!");
		}
		
		i++;
	}
	
	printf("User %d - %d Computer", userPoint, computerPoint);
	int random = rand();
	printf("%d",random);	
	
	return 0;
}
