#include<iostream>
using namespace std;
class Tree{
	public:
	char v;
	Tree* left;
	Tree* right;
		Tree(char vd){
			v=vd;
			right=NULL;
			left=NULL;
		}
};
Tree *Hierarchy(){
	char m;
	 cout<<"\n Enter the parent symbols and if any parent doesn't have any child then press m or M. ";
	cin>>m;
	if(m == 'M'||m=='m')
	{
		return NULL;
	}
	Tree *Root=new Tree(m);
	Root->left=Hierarchy();
	Root->right=Hierarchy();
	return Root;
}
void Inorder(Tree *Root)
{
	if(Root==NULL)
	return;
	Inorder(Root->left);
	//cout<<Root->v<<" ";
	Inorder(Root->right);
	cout<<"\n "<<Root->v<<" is the parent of "<<Root->left->v<<" and "<<Root->right->v;
}
int main()
{
	Tree *Root=Hierarchy();
	Inorder(Root);
}




