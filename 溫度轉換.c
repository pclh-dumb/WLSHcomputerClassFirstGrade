/* 放锣传诀 */
#include<stdio.h>

int main()
{
	float c,f;
	int answer;
	printf("1-->c to f  2-->f to c:");
	scanf("%d",&answer); //insert a will go to else and won't transform in ASCII code
	
	if(answer ==1)
	{
		//尼ん锣地ん		 
			printf("叫块尼ん放"); 
			scanf("%f",&c);
			f=c*9/5+32;
			printf("尼ん放=%.2f = 地ん放=%.2f\n",c,f);		
	}	
	else
	{
		//地ん锣尼ん
		printf("叫块地ん放"); 
		scanf("%f",&f);
		c=(f-32)*5/9;
		printf("地ん放=%.2f = 尼ん放=%.2f\n",f,c);
	}		 
	return 0;	
} 
