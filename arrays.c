#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void digitCounter(int argc)
{
    int counter=0;
    while(argc >= 1)
    {
        counter++;
        argc=argc/10;
    }
    printf("%d", counter);
    
   // printf("%f", floor(log_10(argc))+1);
}

int main(int argc, char **argv)
{
    /*int array[5];
    for(int num=0; num<5; num++;)
        array[num]=num;
    int element = *array;
    int element2= array[3];
    int element3= 2[array];
    int element4= *(array+1);*/
    
    digitCounter(1111111);
}