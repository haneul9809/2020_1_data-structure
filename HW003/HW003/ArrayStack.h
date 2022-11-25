#pragma once
#include<iostream>
#include<stdio.h>
#include<stdlib.h>

inline void error(char *message) {
	cout << message << endl;//printf("%s\n", message);
	exit(1);
}

const int MAX_STACK_SIZE = 20;

class ArrayStack {
	int top;
	int data[MAX_STACK_SIZE];
public:
	ArrayStack() { top = -1; }
	~ArrayStack() {}
	bool isEmpty() { return top == -1; }
	bool isFull() { return top == MAX_STACK_SIZE - 1; }

	void push(int e) {
		if (isFull()) 
			error ("���� ��ȭ ����");
		data[++top] = e;
	}

	int pop() {
		if (isEmpty() )
			error ("���� ���� ����");
		return data[top--];
	}
	int peek() {
		if (isEmpty()) 
			error("���� ���� ����");
		return data[top];
	}
	void display() {
		cout << "[���� �׸��� �� = " << top + 1 << "] ==> ";//printf("[���� �׸��� �� = %2d] ==> ", top + 1);
		for (int i = 0; i <= top; i++) {
			cout << "<" << data[i] << "> ";//printf("<%2d>", data[i]);
		}
		cout << endl;
	}
};