#include <stdio.h>
int main()
{
    int t, arsize, find;
    scanf("%d", &t);
    if (1 <= t && t <= 20)
    {
        int j = 1;
        while (t > 0)
        {
            scanf("%d", &arsize);
            int count = 0;
            if (1 <= arsize && arsize <= 1000)
            {
                int list[arsize];
                for (int i = 0; i < arsize; i++)
                {

                    scanf("%d", &list[i]);
                    if (1 <= list[i] && list[i] <= 1000)
                    {
                        continue;
                    }
                    else
                    {
                        return 0;
                    }
                }

                scanf("%d", &find);
                if (1 <= find && find <= 1000)
                {
                    for (int i = 0; i < arsize; i++)
                    {
                        if (list[i] == find)
                        {
                            count = i + 1;
                            break;
                        }
                    }
                }
            }

            if (count > 0)
            {
                printf("Case %d: %d\n", j, count);
            }
            else
            {
                printf("Case %d: Not Found\n", j);
            }
            t--;
            j++;
        }
    }
    return 0;
}