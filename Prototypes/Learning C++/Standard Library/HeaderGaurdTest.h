#ifndef HEADER_GUARD_H
#define HEADER_GUARD_H 1
// Header guards prevent a file from being included more than once in any given compilation
// ifndef - if not defined then do whatever lies before the matching endif

#include <iostream>

// any functions implemented in a header file must be inline to
// prevent duplicates in the binary
inline void do_something() {
	std::cout << "Fuck" << '\n';
	return;
}

// Logic goes here
#endif // HEADER_GUARD_H
