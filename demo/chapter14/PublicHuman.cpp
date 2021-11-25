//
// Created by admin on 2021/11/24.
//

#include "PublicHuman.h"

PublicHuman::PublicHuman(int age) : Human(age) {
    this->protectedVar = 50;
    this->pubVar = 60;
}
