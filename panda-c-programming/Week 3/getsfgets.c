//to use scanf and fgets both in a single program
//then you have to use getchar() between them.it actually take input
//of character which is given when user input array size. after declaring array
//size we give enter that fgets() use and think that input already given as its only take line wise input
//but if we give space and write our string then it works. But for space it will take one less character from giver string.
#include<stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    getchar();
    char str[i];
    fgets(str,i,stdin);
    //fgets() only take one line like 1st fgets() 
    //will take input from 1st line but here takeing
    //from 2nd because i used enter and that enter gets by
    //getchar() that why it taking input from 2nd line and
    //2nd fgets() taking input from 3rd line.
    printf("%s",str);
    fgets(str,i,stdin);
    printf("%s",str);
    return 0;
}