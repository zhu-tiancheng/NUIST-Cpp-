/*
请将如下程序补充完整，使得程序运行时的输出结果为：
默认构造：6
构造：2
复制：2
调用fun函数
析构
析构
析构
注意：只允许修改注释“ERROR”的下一行，不得改动程序中的其他内容，也不允许增加或删减语句。
源程序清单：
*/
#include <iostream>
using namespace std;
class MyClass {
	public:

/**********ERROR**********/
		void MyClass() //改为Myclass()
		{ cout<<"默认构造："<<number<<endl; }
		MyClass(int n) {
			number=n;
			cout<<"构造："<<number<<endl; 
		}  

/**********ERROR**********/
		MyClass(const MyClass other) { //在other前面加&
			number=other.number;
			cout<<"复制："<<number<<endl;
		}

/**********ERROR**********/
		MyClass() //加~
		{ cout<<"析构"<<endl; }
	private:
		int number=6;
};

/**********ERROR**********/
void fun(MyClass p) { //在p前面加&
	MyClass temp(p);
	cout<<"调用fun函数"<<endl;
}
int main() {
	MyClass a, b(2);
	fun(b);
	return 0;
}