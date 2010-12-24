#include <stdio.h>
#include<stdlib.h>
int main(int argc, const char *argv[])
{   int *p,i,j=0;
    p = malloc(40);
    while(1)
    {   scanf("%d",p+j);
        j++;
    if(*(p+j-1) == 1)
        break;
    if(j*4 > 40)
    p=realloc(p,50);
    }
     for(i = 0;i < j;i++)
     {     
        printf("%d\n",*(p+i));
     }
     free(p);
     p=NULL;
    return 0;
}
