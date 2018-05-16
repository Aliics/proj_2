#ifndef MAIN_DECLARATION // DON'T WANT ANY WONKY-NESS NOW DO WE
#define MAIN_DECLARATION

void arghndlr(int size, char* args[]) {
	printf("%s:\t%d\n", "Arguments passed", size - 1);
	
	for (int arg = 0; arg < size; arg++) {
		char* precursor = arg == 0 ? "Launched program" : "Argument passed";

		printf("%s:\t%s\n", precursor, args[arg]);
	}
}

#endif