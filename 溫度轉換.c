/* �ū��ഫ�� */
#include<stdio.h>

int main()
{
	float c,f;
	int answer;
	printf("1-->c to f  2-->f to c:");
	scanf("%d",&answer); //insert a will go to else and won't transform in ASCII code
	
	if(answer ==1)
	{
		//�����ؤ�		 
			printf("�п�J���ūסG"); 
			scanf("%f",&c);
			f=c*9/5+32;
			printf("���ū�=%.2f�� = �ؤ�ū�=%.2f��\n",c,f);		
	}	
	else
	{
		//�ؤ������
		printf("�п�J�ؤ�ūסG"); 
		scanf("%f",&f);
		c=(f-32)*5/9;
		printf("�ؤ�ū�=%.2f�� = ���ū�=%.2f��\n",f,c);
	}		 
	return 0;	
} 
