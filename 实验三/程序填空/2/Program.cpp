/*
函数swap未使用中间变量实现对两个数的交换。
请将如下程序补充完整，使得程序运行时的输出结果为：
a=10, b=5
注意：仅允许在指定的下划线处填写代码，不得改动程序中的其他内容。
试题源程序如下：
*/
#include<iostream>
using namespace std;
void swap(int &x, int &y) {
	x+=y;

/**********FILL**********/
	y=     [1]     ; //x-y 

/**********FILL**********/
	     [2]     ; //x=x-y
}
int main() {
	int a=5,b=10;

/**********FILL**********/
	     [3]     ; //swap(a,b)
	cout<<"a="<<a<<", b="<<b<<endl;
	return 0;
}
