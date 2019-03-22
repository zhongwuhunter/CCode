//
//  ZWQueue.h
//  DS
//
//  Created by tiger on 2019/3/6.
//  Copyright © 2019年 tiger. All rights reserved.
//

#ifndef ZWQueue_h
#define ZWQueue_h


#include <stdio.h>
#include <stdlib.h>

#define QueueSize 100

typedef char DataType;

//循环队列(顺序存储，数组)
typedef struct {
    DataType data[QueueSize];
    int front, rear;
}CirQueue;


//链队列
typedef struct qnode {
    DataType data;
    struct qnode *next;
}QueueNode;

typedef struct {
    QueueNode *front;
    QueueNode *rear;
}LinkQueue;


void testQueue(void);

#endif /* ZWQueue_h */
