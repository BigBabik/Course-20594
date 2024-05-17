//Name:  ID: 
// This code runs when ps is typed in xv6, it calls the cps136() command defined in the user mode
#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
main(int argc, char *argv[]) {
	cps136();
	exit(0);
}

