//you can say 7
/*�P�_7������ �P�_:�ѭӦ�ư_�C�T��Ʀr�@�`,�U�_�Ƹ`���M�P���Ƹ`���M�۴�,
��t�O7�����ơC */ 
//ex: 112 231�ݦ�231-112= 119;119%7=0

/*�Yefg-bcd+fga-cde+ab�O7������,
�habcdefgabcdefg�O7�����ơC
*/
#include <stdio.h>
#include <math.h>
#define arrsize 100 //�ݴ��ƪ���100,�i�ۦ��� 

int main()
{
	int i=0,sum=0,turn=0;
	char A[arrsize];
	while((scanf("%s",A))!=EOF)
	{
		if(A[0]=='0' && A[1]=='\0')
		{
			return 0;
		}
		
		while(A[i]!='\0')
		{
			i++;
		}
			
		
		i-=1;//�D�X�̫�@����index 
		for(;i>=0;i-=3)
		{
			int k;
			if (i<3)
			{
				k=i;
			}
			k=0;
			
			for(;k<=2;k++)//�ƤT��� �ƳѤU��(<3��) 
			{
				
				if(turn%2==0)
				{
					if(i-k<0)
					{
						break;
					}
					//printf("k=%d\n",k);
					sum=sum+pow(10,k)*(A[i-k]-48);//-48:�qASCII�����Ʀr 
					//printf("%d\n",sum);
					
				}
				else{
					if(i-k<0)
					{
						break;
					}
					//printf("k=%d\n",k);
					sum=sum-pow(10,k)*(A[i-k]-48);//-48:�qASCII�����Ʀr 
					//printf("*%d\n",sum);
				}
			}
			turn++;
		}
		if(sum%7==0)
		{
			printf("%s is a multiple of 7.\n",A);
		}
		else
		{
			printf("%s is not a multiple of 7.\n",A);
		}
		i=0;//���m 
		sum=0;
	}
}
	

	

	



