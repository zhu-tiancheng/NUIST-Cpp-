/*
请将如下程序补充完整，使得程序运行时的输出结果为：
构造：2
复制：2
复制：2
析构
析构
析构

注意：仅允许在指定的下划线处填写内容，并删除下划线编号，不允许增加或删除语句，也不得改动程序中的其他部分。
试题源程序如下：
*/
#include <iostream>
using namespace std;
class MyClass {
	public:

/**********FILL**********/
		     [1]      { //MyClass(int n)
			number=n;  
			cout<<"构造："<<number<<endl; 
		}  

/**********FILL**********/
		MyClass(      [2]      ) { //MyClass &other
			number=other.number;
			cout<<"复制："<<number<<endl;
		}

/**********FILL**********/
		     [3]      { cout<<"析构"<<endl; } //~MyClass()
	private:
		int number;
};

/**********FILL**********/
void fun(      [4]      ) { //MyClass p
	MyClass temp(p);
	return;
}
int main() {
	MyClass a(2);  
	fun(a);  
	return 0;
}