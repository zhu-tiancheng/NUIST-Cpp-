/*
�뽫���³��򲹳�������ʹ�ó�������ʱ��������Ϊ��
012

ע�⣺��������ָ�����»��ߴ���д���룬���øĶ������е��������ݣ���ɾ���»��߱�ţ���
�������
*/
#include <iostream>  
using namespace std;  
class myClass{ 

/**********FILL**********/
		      [1]      ; //static int a
	public:  
		myClass() { a++; }  
		~myClass() { a--; }  
		static int getA(); 
};  
int myClass::a=0; 

/**********FILL**********/
      [2]       { return a; } //int myClass::getA()
 
int main() {  

/**********FILL**********/
	cout<<      [3]      ; //myClass::getA()
	myClass d[12];  
	cout<<d[0].getA()<<endl;
	return 0;  
}