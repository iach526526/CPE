#include <stdio.h>
int GCD(int,int);
int main(){
	int N;
	while((scanf("%d",&N))!=EOF)
	{
		int G=0,i,j,f=0;
		for(i=1;i<N;i++){//�D1��N���@�ժ��̤j���]���`�M 
			for(j=i+1;j<=N;j++)
			{
				
				if(N==0){
					break;
				}
			    G+=GCD(i,j);
				
			}
		}
		if(N==0)//��J�M0���̤j���]�ƴN���������{���A�n���Xgor�j��Mwhile�j��A�ҥH�����break 
		{
			break;
		}
		printf("%d\n",G);
	}

}
int GCD(int a,int b)//����۰��k��GCD 
{
	if (a>b)
	{
		int temp=a;
		a=b;
		a=temp;
	}
	int flag=0;
	while(b%a!=0 && a%b!=0)//�u�n���㰣�N�~������۰� 
	{
		if (flag==0)
		{
			b=b%a;
			flag=1;
		}
		else if(flag==1){
			a=a%b;
			flag=0 ;
		}
		
		
	}
	switch(flag){
		case 1:
			return b;
		case 0:
			return a;
	}
		
	
}

