#include <stdio.h>
int main()
{	//�i���A�֥s�A�o�˼g 
	/*int s,i=2,leftover;//i�O�֭p�Ѽ� 
	double d;
	scanf("%d%lf",&s,&d);//s�Ĥ@�ѹC�Ȫ�ȡAd�d�߷�ѹC�ȼƿ�X 
	leftover=s;//�Ѿl��J�ѼơA��0�u�J�A�j�ѷs���@�� 
	while(i<d){
		
		if(leftover==0){
			s+=1;//�ª��h�A�s���� 
			leftover=s;
			i++;
			
		}else{
			i++;
			leftover--;
		}
		
//		printf("leftover:%d ; i:%d\n",leftover,i);���ե� 
		
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
 
