#include<stdio.h>
int main()
{
	int f,k,rows;
	printf("enter the number of rows: ");
	scanf("%d",&rows);
	for (f=1; f<= rows; ++f){
		for (k=1; k<= f; ++k){
			printf("%d",k);
		}
		printf("\n");
		
	}
}
