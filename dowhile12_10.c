#include<stdio.h>

main(){
	
	int i = 1,n;
	
	printf("Enter Value : ");
	scanf("%d",&n);
	
	do{
		printf("%d * %d = %d\n",n,i,i*n);
		
		i++;
		
	}while(i<=10);
	
}

