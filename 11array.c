#include <stdio.h>
#include <conio.h>
int main(){
	int i,j, temp, roll[10];
for(i=0; i<10; i++){
	printf("Enter roll[%d]: \n",i);
	scanf("%d",&roll[i]);
	
}
/// 
for(i=0; i<10; i++){
	for(j=0; j<10; j++){
		if(roll[j] > roll[j+1]){
			temp = roll[j];
			roll[j] = roll[j+1];
			roll[j+1] = temp;
		}
	}
}

// Displaying Result
	
for(i=0; i<10; i++){
	printf("The value of roll[%d] is %d: \n",i, roll[i]);
	
	
}	
	

	return 0;
}
