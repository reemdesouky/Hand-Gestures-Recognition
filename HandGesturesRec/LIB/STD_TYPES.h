/*
 * STD_TYPES.H
 *
 *  Created on: Aug 2, 2025
 *      Author: Reem
 */

#ifndef LIB_STD_TYPES_H_
#define LIB_STD_TYPES_H_

//Char
typedef unsigned char u8;
typedef signed char s8;

//Integer
typedef unsigned short int u16;
typedef unsigned int u32;
typedef unsigned long long int u64;

typedef signed short int s16;
typedef signed int s32;

//Float
typedef float f32;
typedef double f64;

//NULL
#ifndef NULL
#define NULL    ((void*)0)
#endif


#endif /* LIB_STD_TYPES_H_ */
