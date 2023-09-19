#include <stdio.h>

int main (void){

int i=1;
int Mresult = 0;
int max;
int min;
int s=0;
int t=0;
int v=0;
int b=0;
int number [100000];
printf ("enter numbers from 0 to 20 , if the number is outside this range the program will stop executing ! \n");

 while (1) {

 printf ("enter your %d number : ",i);
 scanf ("%d",&number[i]);
 max = number [0];
 min = number[0];
  if (number[i]<0 || number[i]>20 ){
      for (int n=0; n <=i ; n++ ) {
       printf (" your %d number is : %d \n ",n+1,number [n]);
        if (number [i]!=0) {
            printf (" the average is : %d \n",Mresult/i);
            for (int z =0; z<i;z++ ) {
            if (number [z]<Mresult/i) {printf ("%d is inférieur a la moyenne\n", number [z]) ; t++;}
            printf ("there are %d numbers bellow average. \n",t);
            if (number [z]>Mresult/i) {printf ("%d is supErieur a la moyenne\n", number [z]); s++;}
            printf ("there are %d numbers above average. \n",s);
                }

                }
        else printf ("some calculations aren't done cus you can't devide by 0 , you can calculate limits in future versions , stay tuned .");

            if (max<number [i]) {
             max = number[i];


             }
             if (min>number [i]) {
             min = number[i];
             }

      }


  break;


  }

 Mresult=Mresult+number [i];

 i++;

 }




}
