/*
 * player.cpp
 *
 *  Created on: Jan 15, 2014
 *      Author: Mike
 */
#include "player.h"
#include "my_debug.h"

int
Player::attack()
{
  PLAYER_PRINTF("I am a cool player attack!\n");
  return getDamage();
}




