#include <iostream>
#include "RingBuffer.h"

int main(int argc, char* argv[])
{
	RingBuffer<std::string, 5> rb;
	std::string str;

	rb.enqueue("taro");
	rb.enqueue("jiro");
	rb.enqueue("hanako");
	rb.enqueue("saburo");
	rb.dequeue(&str);
	rb.enqueue("hikaru");
	rb.enqueue("tsubasa");
	rb.dequeue(&str);
	rb.enqueue("makoto");
	rb.enqueue("natsumi");

	while (rb.dequeue(&str) == 0) {
		std::cout << str.c_str() << std::endl;
	}

	std::cin.sync(), std::cin.get();
	return 0;
}