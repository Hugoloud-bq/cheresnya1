#include <iostream>
#include "array.h"
void print_array(int *arr, int size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";	
	}
	std::cout << std::endl;
	
}

int main(){
	const int size{5};
	int massive[size]{5,1,2,6,1};
	
	int i_min{}, i_max{};
	
	std :: cout << "i_min: " << i_min << "\ti_max: " << i_max << '\n';
	
	
	int _sum{};
	int begin{}, int end{};
	std :: cout << "sum: " << sum << '\n';
	
	return 0;
}