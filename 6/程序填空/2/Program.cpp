/*
���³���ͨ������Boat��Car�������һ����Ԫ����totalWeight��������ߵ�����֮�͡�
�뽫���³��򲹳�������ʹ�ó�������ʱ��������Ϊ��
900
ע�⣺��������ָ�����»��ߴ���д���룬���øĶ������е��������ݣ���ɾ���»��߱�ţ���
����Դ�������£�
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