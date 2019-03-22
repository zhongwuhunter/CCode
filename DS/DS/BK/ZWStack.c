//
//  ZWStack.c
//  DS
//
//  Created by tiger on 2019/3/6.
//  Copyright © 2019年 tiger. All rights reserved.
//

#include "ZWStack.h"

void initStack(SeqStack *S) {
    S->top = -1;
}

int stackEmpty(SeqStack *S) {
    return S->top == -1;
}

int stackFull(SeqStack *S) {
    return S->top == stackSize - 1;
}

//»Î’ª
void push(SeqStack *S, DataType x) {
    if (stackFull(S))
    {
        printf("full");
    }
    else
    {
        S->top += 1;
        S->data[S->top] = x;
    }
}

DataType pop(SeqStack *S) {
    if (stackEmpty(S))
    {
        printf("is empty");
        exit(0);
    }
    else
    {
        return S->data[S->top--];
    }
}

DataType getTop(SeqStack *S) {
    if (stackEmpty(S))
    {
        printf("’ªø’");
        exit(0);
    }
    else
    {
        return S->data[S->top];
    }
}



void testStack(void){
    SeqStack *s = malloc(sizeof(SeqStack));
    initStack(s);
    push(s, 88);
    
    DataType ret = getTop(s);
    
    printf("%d empty=%d\n", ret, stackEmpty(s));
}

