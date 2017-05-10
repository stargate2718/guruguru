#include <iostream>
#include "SimpleTree.h"

Node::Node(std::string name) : name(name), parent(nullptr), child(nullptr), prev(nullptr), next(nullptr)
{
	// this->name = name;
	// this->parent = nullptr;
	//this->child = nullptr;
	//this->prev = nullptr;
	//this->next = nullptr;
}

int Node::AppendChild(Node* node)
{
	if (this->child)
	{
		// ①
		this->child->prev = node;
		node->next = this->child;
	}
	// ②
	this->child = node;
	node->parent = this;

	return 0;
}

void Node::printTree()
{
	for (Node* csrBrother = this; csrBrother; csrBrother = csrBrother->next)
	{
		for (Node* csrAncestor = csrBrother->parent; csrAncestor; csrAncestor = csrAncestor->parent) // 一番祖先から自分の代までの数のスペースを入れる
		{
			std::cout << " ";
		}
		std::cout << csrBrother->name << std::endl; // 自分の名前を書く　　　-> は (* ).と同じ
		if (csrBrother->child)
		{
			csrBrother->child->printTree(); // 自分に子供がいたら子供の家系図を書く
		}
	}
}
