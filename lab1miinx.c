#include <stdio.h>
int main() {
	int num1;
	int num2;
	printf("n1:");
	scenf("%d",&num1);
	printf("n2:");
	scenf("%d",&num2);
	if (num1>num2){
		printf("num1 is greater than num2");
		printf("\n%d", (num1-num2));
	}else {
		printf("num1 is greater than num2");
		printf("\n%d", (num2-num1));
	}
	
}
