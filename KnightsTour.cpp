// this program finds the knight's tour on a chess board, 
//i.e a knight has to touch all the squares on a chess board

// with out touching a square for the second time
// this program may not find a complete solution

#include<stdlib.h>
#include<iostream>

using namespace std;

int main()
{ 
	int bo[8][8], i,j,posi, posj,flag1=1,flag2=1,mov,no=1,x,y;
    int Mo[8][2]={-2,1,-1,2,1,2,2,1,2,-1,1,-2,-1,-2,-2,-1};        

	bo[8][8] = rand()%8;
	posi = rand()%8;
	posj = rand()%8;

    cout<<"Enter the row (0-7) and column(0-7) the starting Knight position"<<endl;
	
    cout<<"Enter row (0-7): ";
	cin>>posi;
	cout<<"Enter column (0-7): ";
    cin>>posj;
    cout<<endl;
		 
	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
			bo[i][j]=0;
	};
		  

		bo[posi][posj]=1; 

		do{  
			mov=-1;
			do
			{
				mov=mov+1;
				
			if(mov>7) break;
			 
			x=posi+Mo[mov][0];
			y=posj+Mo[mov][1];
		}
			
			while( x<0||x>7||y<0||y>7||bo[x][y]!=0);

			  if (mov<8) 
			  { 
				  posi=x; posj= y;
				  no=no+1;
				  bo[posi][posj]=no; 						   
				  if(no==64)
					  flag1=0; 
				  
				  
			  }
			  else flag2=0; 
			  
		}

		  while(flag1=1&&flag2==1);

		  for(i=0;i<8;i++)
		  {
			  for(j=0;j<8;j++)
			  {
				  cout<<bo[i][j]<<"\t";
				  
			  };
		  cout<<endl<<endl;
}

system("pause");
return 0;

}
