#pragma once // インクルードガード⇒多重定義防止
/*
// C言語だと
#ifndef _SIMPLETREE_H_
#define _SIMPLETREE_H_
// ここにソースコードを書く
#endif
*/

#include <string>

class Node
{
private: // 同じオブジェクト内からでしか触れない
	std::string name;
	Node* parent;
	Node* child;
	Node* prev;
	Node* next;
public: // 別のオブジェクトからも触れる
	Node(std::string); // コンストラクタ　クラス（設計図みたいなもの）からオブジェクト＝インスタンス（実体）が作られるときに呼ばれる
	int AppendChild(Node*);
	void printTree();
};