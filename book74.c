#include <stdio.h>
int change(char*,int);
int main(){
	int a, i =0,count;
	
	do{
		printf("How many input(5-10):");
		scanf("%d",&a);
	}while(a < 5 || a > 10);
	
	char ch[a+1];
	
	while(i < a){
		printf("Enter character %d (a-z): ",i+1);
		scanf(" %c",&ch[i]);

		if(ch[i] < 'a' || ch[i] > 'z'){
			printf("Invalid Character, try again.\n");
			continue;
		}
		i++;
	}
	printf("Before Change =");
	for(i = 0; i < a; i++)
		printf("%2c",ch[i]);

	count = change(&ch,a);
	printf("\nAfter Change =");
	for(i = 0; i < a; i++)
		printf("%2c",ch[i]);
	printf("\ntotal = %d",count);
	return (0);
	
}

int change(char *ch,int a){
	char vowel[6] = "aeiou";
	int i,j,count = 0;

	for(i = 0; i<a;i++){
		for(j = 0; j < 5; j++){
			if(*(ch+i) == vowel[j]){
				*(ch+i) = toupper(*(ch+i));
				count++;
				printf("\nThis is %c\n",*(ch+i));
			}
		}
	}
	return count;
}
