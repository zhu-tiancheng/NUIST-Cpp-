/*
�����������ָ��λ�õĴ���ʹ��������������£� 
0,2,1
1,4,2
ע�⣺ֻ�����޸�ע��"ERROR"����һ�У����øĶ������е��������ݣ�Ҳ���������ӻ�ɾ����䡣
Դ�����嵥��
*/
#include <iostream>
using namespace std;
class myClass {
  public:

/**********ERROR**********/
		myClass(int i){ a=i; b++; } //a=i��Ϊ:a[i]
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
static int myClass::b=0; //ȥ��static
int main() {
  myClass::showB(); 
  myClass a1(2); a1.print(); a1.showB();
  myClass a2(4); a2.print();
  return 0;
}
