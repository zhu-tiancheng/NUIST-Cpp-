/*
点（Point）类成员如下： 
（1）公有成员：
Point(float xx, float yy)   // 构造函数，初始化点的x, y坐标
void moveTo(float newX, float newY)  // 将点的x, y坐标移动到newX, newY
（2）私有成员：
float x, y   // 点的横坐标，纵坐标
在此基础上，定义圆（Circle）类，其成员如下：
（1）公有成员：
Circle(float x=0.0,float y=0.0,float r=1.0) // 构造函数，其中(x,y)为圆心位置，r为圆的半径，π=3.14
void resetCircle(float newX, float newY, float newR) // 重置圆心坐标x, y，以及半径radius
double getRadius()  // 返回圆的半径
double getCircumference() // 返回圆的周长
bool isEqual(Circle &c) // 判断与另一个圆是否大小相等（半径是否相等）
（2）私有成员：
Point p   // 圆心位置
float radius  // 圆的半径
double circumference // 圆的周长
请根据上述说明，完成Point，Circle两个类的定义。
注意：部分源程序给出，仅允许在注释"Begin"和"End"之间填写内容，不得改动main函数和其他已有的任何内容。
测试样例：
输入：
0 0 1
3 4 5
输出：
c1 半径: 1, 周长: 6.28
c2 半径: 1, 周长: 6.28
是否相等: 1
重置后:
c1 半径: 1, 周长: 6.28
c2 半径: 5, 周长: 31.4
是否相等: 0
试题程序：
*/
#include<iostream>
#include<fstream>
using namespace std;
const double PI=3.14;

/*******Begin*******/
class Point { 
	public:
		Point(float xx,float yy): x(xx),y(yy) { } 	
		void moveTo(float newX,float newY) { x=newX,y=newY; } 	
	private:
		float x,y;
}; 

class Circle {
	public:
		Circle(float x=0.0,float y=0.0,float r=1.0):p(x,y) {
			radius=r;
			circumference=2*PI*radius;
		}
		void resetCircle(float newX,float newY,float newR) {
			p.moveTo(newX,newY);
			radius=newR;
			circumference=2*PI*radius;
		}
		double getRadius() { return radius; }
		double getCircumference() { return circumference; }
		bool isEqual(Circle &c) {
			if(radius==c.radius) return true;
			return false;	
		}
	private:
		Point p; 
		float radius;
		double circumference;
};



/*******End*********/

int main() {
	float x,y,r;
	cin>>x>>y>>r;
	Circle c1(x,y,r),c2;
	cout<<"c1 半径: "<<c1.getRadius()<<", 周长: "<<c1.getCircumference()<<endl;
	cout<<"c2 半径: "<<c2.getRadius()<<", 周长: "<<c2.getCircumference()<<endl;
	cout<<"是否相等: "<<c2.isEqual(c1)<<endl;	
	cin>>x>>y>>r;
	c2.resetCircle(x,y,r);
	cout<<"重置后:\nc1 半径: "<<c1.getRadius()<<", 周长: "<<c1.getCircumference()<<endl;
	cout<<"c2 半径: "<<c2.getRadius()<<", 周长: "<<c2.getCircumference()<<endl;
	cout<<"是否相等: "<<c2.isEqual(c1)<<endl;
	ifstream in1("4.2.2_2-2.in");
	ofstream out1("4.2.2_2-2.out");
	while(in1>>x>>y>>r) {
		Circle c1(x,y,r),c2;
		out1<<"c1 半径: "<<c1.getRadius()<<", 周长: "<<c1.getCircumference()<<endl;
		out1<<"c2 半径: "<<c2.getRadius()<<", 周长: "<<c2.getCircumference()<<endl;
		out1<<"是否相等: "<<c2.isEqual(c1)<<endl;		
		in1>>x>>y>>r;
		c2.resetCircle(x,y,r);
		out1<<"重置后:\nc1 半径: "<<c1.getRadius()<<", 周长: "<<c1.getCircumference()<<endl;
		out1<<"c2 半径: "<<c2.getRadius()<<", 周长: "<<c2.getCircumference()<<endl;
		out1<<"是否相等: "<<c2.isEqual(c1)<<endl<<endl;
	}
	return 0;
}