#include<stdio.h>

float Input_Data(){
   int n,i,sum=0;
   float avg=0.0;
   char ch;
    do{
     printf("Enter a number from function Input_Data (3-10):");
     scanf("%d",&n);
    }while(n<3 ||n>10);

    for(i=1;i<=n;i++){
     do{
     	printf("Enter character %d from function Input_Data (A-Z):",i);
        scanf("%c",&ch);
         if(ch>='A' && ch<'Z'){
           sum=sum+ch;
         }
	 }while(ch<'A' || ch>'Z');
    }

 	 avg=sum/(float)n;

   return avg;
 }

int main(){
    float a=0;
	 a=Input_Data();

 	 printf("Output From function main()...\n");
 	 printf("Output Average of all ASCII values is %.2f",a);

 	return 0;
}
