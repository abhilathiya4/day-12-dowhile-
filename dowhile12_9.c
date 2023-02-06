#include<stdio.h>

main(){
	
	int i = 1,n, fact = 1;
	
	printf("Enter Value : ");
	scanf("%d",&n);
	
	do{
		
		fact = fact * n;
		
		n--;
	}while(i<=n);
	
	printf("%d",fact);
}
