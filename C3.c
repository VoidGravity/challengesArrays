#include <stdio.h>

int main () {

int number[10];
int temp;
int i;
     for (i= 0; i < 10 ; i++) {
     printf ("enter your %d number : ",i+1);
     scanf ("%d",&number [i]);
    }
    for (int n= 0 ;n <9; n++) {

        for (int n2=n+1;n2<10;n2++) {
            if (number [n]<number [n2]) {
                temp = number [n2];
                number [n2]=number [n];
                number [n] =  temp;
            }

        }
    }
    printf ("YOUR NUMBERS ARE : ");

    for (i= 0; i < 10 ; i++) {
     printf ("%d,",number [i]);
    }

}
