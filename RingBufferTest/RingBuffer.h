#pragma once

template<typename T, unsigned int size>
class RingBuffer
{
private:
	T data[size];
	unsigned int wp;
	unsigned int rp;
	bool isFull;
	bool isEmpty;

public:
	RingBuffer();
	int enqueue(T);
	int dequeue(T*);
};

template<typename T, unsigned int size>
RingBuffer<T, size>::RingBuffer() : wp(0), rp(0), isFull(false), isEmpty(true)
{

}

template<typename T, unsigned int size>
int RingBuffer<T, size>::enqueue(T indata)
{
	if (this->isFull) {
		// return -1;
		this->rp = (this->rp + 1) % size;
	}

	this->data[this->wp] = indata;

	this->wp = (this->wp + 1) % size;

	if (this->wp == this->rp) {
		this->isFull = true;
	}
	this->isEmpty = false;

	return 0;
}

template<typename T, unsigned int size>
int RingBuffer<T, size>::dequeue(T* outdata)
{
	if (this->isEmpty) {
		return -1;
	}

	*outdata = this->data[this->rp];

	this->rp = (this->rp + 1) % size;

	if (this->rp == this->wp) {
		this->isEmpty = true;
	}
	this->isFull = false;

	return 0;
}
