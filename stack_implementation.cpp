#include<bits/stdc++.h>
using namespace std;

bool isFull(int size, int &top) {
	if(top == size)
		return true;
	else
		return false;
}

bool isEmpty(int& top) {
	if(top == -1)
		return true;
	else
		return false;
}

void print(int stack[], int size) {
	for(int i = 0; i < size; i++) {
		cout<<stack[i]<< " ";
	}
	cout<<endl;
}

void push(int stack[], int &top, int element, int size) {
	if(!isFull(size,top)) {
		top = top + 1;
		stack[top] = element;
	}
	print(stack,size);
}

void pop(int &top, int size, int stack[]) {
	if(!isEmpty(top)) {
		top = top-1;
	}
	print(stack,size);
}

int top_element(int stack[], int &top) {
	return stack[top];
}

int main() {
	 int stack[11] = {0};
	 int size = 10;
	 int element;
	 int top = -1;
	 push(stack,top,1,10);
	 push(stack,top,2,10);
	 push(stack,top,3,10);
	 push(stack,top,4,10);
	 push(stack,top,5,10);
	 push(stack,top,6,10);

	return 0;
}