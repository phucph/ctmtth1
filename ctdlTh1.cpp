#include <iostream>
#include <string>
#include<vector>

using namespace std;
/*
template <typename T>
int timTuanTu(T * a, int n, T x)
{
int flag = 0;
for(int i = 0; i< n; i++)
if(a[i] == x)
{
cout<<("vi tri = ", i);
flag=i+1;
}
if(flag == 0)
return -1;
}*/
/*template <typename T>
int timNhiPhan(T * a, int n, T x)
{
int left = 0;
  	int right = n - 1;
  	while (left <= right) {
  		int mid = (left + right) / 2;
  		if (x == a[mid]) 
 			return mid;
 		else if (x < a[mid]) 
 			right = mid - 1;
 		else if (x > a[mid]) 
 			left = mid + 1;
}
  	return -1;
}*/

template <typename T>
vector<T> timGiao(vector<T> & a, vector<T> & b)
{
	vector<T> chuaGiao;
	int i=0,j=0;
	while(i<a.size()&&j<b.size())
	{
		if(a[i]==b[j])
		{
			chuaGiao.push_back(a[i]);
			i++;
			j++;
			
		}
		else if ( a[i] < b[j])
		i++;
		else 
		j++;
	}
	return chuaGiao;	
	}

int main()
{
	
	//int a[]={1,3,5,7,9,11,14,15,17,21};
	vector<int>a;
	a.push_back(1);
	a.push_back(3);
	a.push_back(6);
	a.push_back(8);
	a.push_back(11);
	a.push_back(17);
	a.push_back(19);
	vector<int> b;
	b.push_back(1);
	b.push_back(4);
	b.push_back(6);
	b.push_back(8);
	b.push_back(10);
	b.push_back(11);
	b.push_back(14);
	vector<int>chuaGiao =timGiao(a,b);
	for (int i=0;i<chuaGiao.size();i++)
	cout <<chuaGiao[i]<< "/t";
	//timTuanTu(a,5,7);
	//int k=timNhiPhan(a,6,9);
	//cout<<k;
	return 0;
}
