//you can say 7
/*耞7计 耞:パ计癬–计竊,计竊㎝籔案计竊㎝搭,
ㄤ畉琌7计 */ 
//ex: 112 231Θ231-112= 119;119%7=0

/*璝efg-bcd+fga-cde+ab琌7计,
玥abcdefgabcdefg琌7计
*/
#include <stdio.h>
#include <math.h>
#define arrsize 100 //代计100,︽э 

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
			
		
		i-=1;//―程兜index 
		for(;i>=0;i-=3)
		{
			int k;
			if (i<3)
			{
				k=i;
			}
			k=0;
			
			for(;k<=2;k++)//计┪ 计逞(<3) 
			{
				
				if(turn%2==0)
				{
					if(i-k<0)
					{
						break;
					}
					//printf("k=%d\n",k);
					sum=sum+pow(10,k)*(A[i-k]-48);//-48:眖ASCII传Θ计 
					//printf("%d\n",sum);
					
				}
				else{
					if(i-k<0)
					{
						break;
					}
					//printf("k=%d\n",k);
					sum=sum-pow(10,k)*(A[i-k]-48);//-48:眖ASCII传Θ计 
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
		i=0;//竚 
		sum=0;
	}
}
	

	

	



