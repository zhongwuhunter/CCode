//
//  ZWQueue.c
//  DS
//
//  Created by tiger on 2019/3/6.
//  Copyright © 2019年 tiger. All rights reserved.
//

#include "ZWQueue.h"

/*

void initQueue(CirQueue *Q) {
    Q->front = 0;
    Q->rear = 0;
}

int queueEmpty(CirQueue *Q) {
    return (Q->front == Q->rear);
}

int queueFull(CirQueue *Q) {
    return (Q->rear + 1) % QueueSize == Q->front;
}


void enQueue(CirQueue *Q, DataType x) {
    if (queueFull(Q))
    {
        printf(" full ");
    }
    else
    {
        Q->data[Q->rear] = x;
        Q->rear = (Q->rear + 1) % QueueSize;
    }
}


DataType getFront(CirQueue *Q) {
    if (queueEmpty(Q))
    {
        printf("empty");
        exit(0);
    }
    else
    {
        return Q->data[Q->front];
    }
    
}

DataType deQueue(CirQueue *Q) {
    if (queueEmpty(Q))
    {
        printf("empty");
        exit(0);
    }
    else
    {
        DataType ret;
        ret = Q->data[Q->front];
        Q->front = (Q->front + 1) % QueueSize;
        return ret;
    }
}

 */








//带头结点
void initQueue(LinkQueue *Q) {
    Q->front = (QueueNode *)malloc(sizeof(QueueNode));
    Q->rear = Q->front;
    Q->rear->next = NULL;
}

int queueEmpty(LinkQueue *Q) {
    return Q->rear == Q->front;
}

void enQueue(LinkQueue *Q, DataType x) {
    QueueNode *p = (QueueNode *)malloc(sizeof(QueueNode));
    p->data = x;
    
}

DataType getFront(LinkQueue *Q) {
    if (queueEmpty(Q))
    {
        exit(0);
    }
    else {
        return Q->front->next->data;
    }
}

DataType deQueue(LinkQueue *Q) {
    QueueNode *p;
    if (queueEmpty(Q))
    {
        exit(0);
    }
    else {
        p = Q->front;
        Q->front = Q->front->next;
        free(Q);
        return Q->front->data;
    }
}




void testQueue(void){
    
}






















