#include<bits/stdc++.h>

using namespace std;


struct node{
	int data;
	node* l;
	node* r;
	node(int x){
		data=x;
		l=NULL;
		r=NULL;
	}

};
typedef node NODE;



void ThemNode(NODE* &t,int x){
	if(t==NULL) {
		NODE *p=new NODE(x);
		t=p;
	}
	else{
		if(x<t->data) ThemNode(t->l,x);
		if(x>t->data) ThemNode(t->r,x);
	}
}
void Duyet_inorder(NODE *t){
	if(t!=NULL){
		cout<<t->data<<" ";
		Duyet_inorder(t->l);
		Duyet_inorder(t->r);
	}
}

int main(){
	
	int t;
	cin >> t;
	while(t--){
		
		int n;
		cin>>n;
		NODE *t=NULL;
		while(n--){
			int x;
			cin>>x;
			ThemNode(t,x);
			
		}
		Duyet_inorder(t);
		cout<<endl;

		
	}
}

