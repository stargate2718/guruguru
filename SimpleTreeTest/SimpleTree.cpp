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
		// �@
		this->child->prev = node;
		node->next = this->child;
	}
	// �A
	this->child = node;
	node->parent = this;

	return 0;
}

void Node::printTree()
{
	for (Node* csrBrother = this; csrBrother; csrBrother = csrBrother->next)
	{
		for (Node* csrAncestor = csrBrother->parent; csrAncestor; csrAncestor = csrAncestor->parent) // ��ԑc�悩�玩���̑�܂ł̐��̃X�y�[�X������
		{
			std::cout << " ";
		}
		std::cout << csrBrother->name << std::endl; // �����̖��O�������@�@�@-> �� (* ).�Ɠ���
		if (csrBrother->child)
		{
			csrBrother->child->printTree(); // �����Ɏq����������q���̉ƌn�}������
		}
	}
}
