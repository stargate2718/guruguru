#pragma once // �C���N���[�h�K�[�h�ˑ��d��`�h�~
/*
// C���ꂾ��
#ifndef _SIMPLETREE_H_
#define _SIMPLETREE_H_
// �����Ƀ\�[�X�R�[�h������
#endif
*/

#include <string>

class Node
{
private: // �����I�u�W�F�N�g������ł����G��Ȃ�
	std::string name;
	Node* parent;
	Node* child;
	Node* prev;
	Node* next;
public: // �ʂ̃I�u�W�F�N�g������G���
	Node(std::string); // �R���X�g���N�^�@�N���X�i�݌v�}�݂����Ȃ��́j����I�u�W�F�N�g���C���X�^���X�i���́j�������Ƃ��ɌĂ΂��
	int AppendChild(Node*);
	void printTree();
};