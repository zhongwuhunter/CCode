//
//  main.c
//  DS
//
//  Created by tiger on 2019/2/14.
//  Copyright © 2019年 tiger. All rights reserved.
//

#include <stdio.h>
#include "ZWList.h"

void test(void){
    
    int a[] = {1, 2, 3, 4, 5};
    int i = 0;
    a[i]++;
    a[i]++;
    printf("%d %d\n", i, a[5]);
    a[i++];
    printf("%d %d\n", i, a[i]);
    
}


int main(int argc, const char * argv[]) {
    
    test();
    return 0;
}



