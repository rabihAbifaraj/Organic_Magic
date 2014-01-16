/*
 * character.h
 *
 *  Created on: Jan 15, 2014
 *      Author: Mike
 */

#ifndef CHARACTER_H_
#define CHARACTER_H_
#include <stdint.h>
#include "my_debug.h"
#define MAX_LEVEL 99

class Character
{
private:
  int _damage;
  int _cur_health;
  int _max_health;
  uint8_t _level;

public:

  Character();
  Character(int damage, int max_health);

  virtual int
  attack();

  void
  add_health(int buff);

  void
  sub_health(int hit_pts);

  void
  inc_max_health(int amount);

  void
  dec_max_health(int amount);

  int lvl_up();
  int
  getCurHealth() const
  {
    return _cur_health;
  }

  void
  setCurHealth(int curHealth)
  {
    _cur_health = curHealth;
  }

  int
  getDamage() const
  {
    return _damage;
  }

  void
  setDamage(int damage)
  {
    _damage = damage;
  }

  int
  getMaxHealth() const
  {
    return _max_health;
  }

  void
  setMaxHealth(int maxHealth)
  {
    _max_health = maxHealth;
  }

  uint8_t
  getLevel() const
  {
    return _level;
  }

  void
  setLevel(uint8_t level)
  {
    if( level < MAX_LEVEL)
      {
        _level = level;
      }
    else
      {
        CHARACTER_PRINTF("ERR: Invalid set level!\n");
      }
  }
};

#endif /* CHARACTER_H_ */
