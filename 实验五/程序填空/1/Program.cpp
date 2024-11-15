/*
请将如下程序补充完整，使得该程序运行时输出如下结果：
10
11
12
注意：仅允许在指定的下划线处填写代码，不得改动程序中的其他内容（需删除下划线编号）。
试题源程序如下：
*/
#include <iostream>
using namespace std;
class myClass {
		static int a;  
	public:
		myClass() { a++; }
		~myClass() { a--; }

/**********FILL**********/
		      [1]     { //static int getA()
			return a;    
		}
};

/**********FILL**********/
     [2]     =10; //int myClass::a
int main() {

/**********FILL**********/
	cout<<     [3]     <<endl; //myClass::getA()
	myClass a;
	cout<<a.getA()<<endl;
	myClass b;
	cout<<b.getA()<<endl;
	return 0;
}
