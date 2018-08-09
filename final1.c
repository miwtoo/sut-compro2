#include <stdio.h>
#include <string.h>

void main(){
        int i=1,t1=0,t2=0,sum=0;
        char s1[20]="petty",s2[20]="tiffies";

        printf("----------init----------\n");
        printf("i = %d\ns1 = %s\ns2 = %s\nsum = %d\nt1 = %d\nt2 = %d",i,s1,s2,sum,t1,t2 );
        printf("\n------------------------\n\n");
        printf("\n====================WHILE==========================\n");
        while(i<3) {
                if(strcmp(s2,s1)>0){
                        strcat(s2,s1);
                        printf("in if\ni = %d\ns1 = %s\ns2 = %s\n\n",i,s1,s2 );
                }

                else if(strcmp(s1,s2)<0){
                        strcpy(s1,s2);
                        printf("in else if\ni = %d\ns1 = %s\ns2 = %s\n\n",i,s1,s2 );
                }
                else{
                        strcpy(s2,s1);
                        printf("in else\ni = %d\ns1 = %s\ns2 = %s\n\n",i,s1,s2 );
                }


                i++;
                printf("\n-----------------------------------------------\n");
        }
        printf("\n===================================================\n");
        printf("\n========================FOR========================\n");
        for(i=strlen(s2)-strlen(s1)-1; i>0; i=i-2) {
                if(s2[i]%2 == 1) {
                        s2[i] = s2[i]-1;
                        t1++;
                        printf("in if\ni = %d\ns1 = %s\ns2 = %s\nt1 = %d\nt2 = %d\n",i,s1,s2,t1,t2 );

                }else{
                        s2[i] = s2[i]+1;
                        t2+=t1;
                        printf("in else\ni = %d\ns1 = %s\ns2 = %s\nt1 = %d\nt2 = %d\n",i,s1,s2,t1,t2 );
                }
                sum=t1+t2+i;
                printf("sum = %d\n\n", sum);

                printf("\n-----------------------------------------------\n");
        }
        printf("\n===================================================\n");
        printf("----------end----------\n");
        printf("i = %d\ns1 = %s\ns2 = %s\nsum = %d\nt1 = %d\nt2 = %d",i,s1,s2,sum,t1,t2 );
        printf("\n------------------------\n\n");
}
