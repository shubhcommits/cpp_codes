# include<iostream>
using namespace std;
class sand
{
public:
	int x;
	int y;
        void display()
 	{
		cout<<x<<" "<<y<<endl;
	}
};
int main()
{
	sand s;
	s.x=10;
	s.y=20;
	s.display();
}

// THE ONLY DIFFERENCE BETWEEN STRI=UCTUTE AND CLASS IS THAT DATA MEMBER IN STRUCTURE ARE -- 
//  AUTOMATICALLY PUBLIC WHILE IN CLASS WE HAVE TO WRITE PUBLIC TO MAKE IT PUBLIC