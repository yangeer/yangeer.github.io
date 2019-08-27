#include<iostream>
using namespace std;
int main(){
    int n=6;
	int last_num=1;
	cout<<1<<endl;
	// 从第二行开始输出
	for(int i=2;i<=n;i++)
	{    // 第一个数字是i
		cout<<i<<" "; 
		int temp_num=i;
		int add_num=n-1;
		for(int j=1;j<i;j++)
		{
			temp_num+=add_num;			
			cout<<temp_num<<" ";
			add_num--;
		}
		cout<<endl;
	}
    return 0;

}