#include <iostream>
#include "Sort.h"

void Sort::bubbleSort(IComparable** target , int length) {
	for (int i = 0; i < length - 1; i++) { // ã‚©‚çŠm’è‚µ‚Ä‚¢‚­
		for (int j = length - 1; j >= i + 1; j--) { // ‰º‚©‚ç‡‚ÉŠm’è‚µ‚Ä‚È‚¢‚Æ‚±‚Ü‚Å‚Ô‚­‚Ô‚­
			if (target[j]->compare(*target[j - 1]) < 0) {
				std::swap(target[j], target[j - 1]);
			}
		}
	}
}