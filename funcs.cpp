#include <iostream>
#include <string>
#include "funcs.h"


std::string printRange(int left, int right){
	if(left <= right){
		if(left==right){
			return std::to_string(left)+printRange(left+1,right);
		}
		return std::to_string(left)+" "+printRange(left+1,right);
	}
	else{
		return "";
	}
}

int sumRange(int left, int right){
	if(left <= right){
		return left + sumRange(left+1,right);
	}
	else{
		return 0;
	}
}

int sumArray(int *arr, int size){
	if(size==0){
		return 0;
	}
	else{
		return arr[size-1]+sumArray(arr, size-1);
	}
}