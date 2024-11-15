/*
�㣨Point�����Ա���£� 
��1�����г�Ա��
Point(float xx, float yy)   // ���캯������ʼ�����x, y����
void moveTo(float newX, float newY)  // �����x, y�����ƶ���newX, newY
��2��˽�г�Ա��
float x, y   // ��ĺ����꣬������
�ڴ˻����ϣ����������Σ�Square���࣬���Ա���£�
��1�����г�Ա��
Square(float x=0.0,float y=0.0,float len=1.0)  // ���캯������ʼ���������ݳ�Ա������(x,y)Ϊ���½�λ�ã�lenΪ�߳�
void resetSquare(float newX, float newY, float newLen) // �������������½�����Ϊ(newX, newY)���߳�ΪnewLen
double getLen() // ���������εı߳�
double getCircumference() // ���������ε��ܳ�
bool isEqual(Square &s) // �ж�����һ���������Ƿ��С���
��2��˽�г�Ա��
Point p   // ���������½�λ��
float length  // �����εı߳�
double circumference  // �����ε�������ܳ�
���������˵�������Point��Square������Ķ��塣

ע�⣺����Դ�����������������ע�͡�Begin���͡�End��֮����д���ݣ����øĶ�main�������������е��κ����ݡ�
�������
*/
#include<iostream>
#include<fstream>
using namespace std;

/*******Begin*******/
class Point { 
	public:
		Point(float xx,float yy): x(xx),y(yy) { } 	
		void moveTo(float newX,float newY) { x=newX,y=newY; } 	
	private:
		float x,y;
}; 

class Square {
	public:
		Square(float x=0.0,float y=0.0,float len=1.0):p(x,y) {
			length=len;
			circumference=4*length; 
		}
		void resetSquare(float newX,float newY,float newLen) {
			p.moveTo(newX,newY);
			length=newLen;
			circumference=4*length;
		}
		double getLen() { return length; }
		double getCircumference() { return circumference; }
		bool isEqual(Square &s) {
			if(length==s.length) return true;
			else return false;	
		}
	private:
		Point p;
		float length; 
		double circumference;
};




/*******End*********/

int main() {
	float x,y,len;
	cin>>x>>y>>len;
	Square s1(x,y,len),s2;
	cout<<"s1 �߳�: "<<s1.getLen()<<", �ܳ�: "<<s1.getCircumference()<<endl;
	cout<<"s2 �߳�: "<<s2.getLen()<<", �ܳ�: "<<s2.getCircumference()<<endl;
	cout<<"�Ƿ����: "<<s2.isEqual(s1)<<endl;
		
	cin>>x>>y>>len;
	s2.resetSquare(x,y,len);
	cout<<"���ú�:\ns1 �߳�: "<<s1.getLen()<<", �ܳ�: "<<s1.getCircumference()<<endl;
	cout<<"s2 �߳�: "<<s2.getLen()<<", �ܳ�: "<<s2.getCircumference()<<endl;
	cout<<"�Ƿ����: "<<s2.isEqual(s1)<<endl;
	ifstream in1("4.2.3_2-2_in.dat");
	ofstream out1("4.2.3_2-2_out.dat");
	while(in1>>x>>y>>len)
	{
		Square s1(x,y,len),s2;
		out1<<"s1 �߳�: "<<s1.getLen()<<", �ܳ�: "<<s1.getCircumference()<<endl;
		out1<<"s2 �߳�: "<<s2.getLen()<<", �ܳ�: "<<s2.getCircumference()<<endl;
		out1<<"�Ƿ����: "<<s2.isEqual(s1)<<endl;	
		in1>>x>>y>>len;
		s2.resetSquare(x,y,len);
		out1<<"���ú�:\ns1 �߳�: "<<s1.getLen()<<", �ܳ�: "<<s1.getCircumference()<<endl;
		out1<<"s2 �߳�: "<<s2.getLen()<<", �ܳ�: "<<s2.getCircumference()<<endl;
		out1<<"�Ƿ����: "<<s2.isEqual(s1)<<endl<<endl;
	}
	in1.close();
	out1.close();
	return 0;
}