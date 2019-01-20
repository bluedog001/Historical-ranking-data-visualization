#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<iostream>
using namespace std;

/*
将数据清洗为标准csv格式
考虑到该小作业只需要一点数据来模拟，所以没有实现完全自动化，手动将csv拼在一起
否则加一个字符串拼接，并适当修改demo2.py即可
不过仍然需要预先设置好 搜索词 的数组
*/

int main()
{
	freopen("temp12.txt","r",stdin);
	freopen("tp12.txt","w",stdout);

	string ss;
	getline(cin,ss);
	//cout<<ss<<endl;

	//cout<<endl;
	cout<<"name,value,date\n";

	string name = "ig";
	int len = ss.size();
	string date = "";
	string index = "";
	for(int i=0;i<len;i++)
	{
		if(ss[i]=='{')
		{
			for(int j=i+10;j<=i+19;j++) date +=ss[j];
		}
		if(ss[i]=='x')
		{
			for(int j=i+5;;j++)
			{
				if(ss[j]=='\'') break;
				index += ss[j];
			}

			cout<<name<<','<<index<<','<<date<<endl;
			index = "";
			date = "";
		}
	}

	return 0;
}
