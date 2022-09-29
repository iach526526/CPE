#include <stdio.h>
int main()
{	//可憐，誰叫你這樣寫 
	/*int s,i=2,leftover;//i是累計天數 
	double d;
	scanf("%d%lf",&s,&d);//s第一天遊客初值，d查詢當天遊客數輸出 
	leftover=s;//剩餘住宿天數，為0滾蛋，隔天新的一批 
	while(i<d){
		
		if(leftover==0){
			s+=1;//舊的去，新的來 
			leftover=s;
			i++;
			
		}else{
			i++;
			leftover--;
		}
		
//		printf("leftover:%d ; i:%d\n",leftover,i);測試用 
		
	}*/
	int s,i=2; 
	double d;
	while(scanf("%d%lf",&s,&d)!=EOF)
	{
		while(d>0){
		d=d-s;
		s+=1;
		
	}
	printf("%d\n",s-1);
	}
	
	
 } 
 
