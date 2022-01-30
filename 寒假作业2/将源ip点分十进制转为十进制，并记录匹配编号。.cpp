#include<stdio.h>
#include<math.h>
int a[10000]={0};
void change(int b[10000][100],int n)
{
	int m,i,j,c[1000];
	for(i=1;i<=n;i++)
	{
		m=1;
		for(j=3;j>=0;j--)
		{
			int s,k=1,f=1;
			m++;
			while(b[i][m]!='.')
			{
				if(b[i][m]=='/')
				break;
				k++;
				m++;
			}
			if(k==4)
			{
			s=(b[i][m-3]-48)*100+(b[i][m-2]-48)*10+b[i][m-1]-48;
			}
			if(k==3)
			{
			s=(b[i][m-2]-48)*10+b[i][m-1]-48; 
			}
			if(m==2)
			{
			s=b[i][m-1]-48;
			}
			while(s>1)
			{
				c[f]=s%2;
				s=s/2;
				f++;
			}
			for(;f>0;f--)
			a[i]=a[i]+pow(2,8*j+f-1)*c[f-1];
		}
	}
}
int main()
{
	FILE *fp;
	fp=fopen("C:\\Users\\joy\\Desktop\\dataset\\data\\dataset1\\rule1.txt","r") ;
	int b[10000][100],i=1,j=0,k,num[10000];
	while((b[i][j]=fgetc(fp))!='EOF')
	{
	if(b[i][j]=='\n')
	{
		i++;
		j=0; 
	}
	j++;
	}
	change(b,i);
	FILE *fp2;
	fp2=fopen("C:\\Users\\joy\\Desktop\\dataset\\data\\dataset1\\packet1.txt","r");
	int c[10000][100],d[1000]={0},n;
	i=1,j=0,k=0;
	while((c[i][j]=fgetc(fp))!='EOF')
	{
	if(c[i][j]=='\n')
	{
		i++;
		j=0; 
	}
	j++;
	}
	n=i;
	for(i=1;i<=n;i++)
	{
		j=1,k=0;
		while(c[i][j]!=' ')
		{
			k++;
			j++;
		}
	for(k-1;k>=0;k--)
	d[i]=d[i]+c[i][k]*pow(10,k);
	}
	j=1;
	for(i=1;i<=n;i++)
	{
		if(a[i]==d[i])
		{
		num[j]=i;
		j++;
		}
	}
	if(j==1)
	printf("0");
	else
	printf("1");
	
	fclose(fp2);
	fclose(fp);
 } 
