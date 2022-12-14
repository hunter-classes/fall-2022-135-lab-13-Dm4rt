#include <iostream>
#include <string>
#include "funcs.h"

bool isAlpha(char c){
	if(c>=48&&c<=57){
		return true;
	}
	else if(c>=65&&c<=90){
		return true;
	}
	else if(c>=97&&c<=122){
		return true;
	}
	return false;
}
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

bool isAlphanumeric(std::string s){
	if(isAlpha(s[0])){
		return isAlphanumeric(s.substr(1,s.length()-1));
	}
	else if(s.length()==0){
		return true;
	}
	else{
		return false;
	}
	
	return false;
}