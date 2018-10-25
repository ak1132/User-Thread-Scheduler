/*
 * my_mem_manager.h
 *
 *  Created on: Oct 25, 2018
 *      Author: sg1425
 */

#include <stdio.h>
#include <stdlib.h>

#ifndef MY_MEM_MANAGER_H_
#define MY_MEM_MANAGER_H_

#define THREADREQ 1234

#define malloc(x) myallocate(x, __FILE__, __LINE__, THREADREQ)
#define free(x) mydeallocate(x, __FILE__, __LINE__, THREADREQ)

char main_mem[8*1024];

#endif /* MY_MEM_MANAGER_H_ */
