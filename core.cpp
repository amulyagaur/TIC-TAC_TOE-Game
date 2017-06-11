/*
Author : Amulya Gaur
Run this code in c++ ide and follow the instructions.
Have fun!
*/
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
void print(char a[3][3])
{
	cout<<" --- --- --- "<<endl;
	cout<<"| "<<a[0][0]<<" | "<<a[0][1]<<" | "<<a[0][2]<<" |"<<endl;
	cout<<" --- --- --- "<<endl;
	cout<<"| "<<a[1][0]<<" | "<<a[1][1]<<" | "<<a[1][2]<<" |"<<endl;
	cout<<" --- --- --- "<<endl;
	cout<<"| "<<a[2][0]<<" | "<<a[2][1]<<" | "<<a[2][2]<<" |"<<endl;
	cout<<" --- --- --- "<<endl;
}
int main()
{
    char a[3][3];
    for(int i=0;i<3;i++)
    	for(int j=0;j<3;j++)
    		a[i][j]=' ';
    cout<<"Welcome to Tic-Tac-Toe Game"<<endl;
    print(a);
    cout<<endl;
    cout<<"This will be your playground"<<endl<<"Player 1 and 2 will enter the coordinate of the block(0 based indexing) which they want to fill"<<endl;
    cout<<"Character for player 1 is X and for player 2 is O"<<endl;
    cout<<"Initial state is "<<endl;
    print(a);
    cout<<endl<<"Lets play!"<<endl;
    while(1)
    {
    	int x1,y1,x2,y2,empty1=0,empty2=0,r1,c1,d1,r2,c2,d2;
    	for(int i=0;i<3;i++)
    		for(int j=0;j<3;j++)
    			if(a[i][j]==' ')
    				empty1++;
    	if(empty1==0)
    	{
    		cout<<"Game Tie! See you again!"<<endl;
    		break;
    	}
    	else
    	{


    	while(1)
    	{
    		cout<<"Player 1:Enter the coordinate of the box which you want to fill"<<endl;
    		cin>>x1>>y1;
    		if(x1>=0 && x1<=2 && y1>=0 && y1<=2 && a[x1][y1]==' ')
    			break;
    		else
    			cout<<"Invalid coordinate! try again"<<endl;
    	}	
    	a[x1][y1]='X';
    	cout<<"playground looks like:"<<endl;
    	print(a);
    	r1=0,c1=0,d1=0;
    	for(int i=0;i<3;i++)
    	{
    		if(a[x1][i]=='X')
    			r1++;
    		if(a[i][y1]=='X')
    			c1++;
    	}
    	if(x1==y1)
    	{
    		for(int i=0,j=0;i<3 && j<3;i++,j++)
    			if(a[i][j]=='X')
    				d1++;
    	}
    }
    	if(r1==3 || c1==3 || d1==3)
    	{
    		cout<<"Player 1 wins! Thanks for playing!"<<endl;
    		break;
    	}
    	else
    	{
    		empty2=0;
    		for(int i=0;i<3;i++)
    		for(int j=0;j<3;j++)
    			if(a[i][j]==' ')
    				empty2++;
    		if(empty2==0)
    		{
    			cout<<"Game Tie! See you again!"<<endl;
    		break;
    		}
    		else
    		{
    		while(1)
    	{
    		cout<<"Player 2:Enter the coordinate of the box which you want to fill"<<endl;
    		cin>>x2>>y2;
    		if(x2>=0 && x2<=2 && y2>=0 && y2<=2 && a[x2][y2]==' ')
    			break;
    		else
    			cout<<"Invalid coordinate! try again"<<endl;
    	}	
    	a[x2][y2]='O';
    	cout<<"playground looks like:"<<endl;
    	print(a);
    	 r2=0,c2=0,d2=0;
    	for(int i=0;i<3;i++)
    	{
    		if(a[x2][i]=='O')
    			r2++;
    		if(a[i][y2]=='O')
    			c2++;
    	}
    	if(x2==y2)
    	{
    		for(int i=0,j=0;i<3 && j<3;i++,j++)
    			if(a[i][j]=='O')
    				d2++;
    	}
}
    	if(r2==3 || c2==3 || d2==3)
    	{
    		cout<<"Player 2 wins! Thanks for playing!"<<endl;
    		break;
    	}
    	}
    	empty2=0;
    		for(int i=0;i<3;i++)
    		for(int j=0;j<3;j++)
    			if(a[i][j]==' ')
    				empty2++;
    		if(empty2==0)
    		{
    			cout<<"Game Tie! See you again!"<<endl;
    		break;
    		}
    }
    return 0;
}
