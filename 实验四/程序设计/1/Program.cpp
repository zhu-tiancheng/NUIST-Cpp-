/*
�����Σ�Square�����Ա���£� 
��1�����г�Ա��
Square(float xx, float yy, float len) // ���캯��������(xx,yy)Ϊ���½�λ�ã�lenΪ�߳�
void resetSquare(float newX, float newY, float newLen)  // �������������½����꣬�Լ��߳�newLen
float getLen()  // ���������εı߳�
double getArea() // ���㲢���������ε����
bool isEqual(Square &s)  // �ж�����һ���������Ƿ��С���
��2��˽�г�Ա��
float x, y   // ���������½ǵĺ����ꡢ������
float length  // �����εı߳�
���������˵�������Square��Ķ��塣

ע�⣺����Դ�����������������ע�͡�Begin���͡�End��֮����д���ݣ����øĶ�main�������������е��κ����ݡ�
�������
*/
#include<iostream>
#include<fstream>
using namespace std;

/*******Begin*******/
class Square {
	public:
		Square(float xx,float yy,float len) {
			x=xx,y=yy,length=len;
		}
		void resetSquare(float newX,float newY,float newLen) {
			x=newX,y=newY;  
			length=newLen;
		}
		float getLen(){
			return length;
		}
		double getArea() {
			return length*length; 
		}
		bool isEqual(Square &s){
			if(length==s.length) return true;
			else return false;	
		}		
	private:
		float x,y,length;
};





/*******End*********/

int main() {
	float x,y,len;
	cin>>x>>y>>len;
	Square s1(x,y,len),s2(s1);
	cout<<"s1 �߳�: "<<s1.getLen()<<", ���: "<<s1.getArea()<<endl;
	cout<<"s2 �߳�: "<<s2.getLen()<<", ���: "<<s2.getArea()<<endl;
	cout<<"�Ƿ����: "<<s2.isEqual(s1)<<endl;
	cin>>x>>y>>len;
	s2.resetSquare(x,y,len);
	cout<<"s1 �߳�: "<<s1.getLen()<<", ���: "<<s1.getArea()<<endl;
	cout<<"s2 �߳�: "<<s2.getLen()<<", ���: "<<s2.getArea()<<endl;
	cout<<"�Ƿ����: "<<s2.isEqual(s1)<<endl;
	
	ifstream in1("4.1.1.4_1-2_in.dat");
	ofstream out1("4.1.1.4_1-2_out.dat");
	while(in1>>x>>y>>len)
	{
		Square s1(x,y,len),s2(s1);
		out1<<"s1 �߳�: "<<s1.getLen()<<", ���: "<<s1.getArea()<<endl;
		out1<<"s2 �߳�: "<<s2.getLen()<<", ���: "<<s2.getArea()<<endl;
		out1<<"�Ƿ����: "<<s2.isEqual(s1)<<endl;
		in1>>x>>y>>len;
		s2.resetSquare(x,y,len);
		out1<<"s1 �߳�: "<<s1.getLen()<<", ���: "<<s1.getArea()<<endl;
		out1<<"s2 �߳�: "<<s2.getLen()<<", ���: "<<s2.getArea()<<endl;
		out1<<"�Ƿ����: "<<s2.isEqual(s1)<<endl<<endl;
	}
	in1.close();
	out1.close();
	return 0;
}