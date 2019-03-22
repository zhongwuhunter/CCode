//
//  ZWStack.h
//  DS
//
//  Created by tiger on 2019/3/6.
//  Copyright © 2019年 tiger. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#ifndef ZWStack_h

#define stackSize 100
typedef char DataType;

typedef struct {
    DataType data[stackSize];
    int top;
}SeqStack;

//SeqStack S;


void initStack(SeqStack *S);

int stackEmpty(SeqStack *S);

int stackFull(SeqStack *S);

//
void push(SeqStack *S, DataType x);

DataType pop(SeqStack *S);

DataType getTop(SeqStack *S);


void testStack(void);

#define ZWStack_h


#endif /* ZWStack_h */
