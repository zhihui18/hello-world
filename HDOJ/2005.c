#include <stdio.h>

int Judmon(int mon)  //ʧ��...Ӧ������ʵ��!!!
{
	switch(mon)
	{
	case 0: return 0;
	case 1:return 31; case 2: return 28; case 3: return 31; case 4: return 30;
	case 5:return 31; case 6: return 30; case 7: return 31; case 8: return 31;
	case 9:return 30; case 10: return 31; case 11: return 30; case 12: return 31;//case 12��ɾȥ
	default:
		return 0;
	}
}

int main()
{
	int y,m,d,i;
	while(scanf("%d/%d/%d",&y,&m,&d)!=EOF)
	{
		int sum=0;
		if((y%400==0||(y%4==0&&y%100!=0))&&m>2) //!!!�������ж�����!!!���ۼ��·�,����ж�+1��
		{
			for(i=0;i<m;i++)
				sum+=Judmon(i);// ��:��ʽswitch,��break
			sum=sum+1+d;
		}
		else
		{
			for(i=0;i<m;i++)
				sum+=Judmon(i);
			sum+=d;
		}
		printf("%d\n",sum);
	}
	
	return 0;
}