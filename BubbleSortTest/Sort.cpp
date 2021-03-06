#include <iostream>
#include "Sort.h"

void Sort::bubbleSort(IComparable** target , int length) {
	for (int i = 0; i < length - 1; i++) { // 上から確定していく
		for (int j = length - 1; j >= i + 1; j--) { // 下から順に確定してないとこまでぶくぶく
			if (target[j]->compare(*target[j - 1]) < 0) {
				std::swap(target[j], target[j - 1]);
			}
		}
	}
}