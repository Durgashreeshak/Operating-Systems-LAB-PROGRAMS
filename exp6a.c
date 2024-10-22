#include<stdio.h>
#define max 25
void main()
{
	int frag[max],b[max],f[max],i,j,nb,nf,temp,heighest=0;
	static int bf[max],ff[max];
	printf("\n****Memory Management scheme-Worst Fit****");
	printf("\nEnter the number of blocks: ");
	scanf("%d",&nb);
	printf("\nEnter the number of files: ");
	scanf("%d",&nf);
	printf("\nEnter the size of the blocks:-\n ");
	for(i=1;i<=nb;i++)
	{
		printf("Block %d: ",i);
		scanf("%d",&b[i]);
	
	}
	printf("Enter the size of the files:-\n");
	for(i=1;i<=nf;i++)
	{
		printf("File %d: ",i);
		scanf("%d",&f[i]);
	}
	for(i=1;i<=nf;i++)
	{
	for(j=1;j<=nb;j++)
	{
		if(bf[j]!=1)
		{
			temp=b[j]-f[i];
			if(temp>=0)
			if(heighest<temp)
			{
				ff[i]=j;
				heighest=temp;
			}
		}
	}
	frag[i]=heighest;
	bf[ff[i]]=1;
	heighest=0;
	}
	printf("|nFile_no:\tFile_size:\tBlock_no:\tBlock_size:\tFragment");
	for(i=1;i<=nf;i++)
	printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d\n",i,f[i],ff[i],b[ff[i]],frag[i]);	
}























