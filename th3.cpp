#include<iostream>
using namespace std;
// Kieu du lieu cua cac nut tren cay.
struct Node
{
int sbd; // so bao danh
string hoTen; // ho ten
Node * left; // con tro toi nut con trai
Node * right; // con tro toi nut con phai
Node(int s, string h, Node * l, Node * r);
};
// Lop cay nhi phan tim kiem.
class BSTree
{
public:
BSTree()
{
	root=NULL;
}
~BSTree()
{
makeEmpty();
}

// Kiem tra cay rong.
bool isEmpty()
{
	return(root==NULL)
}

// Xoa rong cay.
void makeEmpty()
{
	
}

// Chen mot sinh vien moi vao cay.
void insert(int sbd, string hoTen)
{
	
}
// Tim sinh vien theo so bao danh. Tra ve con tro toi nut chua
// sinh vien tim duoc, hoac tra ve NULL neu khong tim duoc.
Node * search(int sbd)
private:
// Con tro toi goc cay.
Node * root;
// Xoa rong cay co goc duoc tro boi t.
void makeEmpty(Node * & t)
// Chen mot sinh vien moi vao cay co goc duoc tro boi t.
void insert(int sbd, string hoTen, Node * & t)
{
	
}
// Tim sinh vien theo so bao danh trong cay co goc duoc tro
// boi t. Tra ve con tro toi nut chua sinh vien tim duoc, hoac
// tra ve NULL neu khong tim duoc.
Node * search(int sbd, Node * t)
{
	
}

};
int main()
{
	
}




