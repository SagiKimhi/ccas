#ifndef COMMON_H
#define COMMON_H

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stddef.h>


#ifndef CCAS_ASSERT
#   include <assert.h>
#   define CCAS_ASSERT assert
#endif /* CCAS_ASSERT */


#ifndef CCAS_ALLOC
#   include <stdlib.h>
#   define CCAS_ALLOC malloc
#endif /* CCAS_ALLOC */

#ifndef CCAS_REALLOC
#   define CCAS_REALLOC realloc
#endif /* CCAS_REALLOC */

#ifndef CCAS_CALLOC
#   define CCAS_CALLOC calloc
#endif /* CCAS_CALLOC */

#endif /*COMMON_H */
