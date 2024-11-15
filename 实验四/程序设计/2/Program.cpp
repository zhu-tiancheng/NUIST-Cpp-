/*
ʱ�ӣ�Clock��������ģ��ʱ�ӵĳ��ù��ܣ����Ա���£� 
��1�����г�Ա��
Clock(int hh=0,int mm=0,int ss=0) // ���캯����hh,mm,ss�ֱ����ڳ�ʼ��ʱ�ӵ�ʱ���֡���
void setTime(int newH,int newM,int newS)  // ����ʱ�ӵ�ʱ���֡�������
void add(int n)  // ʱ��������n
void dec()  // ʱ��������1
int dist(Clock &c)  // ����һ��ʱ�Ӷ����ʱ���ֵ����λΪ��
void showTime()  // ��ʾ���������ǰʱ������
��2��˽�г�Ա��
int hour, minute, second  // ʱ�ӵ�ʱ���֡��루24Сʱ�ƣ�

���������˵�������Clock��Ķ��塣
����������
���룺
0 0 0
3675
13 10 30
�����
ʱ��c1: 0:0:0
ʱ��c2: 0:0:0
ʱ��c1��c2���0��
ʱ��c1: 1:1:15
ʱ��c2: 23:59:59
ʱ��c1��c2���82724��
���ú�ʱ��c1: 13:10:30
ע�⣺����Դ�����Ѹ�������������ע�͡�Begin���͡�End��֮�䲹ȫ���룬���øĶ��������е��κ����ݡ�
�������
*/
#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;

/*******Begin*******/
class Clock {
	public:
		Clock(int hh=0,int mm=0,int ss=0);	// ���캯����hh,mm,ss�ֱ����ڳ�ʼ��ʱ�ӵ�ʱ���֡���
		void setTime(int newH,int newM,int newS);  // ����ʱ�ӵ�ʱ���֡�������
		void add(int n);  // ʱ��������n
		void dec();  // ʱ��������1
		int dist(Clock &c);  // ����һ��ʱ�Ӷ����ʱ���λΪ��
		void showTime();  // ��ʾ���������ǰʱ������
	private:	
		int hour,minute,second;  // ʱ�ӵ�ʱ���֡��루24Сʱ�ƣ�
};

Clock::Clock(int hh,int mm,int ss):hour(hh),minute(mm),second(ss) { }

void Clock::setTime(int newH,int newM,int newS) {
	hour = newH;
	minute = newM;
	second = newS;
}

void Clock::add(int n) {
	second+=n;
	minute+=second/60;
	second%=60;
	hour+=minute/60;
	minute%=60;
	hour%=24;	
}

void Clock::dec() {
	second--;
	if (second < 0) {
		second+= 60;
		minute--;
		if (minute < 0) {
			minute+= 60;
			hour=(hour + 23) % 24;
		}
	}
}

int Clock::dist(Clock &c) {
	return abs((hour*3600+minute*60+second)-(c.hour*3600+c.minute*60+c.second));
	
}


/*******End*********/

void Clock::showTime() {
	cout<<hour<<":"<<minute<<":"<<second<<endl;
}

int main() {
	int h,m,s,n;
	cin>>h>>m>>s;
	Clock c1(h,m,s),c2;
	cout<<"ʱ��c1: "; c1.showTime();
	cout<<"ʱ��c2: "; c2.showTime();
	cout<<"ʱ��c1��c2���"<<c1.dist(c2)<<"��"<<endl;
	cin>>n;
	c1.add(n); c2.dec();
	cout<<"ʱ��c1: "; c1.showTime();
	cout<<"ʱ��c2: "; c2.showTime();
	cout<<"ʱ��c1��c2���"<<c1.dist(c2)<<"��"<<endl;
	cin>>h>>m>>s;
	c1.setTime(h,m,s);
	cout<<"���ú�ʱ��c1: "; c1.showTime();	
	ifstream in1("4.1.5_1-5.in");
	ofstream out1("4.1.5_1-5.out");
	streambuf *cinbackup;
	streambuf *coutbackup;
	cinbackup=cin.rdbuf(in1.rdbuf());
	coutbackup=cout.rdbuf(out1.rdbuf());
	while(cin>>h>>m>>s) {
		Clock c1(h,m,s),c2;
		cout<<"ʱ��c1: "; c1.showTime();
		cout<<"ʱ��c2: "; c2.showTime();
		cout<<"ʱ��c1��c2���"<<c1.dist(c2)<<"��"<<endl;
		cin>>n;
		c1.add(n); c2.dec();
		cout<<"ʱ��c1: "; c1.showTime();
		cout<<"ʱ��c2: "; c2.showTime();
		cout<<"ʱ��c1��c2���"<<c1.dist(c2)<<"��"<<endl;
		cin>>h>>m>>s;
		c1.setTime(h,m,s);
		cout<<"���ú�ʱ��c1: "; c1.showTime();
		cout<<endl;
	}
	cin.rdbuf(cinbackup);
	cout.rdbuf(coutbackup);
	in1.close();
	out1.close();
	return 0;
}