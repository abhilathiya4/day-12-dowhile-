#include<stdio.h>

main(){
	
	int i = 1,n,sum = 0;
	
	printf("Enter Value : ");
	scanf("%d",&n);
	
	do{
		sum = sum + n;
		
		n--;
		
	}while(i<=n);
	
	
	printf("%d",sum);
}
