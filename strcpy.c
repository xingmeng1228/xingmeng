#include <stdio.h>
//#include<string.h>
int i;
char *strcp(char *a,const char *b)
{
    for (i = 0; ; i++) 
    {   
        a[i] = b[i];
        if(a[i]=='\0')
        break;
  
    }
    return a;
   
}
int main(int argc, const char *argv[])
{
    char a[20],  b[] = "abcd" ;
    strcp(a,b);
    printf("%s\n",a);
    return 0;
}
