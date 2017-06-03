#include <iostream>
#include "Sort.h"

void Sort::bubbleSort(IComparable** target , int length) {
	for (int i = 0; i < length - 1; i++) { // �ォ��m�肵�Ă���
		for (int j = length - 1; j >= i + 1; j--) { // �����珇�Ɋm�肵�ĂȂ��Ƃ��܂łԂ��Ԃ�
			if (target[j]->compare(*target[j - 1]) < 0) {
				std::swap(target[j], target[j - 1]);
			}
		}
	}
}