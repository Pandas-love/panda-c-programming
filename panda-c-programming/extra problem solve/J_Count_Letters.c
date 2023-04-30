#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000000];
    scanf("%s",s);
    int size=strlen(s);
    if (1<=size&&size<=1000000)
    {
        int j=0,i=0;
        int count[26]={0};
        while (j<size+26)
        {
            if (j<size)
            {
                int value=s[j];
                value=value-97;
                count[value]++;
            }
            if(size<j)
            {
                int sum=0;
                sum=i+97;
                
                if(count[i]!=0)
                {
                printf("%c : %d\n",sum,count[i]);
                }
                i++;
            }
         j++;       
        }   
    }
    return 0;
}