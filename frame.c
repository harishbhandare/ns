#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char res[100];
void sender()
{
        int n,i,len;
        char frm[100],l[100];
        printf("Enter the number of frames\n");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {   
            printf("Enter the frame to be sent  %d\n",i+1);
            scanf("%s",&frm);
            len=strlen(frm);
            sprintf(l,"%d",len);
            strcat(l,frm);
            strcat(res,l);
        }
            printf("The final message to be sent is %s\n",res);
}
void reciever()
    {
        int len,i,j;
        printf("Received frames are \n");
        for(i=0;i<strlen(res);i++)
        {
                len=res[i]-'0';
                for(j=i+1;j<=(i+len);j++)
                printf("%c",res[j]);
                i=i+len;
        }
}
void main()
{
        sender();
        reciever();
        return 0;
}
