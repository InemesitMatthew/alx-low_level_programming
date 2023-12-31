#ifndef _3_CALC_H
#define _3_CALC_H

#include <stdlib.h>  /* Include for exit() function */
#include <stdio.h>   /* Include for printf() function */

/**
 * struct op - Struct op
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
#endif /* _3_CALC_H */
