#include <stdio.h>
#include<stdlib.h>
#define STACKSIZE 10
#define TRUE 1
#define FALSE 0

struct stack{
    int item[STACKSIZE];
    int TOP;
};

struct stack S;

Inistialize(){
    S.TOP=-1;
}

int IsEmpty(){
    if(S.TOP==-1)
        return TRUE;
    else
        return FALSE;
}

Push(int x){
    if(S.TOP==STACKSIZE-1){
        printf("stack overflows");
        exit(1);
    }
    S.TOP= S.TOP+1;
    S.item[S.TOP]=x;
    
}

Pop(){
    int x;
    if(IsEmpty()){
        printf("stack underdflows");
        exit(1);
    }
     x= S.item[S.TOP];
    S.TOP= S.TOP-1;
    return x;
    
}
int StackTop(){
    int x= S.item[S.TOP];
    return x;
}

int main()
{
    int x;
    Inistialize();
    printf("enter num");
    scanf("%d", &x);
    while(x!=0){
        int rem=x%16;
        Push(rem);
        x=x/16;
    }
    while(!IsEmpty()){
        int a= Pop();
        if(a>=10){
        printf("%c",65+(a-10));
        }
        else{
            printf("%d",a);
        }
    }
    
    return 0;
}