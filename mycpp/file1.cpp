# include<iostream>
# include<fstream>
using namespace std;
int main()
{
	int data[8],i,j;
	ifstream first,second;
	first.open("/home/muskan/Desktop/files/source1");
	second.open("/home/muskan/Desktop/files/source2");
	for(i=0;i<4;i++)
	{
		first>>data[i];
		cout<<data[i];
	}
	first.close();
	second.close();
	return 0;

}
