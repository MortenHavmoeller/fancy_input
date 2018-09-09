/* fancy_input.h */

#ifndef FANCY_INPUT_H
#define FANCY_INPUT_H

#include "object.h"
#include "list.h"
#include "rid.h"
#include "set.h"
#include "variant.h"
#include "os/thread.h"
#include "os/mutex.h"
#include "os/input.h"


#include "reference.h"

class FancyInput : public Object {
	GDCLASS(FancyInput, Object);
	
	static FancyInput *singleton;
	static void thread_func(void *p_udata);
	
private:
	bool thread_exited;
	mutable bool exit_thread;
	Thread *thread;
	Mutex *mutex;
	
public:
	static FancyInput *get_singleton();
	Error init();
	void lock();
	void unlock();
	void finish();
	
protected:
	static void _bind_methods();
	
private:
	// things with RID...
	
public:
	// functions to be called from Godot...
	
};

#endif