#include "../lib/um.h"

#include <assert.h>

void math(void) {
	um_Result r0 = um_interpret_string("1");
	assert(!isnil(r0.data));
	assert(r0.data.type == i32_t);
	assert(r0.data.value.integer == 1);
}

int main(void) {
	um_init();
	math();
	return 0;
}
