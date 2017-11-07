#include<iostream>
using namespace standard;

// void print(const int n){
// 	cout << n;
// }
void print2(const long & x){ // Pass - by - reference avoids overhead
	//of copying large number
	cour << x;
}

int main(){
	long x = 2345214213151
	print2(x);
	return 0;

}