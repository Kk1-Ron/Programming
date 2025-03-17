#include <stdio.h>
#include <string.h>
int main()
{
	char a[10] = {"**********"};
	int i;
	
	for(i=0;i<10;i++){
		printf("%c",a[i]);
	}
	for(i=0;i<10;i++){
		printf("%c\n",a[i]);
	}
	for(i=0;i<10;i++){
		printf("%c",a[i]);
	}
	printf("\nCode run by Aarohan Karki");
	return 0;
	
	
}
