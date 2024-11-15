/*
���Σ�Rectangle����ĳ�Ա���£� 
��1�����г�Ա��
Rectangle(float xx1=0.0,float yy1=0.0,float xx2=1.0,float yy2=4.0) // ���캯������ʼ�����θ����ݳ�Ա������(xx1, yy1)Ϊ���½����꣬(xx2, yy2)Ϊ���Ͻ�����
void moveTo(float newX, float newY)  // ƽ�Ʋ����������½�ƽ�Ƶ�(newX, newY)
double getCircumference () // ���ؾ��ε��ܳ�
bool isSquare()  // �ж��Ƿ�Ϊ������
bool isEqual(Rectangle &r) // �ж�����һ�����ε��ܳ��Ƿ����
��2��˽�г�Ա��
float x1, y1, x2, y2  // �������½�����(x1, y1)�����Ͻ�����(x2, y2)
double circumference  // ���ε��ܳ�
���������˵�������Rectangle��Ķ��塣

ע�⣺����Դ�����������������ע��"Begin"��"End"֮����д���ݣ����øĶ�main�������������е��κ����ݡ�
�������
*/
#include<iostream>
#include<fstream>
using namespace std;

/*******Begin*******/
class Rectangle {
	public:
		Rectangle(float xx1=0.0,float yy1=0.0,float xx2=1.0,float yy2=4.0) {
			x1=xx1,y1=yy1,x2=xx2,y2=yy2;
			circumference=2*(x2-x1+y2-y1); 
		}
		void moveTo(float newX,float newY) {
			float x_offset=newX-x1,y_offset=newY-y1;
			x1=newX,y1=newY;
			x2+=x_offset,y2+=y_offset;
		}
		double getCircumference() {
			return circumference; 
		}
		bool isSquare() {
			if(x2-x1==y2-y1) return true;
			else return false;	
		}
		bool isEqual(Rectangle &r) {
			if(this->circumference==r.circumference) return true;
			else return false;	
		}		
	private:
		float x1,y1,x2,y2;
		double circumference; 
};





/*******End*********/

int main() {
	float x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	Rectangle r1(x1,y1,x2,y2),r2(r1);
	cout<<"����r1: �ܳ�"<<r1.getCircumference()<<", �Ƿ�������: "<<r1.isSquare()<<endl;	
	cout<<"����r2: �ܳ�"<<r2.getCircumference()<<", �Ƿ�������: "<<r2.isSquare()<<endl;
	cout<<"�ܳ��Ƿ����: "<<r2.isEqual(r1)<<endl;
	cin>>x1>>y1;
	r2.moveTo(x1,y1);
	cout<<"ƽ�ƺ�:\n����r1: �ܳ�"<<r1.getCircumference()<<", �Ƿ�������: "<<r1.isSquare()<<endl;	
	cout<<"����r2: �ܳ�"<<r2.getCircumference()<<", �Ƿ�������: "<<r2.isSquare()<<endl;
	cout<<"�ܳ��Ƿ����: "<<r2.isEqual(r1)<<endl;
	
	ifstream in1("4.1.1.3_4-2_in.dat");
	ofstream out1("4.1.1.3_4-2_out.dat");
	while(in1>>x1>>y1>>x2>>y2)
	{
		Rectangle r1(x1,y1,x2,y2),r2(r1);
		out1<<"����r1: �ܳ�"<<r1.getCircumference()<<", �Ƿ�������: "<<r1.isSquare()<<endl;	
		out1<<"����r2: �ܳ�"<<r2.getCircumference()<<", �Ƿ�������: "<<r2.isSquare()<<endl;
		out1<<"�ܳ��Ƿ����: "<<r2.isEqual(r1)<<endl;
		in1>>x1>>y1;
		r2.moveTo(x1,y1);
		out1<<"ƽ�ƺ�:\n����r1: �ܳ�"<<r1.getCircumference()<<", �Ƿ�������: "<<r1.isSquare()<<endl;	
		out1<<"����r2: �ܳ�"<<r2.getCircumference()<<", �Ƿ�������: "<<r2.isSquare()<<endl;
		out1<<"�ܳ��Ƿ����: "<<r2.isEqual(r1)<<endl<<endl;		
	}
	in1.close();
	out1.close();
	return 0;
}