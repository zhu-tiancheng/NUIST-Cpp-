/*
�뽫���³��򲹳�������ʹ�ó�������ʱ��������Ϊ��
x=0, y=1
x=1, y=3
x=3; y=7

ע�⣺��������ָ�����»��ߴ���д���ݣ���ɾ���»��߱�ţ����������ӻ�ɾ����䣬Ҳ���øĶ������е��������֡�
����Դ����
*/
#include <iostream>  
using namespace std;  
class Test {

/**********FILL**********/
		const int       [1]      ; //x=0

/**********FILL**********/
		      [2]      ; //static int y;
	public: 
		Test() { y+=1; }
		Test(int i,int j):x(i) { y+=j; } 
		void display() const;  

/**********FILL**********/
		      [3]       { cout<<"x="<<x<<", y="<<y<<endl; } //void display()
}; 
int Test::y=0;  

/**********FILL**********/
      [4]       { //void Test::display() const
	cout<<"x="<<x<<"; y="<<y<<endl;
} 
int main() {  
	Test t1; t1.display(); 
	Test t2(1,2); t2.display();
	const Test t3(3,4);  
	t3.display(); 
	return 0; 
}