#include <stdio.h>
#include <conio.h>
int main(){
FILE *opening;
opening = fopen("abc.txt","w");
fprintf(opening,"Hello Universe");
fclose(opening);
printf("Success");

	return 0;
}
