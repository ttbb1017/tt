#include<stdio.h>
int main()
{
		FILE *fp;
		fp1=fopen("D:\\haha.txt","r");
		if(fp==NULL)
			printf("fail");
		#用上一个将点分十进制转换为十进制
		int a[100],b[100][100],c[100]={0},i,j,m=1;
		for(i=1;i<=10000;i++)
		{
			for(j=1;j<=;j++)
			{
				b[i][j]=fgetc(fp2);
				if(b[i][j]='\n')
				break;
			}
		}
		for(i=1;;i++)
		{
			a[i]=fgetc(fp1);
			if(a[i]=='\n')
			break;
		}
		for(i=1;i<=10000;i++)
		{
			int k=1;
			for(j=1;;j++) 
			{
				if(b[i][j]==' ')
				k++;
				if(k==2)
				break;
				if(a[j]!=b[i][j])
				break;
			}
			if(k!=2)
			{
				c[m]=i;
				m++;
			}
		}
		
}
 
