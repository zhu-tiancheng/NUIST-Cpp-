/*
�뽫���³��򲹳�������ʹ�øó�������ʱ������½����
10
11
12
ע�⣺��������ָ�����»��ߴ���д���룬���øĶ������е��������ݣ���ɾ���»��߱�ţ���
����Դ�������£�
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
