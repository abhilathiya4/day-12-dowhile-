#include<stdio.h>

main(){
	
	int i = 1,n;
	
	printf("Enter Value : ");
	scanf("%d",&n);
	
	do{
		
		printf("%d\n",i);
		
		i=i+2;
		
	}while(i<=n);
	
}

