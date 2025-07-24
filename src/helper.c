#include "windows.h"

//  Credit: https://github.com/am0nsec/HellsGate/blob/master/HellsGate/main.c
//Custom memcpy, probably not needed but cool imo 

PVOID VxMoveMemory(PVOID dest, const PVOID src, SIZE_T len) {
	char* d = dest;
	const char* s = src;
	if (d < s)
		while (len--)
			*d++ = *s++;
	else {
		const char* lasts = s + (len - 1);
		char* lastd = d + (len - 1);
		while (len--)
			*lastd-- = *lasts--;
	}
	return dest;
}