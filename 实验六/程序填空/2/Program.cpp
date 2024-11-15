/*
如下程序通过定义Boat和Car两个类的一个友元函数totalWeight，计算二者的重量之和。
请将如下程序补充完整，使得程序运行时的输出结果为：
900
注意：仅允许在指定的下划线处填写代码，不得改动程序中的其他内容（需删除下划线编号）。
试题源程序如下：
*/
#include <iostream>
using namespace std;

/**********FILL**********/
     [1]     ; //class Boat
class Car {
	public:
		Car(int j) { weight=j; }
		friend int totalWeight(Car &,Boat &);  
	private:
		int weight;
};
class Boat {
	public:
		Boat(int j) { weight=j; }
		friend int totalWeight(Car &,Boat &); 
	private:
		int weight;
};

/**********FILL**********/
     [2]      { //int totalWeight(Car &c,Boat &b)
	return c.weight+b.weight;
}
int main() {
	Car c1(400);
	Boat b1(500);

/**********FILL**********/
	cout<<     [3]     <<endl; //totalWeight(c1,b1)
	return 0;
}