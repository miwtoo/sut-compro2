#include <stdio.h>

int main(){
    int i, sum = 0, all=0, t1 = 0, t2 = 10,count = 1;
    char ch = 'X';
    i = 15;
    printf("0. i = %d\t  sum = %d\t  all = %d\t  t1 = %d\t  t2 = %d\t  ch = %c\n",i,sum,all,t1,t2,ch);
    printf("%s\n","-----------------------------------------------------------------------------------------" );
    while(i>1){
        printf("*************************************-%d-**************************************************\n",count++);
        i--;
        printf("1 .i = %d\t  sum = %d\t  all = %d\t  t1 = %d\t  t2 = %d\t  ch = %c\n",i,sum,all,t1,t2,ch);
        if(i%2==1 && i>=5){
            t1++;
            sum+=i;
            printf("2 .i = %d\t  sum = %d\t  all = %d\t  t1 = %d\t  t2 = %d\t  ch = %c\n",i,sum,all,t1,t2,ch);
        }
        else{
            t2--;
            //printf("Print * %c *\n",ch-i);
            printf("3 .i = %d\t  sum = %d\t  all = %d\t  t1 = %d\t  t2 = %d\t  ch = %c\n",i,sum,all,t1,t2,ch);
            printf("*****************************************************************************************\n");
            printf("\n\n");
            continue;
        }
        i=i-2;
        sum+=i;
        ch--;
        all = i+t1+t2;
        printf("4 .i = %d\t  sum = %d\t  all = %d\t  t1 = %d\t  t2 = %d\t  ch = %c\n",i,sum,all,t1,t2,ch);
        printf("*****************************************************************************************\n");
        printf("\n\n");
    }
    printf("%s\n","-----------------------------------------------------------------------------------------" );
    printf("99. i = %d\t  sum = %d\t  all = %d\t  t1 = %d\t  t2 = %d\t  ch = %c\n",i,sum,all,t1,t2,ch);
}
