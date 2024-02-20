#include <iostream>
#include "logic.h"

uint64_t Logic::GLOBAL_SCORES = 0;
	
int Logic::CounterOfMultScores = 1;
int Logic::CounterOfPlusScores = 1;

int Logic::GLOBAL_COST_FAB = 10000;
int Logic::GLOBAL_COST_KOT = 100;

int Logic::FabCost = 500;
int Logic::KotCost = 20;

int Logic::counterOfFab = 0;
int Logic::counterOfKot = 0;

void Logic::plusGlobalScores() {
	Logic::GLOBAL_SCORES += (Logic::CounterOfPlusScores * Logic::CounterOfMultScores);
}

void Logic::buyFab() {
	if (Logic::FabCost > Logic::GLOBAL_SCORES) {
		return;
	}
	else {
		Logic::GLOBAL_SCORES -= Logic::FabCost;
		Logic::FabCost += Logic::GLOBAL_COST_FAB;
		Logic::GLOBAL_COST_FAB *= 2;
		Logic::CounterOfMultScores += 1;
		Logic::counterOfFab += 1;
	}
}

void Logic::buyKot() {
	if (Logic::KotCost > Logic::GLOBAL_SCORES) {
		return;
	}
	else {
		Logic::GLOBAL_SCORES -= Logic::KotCost;
		Logic::KotCost += Logic::GLOBAL_COST_KOT;
		Logic::GLOBAL_COST_KOT += 10;
		Logic::CounterOfPlusScores += 1;
		Logic::counterOfKot += 1;
	}
}


