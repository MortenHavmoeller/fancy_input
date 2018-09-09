/* register_types.cpp */

#include "register_types.h"
#include "class_db.h"
#include "fancy_input.h"

void register_fancy_input_types() {
	ClassDB::register_class<FancyInput>();
}

void unregister_fancy_input_types() {
	// nothing to do
}