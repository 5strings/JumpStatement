//
//  main.c
//  JumpStatement
//
//  Created by Eun Jae Lee on 20/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//
//  Break & contine

#include <stdio.h>

int main() {

    int i;
    
    for (i=0; i<=10; i++) {
        if (i == 5) {
          //  break; terminate
            continue; // jump
        } if (i == 9) {
            break;
        }
        printf("%d \n",i);
    }
    
    getchar();
   // return 0;
}
