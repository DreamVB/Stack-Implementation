#include <iostream>
#include "lstack.h"
using namespace std;

int main(){

	LStack* stack = NULL;
	int x = 100;

	std::cout << "Push from 100 to 800 on the stack." << std::endl;

	while (x <= 800){
		stack->push(&stack, x);
		std::cout << x << std::endl;
		x += 100;
	}
	std::cout << std::endl;
	std::cout << "Pop the pushed items off the stack." << std::endl << std::endl;
	
	while (!stack->isEmpty(stack)){
		std::cout << stack->pop(&stack) << std::endl;
	}

	system("pause");
	return 0;
}