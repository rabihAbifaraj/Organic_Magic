/*
 * character.cpp
 *
 *  Created on: Jan 15, 2014
 *      Author: Mike
 */
#include "character.h"

#define DEFAULT_MAX_HEALTH 10
#define DEFAULT_DAMAGE 1


Character::Character() {
	_max_health = DEFAULT_MAX_HEALTH;
	_cur_health = _max_health;
	_damage		= DEFAULT_DAMAGE;
}

Character::Character(int damage, int max_health) {
	_max_health = max_health;
	_cur_health = _max_health;
	_damage		= damage;

}

void Character::add_health(int buff) {

	int temp = _cur_health + buff;
	if (temp > _max_health)
	{
		_cur_health = _max_health;
	}
	else
	{
		_cur_health = temp;
	}
}

void Character::sub_health(int hit_pts) {
	int temp = _cur_health - hit_pts;
	if (temp > _max_health)
	{
		_cur_health = _max_health;
	}
	else
	{
		_cur_health = temp;
	}

}

void Character::inc_max_health(int amount) {
	_max_health += amount;
}

int Character::attack() {
	CHARACTER_PRINTF("I do not have an attack!\n");
	return -1;
}

void Character::dec_max_health(int amount) {
	_max_health -= amount;
}

int
Character::lvl_up()
{
  if (_level == MAX_LEVEL)
    {
      CHARACTER_PRINTF("INFO: Character already at Max level\n");
      return -1;
    }
  else
    {
      _level += 1;
      return 0;
    }
}
