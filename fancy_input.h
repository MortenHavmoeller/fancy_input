/* fancy_input.h */

#ifndef FANCY_INPUT_H
#define FANCY_INPUT_H

#include "reference.h"

class FancyInput : public Reference {
	GDCLASS(FancyInput, Reference);
	
	int count;
	
protected:
	static void _bind_methods();
	
public:
	void poke();
	int get_count() const;
	
	FancyInput();
};

#endif