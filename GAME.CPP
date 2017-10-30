#include<iostream.h>
#include<conio.h>
   void show(char a[50][70])
      {
      for(int i=0;i<23;i++)
      {   for(int j=0;j<70   ;j++)
      {
      cout<<a[i][j];
      }
      cout<<"\n";
      }
      }
      void change(char a[50][70],char b[50][70])
      {
      for(int i=0;i<23;i++)
      {
      for(int j=0;j<70;j++)
      a[i][j]=b[i][j];
      }
      }
void run(char a[50][70])
{  int count[50][70];
char b[50][70];
  for(int m=0;m<23;m++)
  {
  for(int j=0;j<70;j++)
  {
  count [m][j]=0;
  }
  }
   for(int i=0;i<23;i++ )
    {
    for(int j=0;j<70;j++)
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
void play()
{     clrscr();
   char a[50][70],b[50][2] ;
   int live;
   cout<<"How many life cells do you want \n";
   cin>>live;
   cout<<"Tell the positions of these cells based on 23*70 array\n";
   for(int i=0;i<23;i++)
  { for(int j=0;j<70;j++)
   a[i][j]='.';   }

   for(int m=0;m<live;m++)
   {  int x,y;
    cin>>x>>y;
    if(x<23&&y<70)
    a[x][y]='*';
    else
    {
    cout<<"INVALID POSTION!\n" ;

    cout<<"INPUT NEW POSITIONS\n";
    m--;
    }

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
}
void rules()
{
cout<<"THE GAME IS AN CELLULAR AUTOMATON\n";
cout<<"Every cell in the game interacts with its eight neighbour\n";
cout<<"AT STEPS TRANSITIONS OCCUR DUE TO 4 RULES\n";
cout<<"RULE 1: Any cell with fewer than two live cell dies,as if by underpopulation";
cout<<"\nRule 2: Any cell with more than two or three live cell lives on to next generation\n";
cout<<"Rule 3: Any cell with more than three live  neighbour dies,as if by overpopulation\n";
cout<<"Rule 4.)Any dead cell with exaxtly three live cell neighbour becomes a live cell,as if by reproduction\n";
cout<<"LET'S START\n";
cout<<"PRESS 1 TO START\n";
int n;
cin>>n;
if(n==1)
play();



			      }
int main()
{   clrscr();
   int n;
   cout<<"MAKE CHOICE\n";
   cout<<"1.)PLAY GAME\n";
   cout<<"2.)SEE THE RULES\n";
   cin>>n;
   if(n==1)
   play();
  else if(n==2)
   rules();
   else
      cout<<"INVALID CHOICE!";

    return 0;
   }








