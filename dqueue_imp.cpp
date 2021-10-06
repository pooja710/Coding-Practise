#include<bits/stdc++.h>
using namespace std;
int size = 10;

void print(int queue[], int size) {
	for(int i = 0; i < size; i++) {
		cout<<queue[i]<<" ";
	}
	cout<<endl;
}

void push_back(int queue[], int& rear, int ele) {
	queue[rear] = ele;
	rear++;

	print(queue,size);
}

void pop_front(int queue[], int& front) {
	queue[front]= 0;
	front++;
	
	print(queue,size);
}

void pop_back(int queue[], int& rear){
	rear--;
	queue[rear] = 0;
	print(queue,size);
}

void push_front(int queue[], int ele, int& front, int& rear) {
	if(front == 0) {
		for(int i = rear; i > front; i--) {
			queue[i] = queue[i-1];
		}
		queue[front] = ele;
		rear++;
	} else {
		front--;
		queue[front] = ele;
	}
	print(queue,size);
}

int main() {
	int queue[11] ={0};
	int size = 10;
	int front = 0, rear = 0;
	int ele;
	push_front(queue,1,front,rear);
	push_front(queue,2,front,rear);
	push_front(queue,3,front,rear);
	push_front(queue,4,front,rear);
	push_front(queue,5,front,rear);
	push_front(queue,6,front,rear);
	pop_back(queue,rear);
	pop_front(queue,front);
	push_back(queue,rear,7);
	push_back(queue,rear,8);
	push_back(queue,rear,9);



	return 0;
}