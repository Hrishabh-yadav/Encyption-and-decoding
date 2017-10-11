#include<iostream.h>
#include<conio.h>
#include<string.h>

void encrypt(char st[],int n)
{
    for(int i=0;i<n;i++)
    {
       st[i]=st[i]-3;
       }    cout<<"NEW STRING  :  "<<st;

 }
 void decrypt(char str[],int a)
 {
 for(int j=0;j<a;j++)
 {
    str[j]=str[j]+3;
    }
    cout<<"ORGINAL STRING  : "<<str;

    }
void main()
    {      clrscr();
       char code[1000],ch,newcode[1000];
       int l,t,m;
       cout<<"NUMBER OF TEST CASES  : \n";
       cin>>t;
       for(int k=0;k<t;k++)
       {
       cout<<"  \nDO YOU WANT TO ENCRYPT OR DECRPYT OR LEAVE(a or b or c)   \n";
       cin>>ch;
       if(ch=='a')
       {
	  cout<<"ENTER THE CODE  :  ";
	  cin>>code;
	  l=strlen(code);
	  encrypt(code,l)  ;
	  }
	else if(ch=='b')
	  {  cout<<"enter the message to decode    :    ";
	     cin>>code;
	     l=strlen(code);
	     decrypt(code,l) ;

	     }
	     else if(ch=='c')
	     { break;
	     }
	     else
	     { cout<<"invalid choice";

	       }
	       }
	    }





