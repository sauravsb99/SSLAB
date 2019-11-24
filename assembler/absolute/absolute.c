#include <stdio.h>
#include <stdlib.h>
void main()
{
FILE *myfile;
int i=0,f=0,f1=0,j,k;
char ch,fn[30],stadd[15],textrec[80];
myfile=fopen("in.txt","r");
if(myfile == NULL)
{
puts("Cannot open the file");
exit(0);
}
while((!feof(myfile)) && f1==0)
{
while(f1==0)
{
ch = fgetc(myfile);
if((ch=='H' || ch=='h' ) && f==0)
f=1;
if(ch=='^')
{
f1=1;
break;
}
if(ch != 'H' && f==1 && f1==0)
{
fn[i]=ch;
i++;
fn[i]='\0';
}
}
if(f1==1)
for(j=0;j<=12;j++)
stadd[j]=(ch=fgetc(myfile));
stadd[j]='\0';
while(!feof(myfile))
{ ch=fgetc(myfile);
if(ch=='T')
for(k=1;k<=80;k++)
textrec[k]=(ch=fgetc(myfile));
textrec[k]='\0';
}
}
printf("Program name is %s \n",fn);
printf("\n Starting Address ");
for(i=0;i<=5;i++)
printf("%c",stadd[i]);
printf("\n Length of the Program ");
for(i=7;i<=12;i++)
printf("%c",stadd[i]);
printf("\n \n Text Address %s \n",textrec);
for(i=1;i<=80;i++)
{
if((i%7)!=0)
printf("%c",textrec[i]);
else
printf("\n");
}
}