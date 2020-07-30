#include<stdio.h>

main()
{
char s[]="Ram is Good Man";
puts(s);
int i=0,j;
char s2[100];
while(s[i]!='\0')
{
    i++;
}
printf("Length = %d \n",i);
/*strrev(s);
strcpy(s2,s);
puts(s2);*/
for(j=i;j>=0;j++)
{
    if(s[j]!='\0')
    {
        strcpy(s2,s);
    }

}
puts(s2);
}


