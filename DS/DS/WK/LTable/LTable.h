//
//  LTable.h
//  DS
//
//  Created by tiger on 2019/3/21.
//  Copyright © 2019年 tiger. All rights reserved.
//

#ifndef LTable_h
#define LTable_h

#include <stdio.h>


typedef struct Table{
    int * head;//声明了一个名为head的长度不确定的数组，也叫“动态数组”
    int length;//记录当前顺序表的长度
    int size;//记录顺序表分配的存储容量
}table;


void testTable(void);



















#endif /* LTable_h */
