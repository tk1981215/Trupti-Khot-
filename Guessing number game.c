#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    int guess,random;
    int no_of_guess=0;
    srand((unsigned)time(NULL));
    printf("Welcome to the number guessing game...!!\n");
    random=rand()%100+1;
    do{
        printf("\nPlease Enter Your Guess Between(1 to 100):");
        scanf("%d",&guess);
        no_of_guess++;
        
        if(guess<random){
            printf("Guess larger number.\n");
        }
        else if(guess>random){
           printf("Guess smaller number.\n");
        }
        else{
            printf("Congratulations!!!YouHave Guessed The Number");
        }
    }while(guess!=random);
    printf("\nBye, Bye,Thanks For Playing.");
    return 0;
}
