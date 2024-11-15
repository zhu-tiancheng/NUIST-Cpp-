/*
请改正程序中指定位置的错误，使程序的输出结果如下： 
0,2,1
1,4,2
注意：只允许修改注释"ERROR"的下一行，不得改动程序中的其他内容，也不允许增加或删减语句。
源程序清单：
*/
#include <iostream>
using namespace std;
class myClass {
  public:

/**********ERROR**********/
		myClass(int i){ a=i; b++; } //a=i改为:a[i]
		void print()
		{ cout<<a<<','<<b<<endl; }

/**********ERROR**********/
		void showB() //static void showB()
		{ cout<<b<<','; }
  private:
		const int a;
		static int b;
};

/**********ERROR**********/
static int myClass::b=0; //去掉static
int main() {
  myClass::showB(); 
  myClass a1(2); a1.print(); a1.showB();
  myClass a2(4); a2.print();
  return 0;
}
