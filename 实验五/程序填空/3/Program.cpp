/*
请将如下程序补充完整，使得程序运行时的输出结果为：
The computer id is 101
The type of monitor is B

注意：仅允许在指定的下划线处填写代码，不得改动程序中的其他内容（需删除下划线编号）。
试题源程序：
*/
#include<iostream>
using namespace std;
class Monitor {
	public:
		Monitor(char t) { type=t; }
		void display() const {
			cout<<"The type of monitor is "<<type<<endl;
		}
	private:
		char type;
};
class Computer {
	public:

/**********FILL**********/
		Computer(int i, char c):      [1]      { id=i; } //mon(c)
		void Display() const { 
			cout<<"The computer id is "<<id<<endl;

/**********FILL**********/
			     [2]     ;  //mon.display()
		}
	private:
		int id;
		Monitor mon;
};
int main() {
	const Computer myComputer(101, 'B');

/**********FILL**********/
	     [3]     ;  //myComputer.Display()
	return 0;
}

