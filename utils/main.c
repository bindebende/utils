//
//  main.c
//  utils
//
//  Created by Bindebende on 2017. 08. 20..
//  Copyright © 2017. Bendegúz Hoffmann. All rights reserved.
//

#include <stdio.h>

#include "param_check.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    uint32_t par1 = 2, par2 = 4, par3 = 8, par4 = 16;
    
    
    param_check((uint32_t[]){par1,par2,par3,par4,0});
    
    
    
    
    return 0;
}
