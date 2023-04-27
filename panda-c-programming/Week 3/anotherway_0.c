//letter will be shown as order as input was.

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s[1000];
//     scanf("%s",s);
//     int count[26]={0};
//     for (int i = 0; i < strlen(s); i++)
//     {
//         int temp=s[i];
//         temp=temp-97;
//         count[temp]++;
//     }
//     for (int i = 0; i < strlen(s); i++)
//     {
//         //tomal will be shown as t : 1, o : 1, m : 1, a : 1, l : 1. as look as input  
//         int temp=s[i];
//         temp=temp-97;
//         printf("%c : %d\n",s[i],count[temp]);

//     }
//     return 0;
// }

//Descending order of letter

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s[1000];
//     scanf("%s",s);
//     int count[26]={0};
//     for (int i = 0; i < strlen(s); i++)
//     {
//         int temp=s[i];
//         temp=temp-97;
//         count[temp]++;
//     }
//     for (int i = 25; i >= 0 ; i--)
//     {
//         if (count[i]!=0)
//         {
//             printf("%c : %d\n",(i+97),count[i]);
//         }
        
//     }
//     return 0;
// }

// asecending order of letter

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s[1000];
//     scanf("%s",s);
//     int count[26]={0};
//     for (int i = 0; i < strlen(s); i++)
//     {
//         int temp=s[i];
//         temp=temp-97;
//         count[temp]++;
//     }
//     for (int i = 25; i >= 0 ; i--)
//     {
//         if (count[i]!=0)
//         {
//             printf("%c : %d\n",(i+97),count[i]);
//         }
        
//     }
//     return 0;
// }