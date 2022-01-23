#include<stdio.h>
#include<math.h>
int main()
{
		FILE *fp;
		fp=fopen("D:\\haha.txt","r");
		if(fp==NULL)
			printf("fail");
		int a[100]={0},j,b[100],n,m,c[100];
		for(j=3;j>=0;j--)
		{
			int i=1,k=1; 
			while((b[i]=fgetc(fp))!='.')
			{
			if(b[i]=='/')
			break;
			i++;
			}
			if(i==4)
			{
			m=(b[1]-48)*100+(b[2]-48)*10+b[3]-48;
			}
			if(i==3)
			{
			m=(b[1]-48)*10+b[2]-48; 
			}
			if(i==2)
			{
			m=b[1]-48;
			}
			printf("\n%d\n",m);
			while(m>1)
			{
				c[k]=m%2;
				m=m/2;
				k++;
			}
			for(;k>0;k--)
			a[j]=a[j]+pow(2,8*j+k-1)*c[k-1];
		}
		printf("%d",a[0]);
		fclose(fp);
}
