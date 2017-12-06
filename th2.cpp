#include <iostream>
#include <vector>
using namespace std;
template <typename T>
class SingleList
{
	public:
		SingleList() 
		{
			head=null;
		}
		bool empty()
		{
		return (head==null);
		}
		T front()
		{
			
			return head->elem;
		}
		void Print()
		{
			Node *p =head;
			while (p!=null)
			{
				cout << p->elem <<"\t";
				p=p->next;
			} 
			cout << endl;
		}
		int getsize()
		{
			return size;
		}
		void pushFront(T e)
		{
			Node*p =new	Node(x,head)
			head=p;
			size++;
		}
		void popFront()
		{
			Node *old=head;
			head=head->next;
			delete old;
			size--;
		}
		// ham kiem tra x co xuat hienn khong 
		bool contains(T x)
		{
			Node*p=head;
			while(p!=null)
			{
				if(p->elem == x)
				return true;
				else// co the bo else
				p=p->next;
			}
			return false;
		}
		void remove(T x)
		{
			Node *p = head;
			Node*p0=null;//po tro den nut truowsc p 
			while(p!=null)
			{
				if (p->elem == x)
				{
					if(p!head)
					{
					p0->next =p->next;
					delete p;
					size--;
					}
					else
					popFront();
				}
				else
				p0=p;//p0 giu lai dia tri nut hien tai
				p=p->next;
			}
			
		}
		~SingleList()
		{
			while (!empty())
			popFront();
		}
};
		
	private :
	{
		struct Node{
		T elem;
		Node* next;
		Node(T e,Node*n)
		{
			elem=e;
			next=n;
		}
		};	
		Node*head;
		int size;
	};
main()
{
	SingleList<int> list;
	list.pushFront('F');
		list.pushFront('E');
			list.pushFront('D');
				list.pushFront('C');
					list.pushFront('B');
						list.pushFront('A');
	list.Print();
	list.popFront();
	...
}

