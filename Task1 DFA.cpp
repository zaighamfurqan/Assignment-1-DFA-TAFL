#include <iostream>
using namespace std;
 class State{
 	public:
	  int num;
 	
 };
 
int transition(char inp,int &current_state, int &i)
 {
 	
 	State q0,q1,q2,q3;
   
 	q0.num=0;
 	q1.num=1;
 	q2.num=2;
 	q3.num=3;
 	
 
 	if(current_state==q0.num)
 	{
		if(inp=='a')
 		{
 			current_state=q1.num;
 			return q1.num;		
		}
		else if(inp=='b')
		{
			current_state=q3.num;
			return q3.num;
		}
	}
	if(current_state==q1.num)
 	{
		 if(inp=='a')
 		{
 			current_state=q0.num;
 			return q0.num;		 
		}
		else if(inp=='b')
		{
			current_state=q2.num;
			return q2.num;
		}
	}
	if(current_state==q2.num)
 	{
	if(inp=='b')
		{
			current_state=q1.num;
			return q1.num;
		}
	if(inp=='a')
		{
			current_state=q3.num;
			return q3.num;
		}
	}
	if(current_state==q3.num)
 	{
	if(inp=='a')
		{
			current_state=q2.num;
			return q2.num;
		}
	if(inp=='b')
		{
			current_state=q0.num;
			return q0.num;
		}
	}

 }
 
 
 
 int main()
 {
 
 	cout<<"It will accept only even a\'s and b\'s"<<endl;
 		char b=228;
 cout<<b<<"={a,b}"<<endl;
 string chck_str;
 int final_state=0,final;
 cout<<"Enter the string: "<<endl;
 cin>>chck_str;
 
 int size=chck_str.length();
 for(int i=0;i<size;i++)
 {
 	final=transition(chck_str[i],final_state,i);	
	}
	if(final==0)
		{
			cout<<"String is accepted";
		}
	else
		{
			cout<<"String is not accepted";
		}
 
 return 0;
 }
