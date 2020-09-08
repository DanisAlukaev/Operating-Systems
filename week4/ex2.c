﻿#include <stdio.h>
#include <stdlib.h>

//After three forks running processes tree will be defined as follows:
//├─bash(8110)───sh(8167)───ex2(8175)─┬─ex2(8176)─┬─ex2(8180)─┬─ex2(8182)───sh(8193)───pstree(8198)
//│                                   │           │           └─sh(8192)───pstree(8197)
//│                                   │           ├─ex2(8181)───sh(8191)───pstree(8200)
//│                                   │           └─sh(8189)───pstree(8195)
//│                                   ├─ex2(8177)─┬─ex2(8179)───sh(8190)───pstree(8196)
//│                                   │           └─sh(8188)───pstree(8201)
//│                                   ├─ex2(8178)───sh(8187)───pstree(8194)
//│                                   └─sh(8186)───pstree(8199)
//So, 2^3=8 processes will be created.
//
//After five forks 2^5=32 processes will be created.

int main()
{
    for(int i=0; i<3; i++){
        fork();
        sleep(5);
    }
    system("pstree -p");
    return 0;
}