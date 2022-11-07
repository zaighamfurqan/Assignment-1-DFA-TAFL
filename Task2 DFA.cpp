#include <iostream>
using namespace std;
 class State{
 	public:
	  int num;
 	
 };
 
int transition(char inp,int &current_state, int &i)
 {
 	
 	State q0,q1,q2,q3,q4;
   
 	q0.num=0;
 	q1.num=1;
 	q2.num=2;
 	q3.num=3;
 	q4.num=4;
 
 	if(current_state==q0.num)
 	{
		 if(inp=='a')
 		{
 			current_state=q3.num;
 			return q3.num;		
		}
		else if(inp=='b')
		{
			current_state=q1.num;
			return q1.num;
		}
	}
	if(current_state==q1.num)
 	{
		 if(inp=='a' )
 		{
 			current_state=q1.num;
 			return q1.num;		 
		}
		else if(inp=='b')
		{
			current_state=q2.num;
			return q2.num;
		}
	}
	if(current_state==q2.num)
 	{
	if(inp=='a'||inp=='b')
		{
			current_state=q3.num;
			return q3.num;
		}
	}
	if(current_state==q3.num)
 	{
	if(inp=='a')
		{
			current_state=q4.num;
			return q4.num;
		}
		if(inp=='b')
		{
			current_state=q3.num;
			return q3.num;
		}
	}
	if(current_state==q4.num)
 	{
	if(inp=='a'||inp=='b')
		{
			current_state=q4.num;
			return q4.num;
		}
	}
 
 }
 
 
 
 int main()
 {
 	cout<<"It will accept only when the starting alphabet will be the ending also."<<endl;
 		char b=228;
 cout<<b<<"={a,b}"<<endl;
 string chck_str;
 int final_state=0,final;
 cout<<"Enter the string"<<endl;
 cin>>chck_str;
 
 int size=chck_str.length();
 for(int i=0;i<size;i++)
 {
 	final=transition(chck_str[i],final_state,i);	
	}
	if(final==4||final==2)
		{
			cout<<"String is accepted";
		}
	else
		{
			cout<<"String is not accepted";
		}
 
 return 0;
 }
