#include<bits/stdc++.h>

using namespace std;
int check;

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


void noi_node(NODE* &t,int b,char c){
	if(c=='L') t->l=new NODE(b);
	if(c=='R') t->r=new NODE(b);
}
void tao_tree(NODE* t,int a,int b,char c){
	if(t==NULL) return;
	if(t->data==a) noi_node(t,b,c);
	tao_tree(t->l,a,b,c);
	tao_tree(t->r,a,b,c);
}
void Duyet_NLR(NODE *t){
	if(t!=NULL){
		cout<<t->data<<" ";
		Duyet_NLR(t->l);
		Duyet_NLR(t->r);
		
	}
}
void Duyet_LNR(NODE *t){
	if(t!=NULL){
		Duyet_LNR(t->l);
		cout<<t->data<<" ";
		
		Duyet_LNR(t->r);
		
	}
}
void Duyet_LRN(NODE *t){
	if(t!=NULL){
		Duyet_LRN(t->l);
		Duyet_LRN(t->r);
		cout<<t->data<<" ";
		
		
	}
}
void Kiem_Tra(NODE *t){
	if(t==NULL || check==0) return;
	if((t->l==NULL && t->r !=NULL) || (t->l !=NULL && t->r==NULL)) check=0;
	Kiem_Tra(t->l);
	Kiem_Tra(t->r);
}
main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		check=1;
		int n;
		cin>>n;
		NODE* t=NULL;
		while(n--){
			int a,b;
			char c;
			cin>>a>>b>>c;
			if(t==NULL){
				t=new NODE(a);
				noi_node(t,b,c);
			}
			else tao_tree(t,a,b,c);
		}
//		Duyet_NLR(t);
//		cout<<endl;
//		Duyet_LNR(t);
//		cout<<endl;
		//Duyet_LRN(t);
		Kiem_Tra(t);
		cout<<check<<endl;
	}
}

