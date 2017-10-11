#include <stdio.h>
#include <stdio_ext.h>

int main(){
  int a;
  do{
    printf("How many number (4-10): ");
    scanf("%d",&a);
  }while(a < 4 || a > 10);
///////////////////////////////////////////////////
  int n[a],i,eCount = 0,oCount = 0,sum = 0;

  for(i = 0; i < a; i++){
    printf("n[%d]: ",i);
    scanf("%d", &n[i]);
  }
/////////////////////////////////////////////////////
  for(i = 0; i < a; i++){
    if(n[i] % 2 == 0){
      printf("Number %d is an even number.\n",n[i]);
      eCount++;
      sum += n[i];
    }
    else{
      printf("Number %d is an odd number.\n",n[i]);
      oCount++;
      sum += n[i];
    }
  }
  printf("Total even number is %d.\n",eCount);
  printf("Total odd number is %d.\n",oCount);
  printf("Sum of all number is %d.\n",sum);
}
