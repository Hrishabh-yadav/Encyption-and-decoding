#include<iostream.h>
#include<conio.h>
   void show(char a[5][10])
      {
      for(int i=0;i<5;i++)
      {   for(int j=0;j<10;j++)
      {
      cout<<a[i][j];
      }
      cout<<"\n";
      }
      }
      void change(char a[5][10],char b[5][10])
      {
      for(int i=0;i<5;i++)
      {
      for(int j=0;j<10;j++)
      a[i][j]=b[i][j];
      }
      }
void run(char a[5][10])
{  int count[5][10];
char b[5][10];
  for(int m=0;m<5;m++)
  {
  for(int j=0;j<10;j++)
  {
  count [m][j]=0;
  }
  }
   for(int i=0;i<5;i++ )
    {
    for(int j=0;j<10;j++)
    {
	if(a[i-1][j-1]=='*')
	count[i][j]++;
		if(a[i-1][j]=='*')

	count[i][j]++;
		if(a[i-1][j+1]=='*')

	count[i][j]++;
		if(a[i][j-1]=='*')
	count[i][j]++;
		if(a[i][j+1]=='*')
	count[i][j]++;
		if(a[i+1][j-1]=='*')
	count[i][j]++;
		if(a[i+1][j+1]=='*')
	count[i][j]++;
		 if(a[i+1][j]=='*')
		 count[i][j]++;
       b[i][j]='.';

	if(a[i][j]=='*' && count[i][j]<2)
	{
	    b[i][j]='.';
	    }

     else if(a[i][j]=='*' && count[i][j]==2||count[i][j]==3)
	{
	    b[i][j]='*';
	    }
      else if(a[i][j]=='*' && count[i][j]>3)
      {
      b[i][j]='.';
      }
      else if(a[i][j]=='.' && count[i][j]==3)
      {
      b[i][j]='*';
      }
      }
      }
      change(a,b)  ;
      }













int main()
{  clrscr();
   char a[5][10],b[50][2] ;
   int live;
   cout<<"how many life cells do you want (less than 50)\n";
   cin>>live;
   cout<<"Tell the positions of these cells based on 5*10 array\n";
   for(int i=0;i<5;i++)
  { for(int j=0;j<10;j++)
   a[i][j]='.';   }

   for(int m=0;m<live;m++)
   {  int x,y;
    cin>>x>>y;
    a[x][y]='*';
    }clrscr();
    show(a);
   int l;
   cout<<"for how many turns do u want to run the game \n";
   cin>>l;
    clrscr();
   for(int p=0;p<l;p++)
   {
	char u;
       run(a);
       show(a);

       cout<<"press anything for next";
       cin>>u;
       if(p!=l-1)
       clrscr();







   }
   char h;
   cin>>h;



    return 0;
   }








