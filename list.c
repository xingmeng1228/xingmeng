#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct stu{
    int id;
    int chinese;
    char name[256];
    struct stu *next;
};
struct stu *create(struct stu *pro, int id, int chinese, char *name)
{
    struct stu * p = (struct stu *) malloc(sizeof(struct stu ));
    p->id = id;
    p->chinese = chinese;
    strcpy(p->name,name);
    p->next = NULL;
    pro->next = p;
    return p;
}
void print(struct stu *head){               
   struct stu * p = head;
   while(p != NULL){
        printf("%d %d %s\n",p->id,p->chinese,p->name);
        p = p->next;
        }
}
struct stu *del(int id,struct stu *head){    
    struct stu *q, *p = head;
    if(p->id==id){
        p = p->next;
        free(head); head = NULL;
        return p;
        }
        while(p->next != NULL){
        if(p->next->id==id){
            q=p->next;
            p->next=q->next;                   
            free(q);
            q=NULL;
            }
        p=p->next;
       }
    return head;
}
struct stu *add( int id,int chinese,char *name,int id1,struct stu *head)
{
    struct stu *q = (struct stu *)malloc(sizeof(struct stu ));
    struct stu *p=head;
    q->id = id;
    q->chinese = chinese;
    strcpy(q->name,name);
    while(p != NULL)
    {
        if(p->id = id1)
        {
            q->next = p->next;
            p->next = q;
            break;
        }
        p = p->next;
    }
    return head;
}
int main(int argc, const char *argv[])
{   struct stu *head,*p;
    head = malloc(sizeof(struct stu));
    head->id = 0;
    head->chinese =89;
    strcpy(head->name,"zhang");
    p = head;
    p = create(head,1,98,"wang");
    p = create(p,2,96,"li");
    p = create(p,3,94,"zhao");
    p = create(p,4,94,"zhou");
    //head = del(2,head);
    head = add(8,96,"sun",2,head);
    print(head);
    return 0;
}
