/* fancy_input.cpp */

#include "fancy_input.h"

void FancyInput::poke() {
	count ++;
}

int FancyInput::get_count() const {
	return count;
}

void FancyInput::_bind_methods() {
	ClassDB::bind_method(D_METHOD("poke"), &FancyInput::poke);
	ClassDB::bind_method(D_METHOD("get_count"), &FancyInput::get_count);
}

FancyInput::FancyInput() {
	count = 0;
}