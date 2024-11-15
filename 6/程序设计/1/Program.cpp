/*
ARRAY�����ڴ��һ��һάint�����飬���㲢�����ǰ�����и�Ԫ�ص����ֵ����Сֵ��ƽ��ֵ�������Ա���£�
��1��˽�г�Ա��
l	int data[N]������data���ڴ洢����������ݣ�NΪ����
l	int num����ǰԪ�صĸ���
l	int max��Ԫ�ص����ֵ
l	int min��Ԫ�ص���Сֵ
l	float average������Ԫ�ص�ƽ��ֵ
��2�����г�Ա��
l	���캯��ARRAY(int x[], int n)����ʼ����Ա����data��nΪԪ�ظ���
l	void process()������data�����е����ֵ����Сֵ��ƽ��ֵ
l	void print()�������ǰ�����е�Ԫ�ؼ������ֵ����Сֵ��ƽ��ֵ
���������˵�������ARRAY��Ķ��塣

ע�⣺����Դ�����������������ע��"Begin"��"End"֮����д���ݣ����øĶ�main�������������е��κ����ݡ�
�������
*/
#include <iostream>
#include <fstream>
using namespace std;
const int N=100;

class ARRAY {
		int data[N];   // ����data���ڴ洢����������ݣ�NΪ����
		int num;       // ��ǰԪ�صĸ���
		int max,min;   // Ԫ�ص����ֵ����Сֵ
		float average; // Ԫ�ص�ƽ��ֵ
	public:
		ARRAY(int x[], int n); //��ʼ����Ա����data��nΪԪ�ظ���
		void process();    //����data�����е����ֵ����Сֵ��ƽ��ֵ
		void print() {    // �����ǰ�����е�Ԫ�ؼ������ֵ����Сֵ��ƽ��ֵ	
			cout<<"����"<<num<<"��Ԫ��: " ;
			for(int i=0;i<num;i++) cout<<data[i]<<' ';
			cout<<endl;
			cout<<"max="<<max<<endl;
			cout<<"min="<<min<<endl;
			cout<<"average="<<average<<endl; 
	}
};

/*******Begin*******/
ARRAY::ARRAY(int x[], int n) {
	num=n;
	for(int i=0;i<num;i++) data[i]=x[i];
} 		
void ARRAY::process() {
	max=min=data[0];
	average=0.0;   
	for(int i=0;i<num;i++)
	{	if(max<data[i]) max=data[i];
		if(min>data[i]) min=data[i]; 
		average+=data[i];
	}
	average/=num;    
}





/*******End*********/

int main() {
	int a[N],n;
	cin>>n;  // ���������Ԫ�ظ��� 
	for(int i=0;i<n;i++) cin>>a[i];
	ARRAY arr(a,n);
	arr.process();
	arr.print();

	ifstream in1("6.1.1_3_in.dat");
	ofstream out1("6.1.1_3_out.dat");
	streambuf *cinbackup;
	streambuf *coutbackup;
	cinbackup=cin.rdbuf(in1.rdbuf());
	coutbackup=cout.rdbuf(out1.rdbuf());
	while(cin>>n) {
		for(int i=0;i<n;i++) cin>>a[i];
		ARRAY arr(a,n);
		arr.process();
		arr.print();
		cout<<endl; 
	}
	cin.rdbuf(cinbackup);
	cout.rdbuf(coutbackup);
	in1.close();
	out1.close();
	return 0;
}
