#include <stdio.h>
int GCD(int,int);
int main(){
	int N;
	while((scanf("%d",&N))!=EOF)
	{
		int G=0,i,j,f=0;
		for(i=1;i<N;i++){//求1到N兩兩一組的最大公因數總和 
			for(j=i+1;j<=N;j++)
			{
				
				if(N==0){
					break;
				}
			    G+=GCD(i,j);
				
			}
		}
		if(N==0)//輸入和0的最大公因數就直接結束程式，要跳出gor迴圈和while迴圈，所以有兩個break 
		{
			break;
		}
		printf("%d\n",G);
	}

}
int GCD(int a,int b)//輾轉相除法找GCD 
{
	if (a>b)
	{
		int temp=a;
		a=b;
		a=temp;
	}
	int flag=0;
	while(b%a!=0 && a%b!=0)//只要不整除就繼續輾轉相除 
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

