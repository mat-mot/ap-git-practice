#include <bits/stdc++.h>
using namespace std;

class node{
	private:
		int data;
		node* next;
		node* prev;
	public:
		//add getter and setter functions here
		/*

			here

		*/
};
class Circular_linked_list{
	private:
		int size;
		node* current;
	public:
		Circular_linked_list();
		~Circular_linked_list();
		//add getter and setter functions here
		/*
		
			here

		*/
		void push();
		void pop();
		void pop(int data);
		void push_after(int new_data,int pa_data);
		void push_befor(int new_data,int pb_data);
		void print();


}



int main(){



}
