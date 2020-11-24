#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//RNG.c


int main(){
    int howmany, avg, num, num2 = 0, highest = 0, lowest = 20000, range;

    printf("How many random numbers? ");
    scanf("%d", &howmany);
    srand(time(0));


    for(int i = 0; i<howmany; i++){
        num = rand();
        printf("%d\n\n", num);
        num2 = num2 + num;
        if(highest < num){
            highest = num;
        }
        if(lowest > num){
            lowest = num;
        }
    }

    avg = num2/howmany;
    range = highest - lowest;

    if(howmany<2){
      lowest = num;
    }
    printf("\n ___________________________");
    printf("\n           Report           \n");
    printf(" Here is the average ~ %d\n", avg);
    printf("\n Here is the highest number ~ %d\n", highest);
    printf("\n Here is the lowest number ~ %d\n", lowest);
    printf("\n Here is the range ~ %d\n", range);
    printf(" ___________________________");
    return 0;
}
