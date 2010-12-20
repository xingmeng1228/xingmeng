#include <stdio.h>
int cmp_int(void *a,void *b)
{
  return *((int*)a) -*((int*)b);
}
int cmp_char(void *a,void *b)
{
 return (*(char*)a) - *((char*)b);
}
void *( get_max)(void(*fun)(void *,void *),void * a,int len,int size)
{
void *max;
int i;
max = a;
for (i = 0; i < len-1; i++) 
{   if((*fun)(max,a+size*(i + 1))>0);
        else max=a+size*(1 + i);
        return *max
}
int main(int argc, const char *argv[])
{
    int  a[10]={1,2,3,5,4,5,7,8,8,9};
    char b[10]={1,2,3,5,9,8,7,3,6,4};
    void *re;
    void *ret;
    re = get_max(cmp_int,a,10,4);
    ret = get_max(cmp_char,b,10,1);
    printf("%d\n",*re);
    printf("%d\n",*ret);
    return 0;
}
