#include<stdio.h>
#include "header.h"

/**
 * @brief mul function which returns the desired result using answer variable
 * 
 * @param n 
 * @param answer 
 * @return error 
 */

error mul(calc_arthmetic n,result* answer)
{
    answer->final_answer=n.num_1*n.num_2;
    return SUCCESS;
}