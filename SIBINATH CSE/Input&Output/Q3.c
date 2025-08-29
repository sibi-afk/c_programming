#include<stdio.h>
int main(){
	char a[20];
	scanf("%[^\n]s",&a);
	printf("the given Message is: %s",a);
	return 0;
}