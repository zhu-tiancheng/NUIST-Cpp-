/*
sum函数的功能是求1~n的累加和（即求1+2+3+...+n）。
请将如下程序补充完整。
注意：仅允许在指定的下划线处填写代码，不得改动程序中的其他内容。
试题源程序如下：
*/
#include<iostream>
using namespace std;
long long sum(int n) {

/**********FILL**********/
	if(     [1]     ) return 1; //n<2 

/**********FILL**********/
	else return      [2]     ; //n+sum(n-1)
}
int main() {
	int n;
	cin>>n;

/**********FILL**********/
	cout<<     [3]     <<endl; //sum(n)
	return 0;
}
