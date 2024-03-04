#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int framesize,sent=0,ack,i;
printf("\n Enter number of frames \n");
scanf("%d",&framesize);
while(1)
{
    for(i=0;i<framesize;i++)
    {
        printf("\n Frame %d has been transmitted\n",sent);
        sent++;
        if(sent==framesize)
            break;
    }

printf("\n Please enter the last acknowledgement received\n ");
scanf("%d",&ack);
if(ack>=framesize)
    break;
else
    sent=ack;
}
return 0;
}
