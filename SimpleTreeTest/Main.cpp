#include <iostream>
#include "SimpleTree.h"

int main(int argc, char* argv[])
{
	/*
	std::cout << argc << std::endl;
	for (int i = 0; i < argc; i++)
	{
		std::cout << argv[i] << std::endl;
	}
	*/
	/*
	if (argc < 2)
	{
		return -1; // ˆÙíI—¹
	}
	*/

	Node* n1 = new Node("taro");
	Node* n2 = new Node("hanako");
	Node* n3 = new Node("atsushi");
	Node* n4 = new Node("miho");
	Node* n5 = new Node("hikaru");

	n1->AppendChild(n2);
	n1->AppendChild(n3);
	n3->AppendChild(n4);
	n2->AppendChild(n5);

	n2->printTree();

	std::cin.sync(), std::cin.get(); // ˆê’â~II
	return 0;
}