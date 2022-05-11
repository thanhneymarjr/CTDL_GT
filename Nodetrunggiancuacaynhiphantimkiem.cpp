#include<bits/stdc++.h>

using namespace std;

int dem;

struct node{
	int data;
	node* l;
	node* r;	
};
typedef node NODE;

void ThemNode(NODE* &t,int x){
	if(t==NULL) {		
		NODE* p=new NODE;
		p->data=x;
		p->l=NULL;
		p->r=NULL;
		t=p;
	}
	else{
		if(x<t->data) ThemNode(t->l,x);
		if(x>t->data) ThemNode(t->r,x);
	}
}

void Duyet_NLR(NODE* &t){
	if(t!=NULL){
		if(t->l!=NULL || t->r!=NULL) dem++;
		Duyet_NLR(t->l);
		Duyet_NLR(t->r);	
	}
}

int main(){	
	int t;
	cin >> t;
	while(t--){	
	    NODE *t;
		t=NULL;
		int n;
		cin>>n;
		for(int i=0,x;i<n;i++){
			cin>>x;
			ThemNode(t,x);
		}
		dem=0;
		Duyet_NLR(t);
		cout<<dem<<endl;		
	}
}

