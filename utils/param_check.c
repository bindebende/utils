//
//  param_check.c
//  utils
//
//  Created by Bindebende on 2017. 08. 20..
//  Copyright © 2017. Bendegúz Hoffmann. All rights reserved.
//

#include "param_check.h"


uint32_t param_check(uint32_t* values)
{
    uint32_t x;
    while(*values)
    {
        x = *values++;
        printf("param value: %d\n", x);
    }

    return 0;
}
