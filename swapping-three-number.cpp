#include<stdio.h>
int main () {
	int  a;
	int b; 
	int c ;
//	 code for swapping three numbers
	printf("Enter the values of a \n");
	scanf("%d",&a);
		printf("Enter the values of b \n");
    scanf("%d",&b);
    	printf("Enter the values of c \n");
    scanf("%d",&c);
    a=a+b+c;
    b=a-(b+c);
    c=a-(b+c);
    a=a-(b+c);
printf("a=%d\n",a);
printf("b=%d\n",b);
printf("c=%d",c);
	return 0;
}
