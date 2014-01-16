/*
 * main.cpp
 *
 *  Created on: Jan 15, 2014
 *      Author: Mike
 */
#include <iostream>
#include "player.h"
#include "magic.h"
int main(void)
{
	std::cout<<"This is a test\n";

	Player player;

	std::cout<<player.attack()<<std::endl;

	return 0;
}

