#include<stdio.h>
int main(){
    int a,sq,cb;
    int *ptr;
    scanf("%d",&a);
    ptr=&a;
    sq=(*ptr)*(*ptr);
    cb=(*ptr)*(*ptr)*(*ptr);
    printf("square is %d\n",sq);
    printf("cube is %d\n",cb);
    return 0;
}
