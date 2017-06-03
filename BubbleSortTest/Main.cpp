#include <iostream>
#include "Integer.h"
#include "String.h"
#include "Sort.h"

int main(int argc, char* argv[])
{
	Integer *a[] = {
		new Integer(50), new Integer(55), new Integer(69), new Integer(68), new Integer(71), new Integer(67), new Integer(54), new Integer(80), new Integer(72), new Integer(52),
		new Integer(57), new Integer(61), new Integer(77), new Integer(79), new Integer(75), new Integer(66), new Integer(76), new Integer(88), new Integer(74), new Integer(59),
		new Integer(73), new Integer(80), new Integer(58), new Integer(70), new Integer(63), new Integer(89), new Integer(64), new Integer(51), new Integer(81), new Integer(65),
	};
	Sort::bubbleSort((IComparable**)a, 30);
	for (int i = 0; i < 30; i++) {
		std::cout << a[i]->get() << std::endl;
	}

	String *b[] = {
		new String("mandarin"),
		new String("tangerine"),
		new String("cherry"),
		new String("strawberry"),
		new String("apple"),
		new String("kiwi fruit"),
		new String("apricot"),
		new String("pineapple"),
		new String("plum"),
		new String("kumquat"),
		new String("pomegranate"),
		new String("persimmon"),
		new String("Chinese quince"),
		new String("watermelon"),
		new String("melon"),
		new String("grape"),
		new String("peach"),
		new String("banana"),
		new String("loquat"),
		new String("pear"),
	};
	Sort::bubbleSort((IComparable**)b, 20);
	for (int i = 0; i < 20; i++) {
		std::cout << b[i]->get() << std::endl;
	}

	std::cin.sync(), std::cin.get();
	return 0;
}