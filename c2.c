#include <stdio.h>

int main () {

int max;
int min;
int number[10];
printf("enter your first number : ");
scanf ("%d",&number[0]);
max = number [0];
min = number [0];

     for (int i= 1; i < 10 ; i++) {
     printf ("enter your %d number : ",i+1);
     scanf ("%d",&number [i]);


     if (max<number [i]) {
     max = number[i];

     }
     if (min>number [i]) {
     min = number[i];

     }
    }
    printf ("==================================================\n");
    for (int n = 0; n <10;n++) {



    printf ("\nyour number %d is : %d\n",n, number [n]);



    }
        printf ("==================================================\n");

        printf ("the largest number you've entered yet is : %d \n",max);
        printf ("the smallest number you've entered yet is : %d\n",min);



}
