#include<stdio.h>
#include<math.h> 
int main()
{
	FILE *fp1;
	FILE *fp2;
	fp1=fopen("C:\\Users\\joy\\Desktop\\dataset\\data\\dataset1\\rule1.txt","r");
	fp2=fopen("C:\\Users\\joy\\Desktop\\dataset\\data\\dataset1\\packet1.txt","r");
	int a[10000][10],b[10000][10],i=1,j=1,k=4,m=0,c[10000][10]={0},d[10000]={0},n,flag=1;
	while(fgetc(fp1)!=EOF)
	{
		if(fgetc(fp1)==' ')
		k++;
		if(k==6) 
		{
			j=1;
			while((a[i][j]=fgetc(fp1))!=' ')
			{
				j++;
			}
			n=j;
			for(j=j-1;j>=0;j--)
			{
				c[i][1]=c[i][1]+(a[i][n-j]-'0')*pow(10,j);
			}
			j=1;
			while(fgetc(fp1)<'0'||fgetc(fp2)>'9')
			{
			}
			while((a[i][j]=fgetc(fp1))>='0'&&(a[i][j]=fgetc(fp2))<='9')
			{
				j++;
			}
			n=j;
			for(j=j-1;j>=0;j--)
			{
				c[i][2]=c[i][2]+(a[i][n-j]-'0')*pow(10,j);
			}
			k=0;
			i++;
		}
	}
	k=2,i=1;
	while(fgetc(fp2)!=EOF)
	{
		if(fgetc(fp2)==' ')
		k++;
		if(k==4)
		{
			j=1;
			while((b[i][j]=fgetc(fp1))!=' ')
			{
				j++;
			}
			n=j;
			for(j=j-1;j>=0;j--)
			{
				d[i]=d[i]+(a[i][n-j]-'0')*pow(10,j);
			}
			j=1;
			i++;
		}
	}
	int f[10000];
	n=i;
	k=1;
	for(i=1;i<=n;i++)
	{
		if(d[i]>=c[i][1]&&d[i]<=c[i][2])
		{
			f[k]=i;
			k++;
		}
	}
	if(k==1)
	flag=-1;
	fclose(fp1);
	fclose(fp2);
}
 
