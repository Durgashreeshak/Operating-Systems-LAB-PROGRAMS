#include<stdio.h>
int main()
{
int IS[]={4,1,2,4,5};
int PF=0;
int frames=3;
int m,n,s,pages;
pages=sizeof(IS)/sizeof(IS[0]);
printf("Incoming\t\t\tFrame1\t\t\tFrame2\t\t\tFrame3");
int temp[frames];
for(m=0;m<=frames;m++)
{
temp[m]=-1;
}
for(m=0;m<pages;m++)
{
s=0;
for(n=0;n<frames;n++)
{
if(IS[m]==temp[n])
{
s++;
PF--;
}}
PF++;
if((PF<=frames)&&(s==0))
{
temp[m]=IS[m];
}
else if(s==0)
{
temp[(PF-1)%frames]=IS[m];
}
printf("\n");
printf("%d\t\t\t",IS[m]);
for(n=0;n<frames;n++)
{
if(temp[n]!=-1)
printf("%d\t\t\t",temp[n]);
else
printf("- \t\t\t");
}}
printf("\nTotal page faults:\t%d\n",PF);
return 0;
}

















