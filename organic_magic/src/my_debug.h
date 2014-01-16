/*
 * my_debug.h
 *
 *  Created on: Jan 15, 2014
 *      Author: Mike
 */

#ifndef MY_DEBUG_H_
#define MY_DEBUG_H_


#define DEBUG_CHARACTER 1
#define DEBUG_PLAYER 1
#define DEBUG_MAGIC 1


#if DEBUG_CHARACTER
#include <stdio.h>
#define CHARACTER_PRINTF(...) printf(__VA_ARGS__)
#else
#define CHARACTER_PRINTF(...) /* DUMMY */
#endif

#if DEBUG_PLAYER
#include <stdio.h>
#define PLAYER_PRINTF(...) printf(__VA_ARGS__)
#else
#define PLAYER_PRINTF(...) /* DUMMY */
#endif

#if DEBUG_MAGIC
#include <stdio.h>
#define MAGIC_PRINTF(...) printf(__VA_ARGS__)
#else
#define MAGIC_PRINTF(...) /* DUMMY */
#endif


#endif /* MY_DEBUG_H_ */
