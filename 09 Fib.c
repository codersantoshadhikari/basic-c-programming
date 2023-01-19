#include <stdio.h>
#include <conio.h>
int main(){
int a=0, b=1, c, n, i;
printf("Enter How Many Numbers");
scanf("%d",&n);
printf("%d %d ",a, b);
for(i=0; i<n-2; i++){
	c = a +b;
	printf("%d ",c);
	a = b;
	b = c;
	
}
	

	return 0;
}


