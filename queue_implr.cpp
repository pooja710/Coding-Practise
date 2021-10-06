#include<bits/stdc++.h>
using namespace std;

void print(int &front, int &rear, int que[]) {
	for(int i = front; i <= rear; i++) {
		cout<<que[i]<< " ";
	}
	cout<<endl;
}

bool isEmpty(int &front, int &rear) {
	if(front == rear)
		return true;
	else
		return false;
}
void push_back(int que[], int& rear, int& front, int element) {
	que[rear] = element;
	rear++;

	print(front,rear,que);
}

void pop_front(int &front, int &rear, int que[]) {
	if(!isEmpty(front,rear)) {
		que[front] = 0;
		front ++;
	}
	print(front,rear,que);
}


int main() {
	int que[11] = {0};
	
	int front = 0, rear = 0;
	int element;
	push_back(que,rear,front, 1);
	push_back(que,rear,front, 12);
	push_back(que,rear,front, 13);
	push_back(que,rear,front, 14);
	push_back(que,rear,front, 15);
	pop_front(front,rear,que);
	


	return 0;
}