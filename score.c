
#include<stdio.h>

int main()
{
	int a;


	
while(1){   //scanf("%d",&a);
	
	scanf("%d",&a);/*if you insert 'a' it will become infinity loop,because character a isn't a number,
	so the scanf won't take it away but still think you have already insert something*/
	/*try if scanf has return value*/
	if(a > 100 || a <0){
		printf("error\n");
	}
	else if(a >= 60){
		printf("pass\n");
	}
	else if(a >= 40){
		printf("¸É¦Ò\n");
	}
	else {
		printf("­«¸É­×\n");
	}
	
}	
	return 0;	
} 
