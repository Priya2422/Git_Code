#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,nguesses=1,guess;
    srand(time(0)); 
    number=rand()%100+1; //To generate a no between 1 to 100
    printf("Enter the generated no: %d\n",number);
    do{
        printf("Guess the number:\n");
        scanf("%d",&guess);
        if(guess>number){
        printf("Lower number please!");
        }
        else if(guess<number){
        printf("Higher number please!");
        }
        else{
        printf("No. of guesses is:%d\n",nguesses);
        }
     nguesses++;
    }while(guess!=number);
  return 0;
}