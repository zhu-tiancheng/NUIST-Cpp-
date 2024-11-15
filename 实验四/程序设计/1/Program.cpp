/*
正方形（Square）类成员如下： 
（1）公有成员：
Square(float xx, float yy, float len) // 构造函数，其中(xx,yy)为左下角位置，len为边长
void resetSquare(float newX, float newY, float newLen)  // 重置正方形左下角坐标，以及边长newLen
float getLen()  // 返回正方形的边长
double getArea() // 计算并返回正方形的面积
bool isEqual(Square &s)  // 判断与另一个正方形是否大小相等
（2）私有成员：
float x, y   // 正方形左下角的横坐标、纵坐标
float length  // 正方形的边长
请根据上述说明，完成Square类的定义。

注意：部分源程序给出，仅允许在注释“Begin”和“End”之间填写内容，不得改动main函数和其他已有的任何内容。
试题程序：
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
	cout<<"s1 边长: "<<s1.getLen()<<", 面积: "<<s1.getArea()<<endl;
	cout<<"s2 边长: "<<s2.getLen()<<", 面积: "<<s2.getArea()<<endl;
	cout<<"是否相等: "<<s2.isEqual(s1)<<endl;
	cin>>x>>y>>len;
	s2.resetSquare(x,y,len);
	cout<<"s1 边长: "<<s1.getLen()<<", 面积: "<<s1.getArea()<<endl;
	cout<<"s2 边长: "<<s2.getLen()<<", 面积: "<<s2.getArea()<<endl;
	cout<<"是否相等: "<<s2.isEqual(s1)<<endl;
	
	ifstream in1("4.1.1.4_1-2_in.dat");
	ofstream out1("4.1.1.4_1-2_out.dat");
	while(in1>>x>>y>>len)
	{
		Square s1(x,y,len),s2(s1);
		out1<<"s1 边长: "<<s1.getLen()<<", 面积: "<<s1.getArea()<<endl;
		out1<<"s2 边长: "<<s2.getLen()<<", 面积: "<<s2.getArea()<<endl;
		out1<<"是否相等: "<<s2.isEqual(s1)<<endl;
		in1>>x>>y>>len;
		s2.resetSquare(x,y,len);
		out1<<"s1 边长: "<<s1.getLen()<<", 面积: "<<s1.getArea()<<endl;
		out1<<"s2 边长: "<<s2.getLen()<<", 面积: "<<s2.getArea()<<endl;
		out1<<"是否相等: "<<s2.isEqual(s1)<<endl<<endl;
	}
	in1.close();
	out1.close();
	return 0;
}