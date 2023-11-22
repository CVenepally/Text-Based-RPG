#pragma once
#include "Person.h"

// Enemy
class Enemy : public Person
{
public:
	Enemy(int health = 40, int damage = 5, bool isDead = false);
	~Enemy();

	virtual unsigned int DealDamage();
	virtual void ReceiveDamage(Person* opponent);
	virtual void Dead();
};