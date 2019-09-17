#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10

typedef struct Lnode* PtrtoLnode;
struct Lnode {
    int data[MAXSIZE];
    int last;
};
typedef PtrtoLnode List;

List MakeEmpty();
int Find(List L, int X);
bool Insert(List L,int X,int i);

int main()
{
    int n,s;
    List l;
    l = MakeEmpty();
    scanf("%d", &n);
    s = Find(l, n);
    return 0;
}
List MakeEmpty()
{
    List L;
    L = (List)malloc(sizeof(struct Lnode));
    L->last = -1;
    return L;
}

int Find(List L, int X)
{
    int i = 0;
    while (i <= L->last && L->data[i] != X)
        i++;
    if(i > L->last)
        return -1;
    else
        return i;
}

/* 头插法建立单链表：返回单链表的头指针
struct Node* buildLinkedList(int* arr, int n);     头插法建立单链表
void printLinkedList(struct Node* head);          打印链表
int main(int argc, char const *argv[]) {
    int n, i;
    int* a;
    scanf("%d", &n);
    a = (int*)malloc(n * sizeof(int));    //动态内存分配申请数组空间
    for (i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    
    struct Node* head = NULL;    //声明一个指针变量head
    
    //创建链表，把返回的头指针赋值给head指针变量
    head = buildLinkedList(a, n);
    
    //打印链表：整个链表用head来代表。
    printLinkedList(head);
    
    free(a);    //释放存储空间
    
    return 0;
}

struct Node* buildLinkedList(int* arr, int n)
{
    struct Node *head,*t;
    head = (struct Node*)malloc(sizeof(struct Node));
    head->link = NULL;
    
    for(int i = 0; i < n; i++)
    {
        t = (struct Node*)malloc(sizeof(struct Node));
        t->data = *(arr + i);
        head = t;
        head = NULL;
        
    }
    return head;
}

void printLinkedList(struct Node* head)
{
    struct Node* p;
    p = head->link;
    if(p == NULL)
        printf("NULL");
    else
    {
        while(p->link)
        {
            printf("%d ", p->data);
            p = p->link;
        }
        printf("%d", p->data);
    }
}*/
