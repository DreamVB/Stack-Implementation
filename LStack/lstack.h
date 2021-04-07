//A simple stack class for ints using a linked list
#include <iostream>
using namespace std;

class LStack{
public:
	int data;
	LStack *node = nullptr;

	LStack* addNew(int data){
		//Create new node
		LStack* new_node = new LStack();
		//Assign data to the node data
		new_node->data = data;
		//Set next node to NULL
		new_node->node = NULL;
		//return node
		return new_node;
	}

	bool isEmpty(LStack *stk){
		//Check if stack is empty
		return !stk;
	}

	void push(LStack **stk, int data){
		//Create new node
		LStack* new_node = new LStack();
		//Set new node to stk
		new_node->node = *stk;
		//Set new node data
		new_node->data = data;
		//Set stk to new_node
		*stk = new_node;
	}

	int pop(LStack** stk){
		int pop_data = 0;
		//Check if stack is empty
		if (isEmpty(*stk)){
			return -1;
		}
		//Create temp stack
		LStack* tmp = *stk;
		*stk = (*stk)->node;
		//Pop of the data rom the stack
		pop_data = tmp->data;
		//Free temp stack
		free(tmp);
		//Return poped data
		return pop_data;
	}

	int peek(LStack* stk){
		//Check if stack is empty
		if (isEmpty(stk)){
			return -1;
		}
		else{
			//Get the top item in the stack.
			return stk->data;
		}
	}
};
