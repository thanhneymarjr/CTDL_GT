#include<bits/stdc++.h>

using namespace std;

struct Node{
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
	if(c=='L' t->l=new NODE(b));
	if(c=='R' t->r=new NODE(b))
    
void tao_tree(NODE* t,inta,int,b,char c){
	if(t==NULL) return;
	if(t->data==a) noi_node(t,b,c);
	tao_tree(t->l,a,b,c);
	tao_tree(t->r,a,b,c);
}
main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t;
	cin >> t;
	while(t--){
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
	}
}
#include<bits/stdc++.h>

using namespace std;

struct Node{
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
	if(c=='L' t->l=new NODE(b));
	if(c=='R' t->r=new NODE(b))
    
void tao_tree(NODE* t,inta,int,b,char c){
	if(t==NULL) return;
	if(t->data==a) noi_node(t,b,c);
	tao_tree(t->l,a,b,c);
	tao_tree(t->r,a,b,c);
}
main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t;
	cin >> t;
	while(t--){
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
	}
}

