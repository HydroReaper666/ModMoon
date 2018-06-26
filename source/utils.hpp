#pragma once
#include <unistd.h>
#include <sys/stat.h>
#include <string>
using namespace std;

//When title is not provided this simply checks the current tid.
int maxslotcheck(u64 optionaltid = 1, int optionalslot = -1);
void launch();
void threadfunc_fade(void* main);
int countEntriesInDir(const char* dirname);

//Extremely common logic used in rendering code, but it doesn't feel right to be in sDraw
void highlighterhandle(int& alphapos, bool& alphaplus);

inline bool pathExist(const string filename) {
	struct stat buffer;
	return (stat(filename.c_str(), &buffer) == 0);
}

extern Handle event_fadefinished;