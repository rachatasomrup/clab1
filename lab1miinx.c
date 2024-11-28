#include <stdio.h>
int main() {
	int n1,n2;
	printf("n1:","n2:");
	scanf("%d",&n1);
	scanf("%d",&n2);
	if (n1>n2){
		printf("num1 is greater than num2");
		printf("\n%d", (n1-n2));
	}else {
		printf("num1 is greater than num2");
		printf("\n%d", (n2-n1));
	}
	
}
