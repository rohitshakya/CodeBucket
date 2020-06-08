#include<iostream>
using namespace std;

int stack[100],n,ch,x;
int top=-1;
void push(){
	
	if(top==(n-1))
	cout<<"stack overflow"<<endl;
	else{
	    cout<<"enter number you want to insert"<<endl;
	    cin>>x;
		stack[++top]=x;
	}
}
	void pop(){
	
		if(top==-1)
		cout<<"underflow"<<endl;
		else{
			x=stack[top--];
			cout<<"popped element is "<<x<<endl;
		}
	}
	void peak(){
		if(top==-1)
		cout<<"stack is empty"<<endl;
		else
		cout<<"topmost element of stack is "<<stack[top]<<endl;
	}
	void display(){
		if(top==-1)
		cout<<"stack is empty"<<endl;
		else{
		for(int i=top;i>=0;i--){
			cout<<stack[i]<<" ";
		}
	}
	}
	

int main(){
	cout<<"\nEnter the size of stack"<<endl;
	cin>>n;
	cout<<"STACK OPERATIONS USING ARRAY"<<endl;

	do{
		cout<<"enter choice"<<endl;
		cout<<"1. push"<<endl;
		cout<<"2. pop"<<endl;
		cout<<"3. peak or size of stack"<<endl;
		cout<<"4. display"<<endl;
		 cin>>ch;
		 switch(ch){
		 	case 1:
		 		push();
		 		break;
		 	case 2:
			    pop();
				break;
			case 3:
			    peak();
				break;
			case 4:
			    display();
				break;
			default: 
			cout<<"invalid case";				
		 }
	}while(ch!=0);
}
