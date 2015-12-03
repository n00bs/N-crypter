#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

void makecode()
{
	char message[10000];
   int messagecode[10000];
   cout<<"\nEnter the MESSAGE you wish to convert\n";
   gets(message);
   for(int k=0;message[k];k++)
   	messagecode[k]=message[k];
   cout<<"\n\n\n";
   for(int k=0;messagecode[k];k++)
   	cout<<messagecode[k];
   cout<<"\n\n\n";
}
void breakcode()
{
	int finalmessage[1000]={0},tempmessage[10000]={0};
   char inimessage[10000];
   cout<<"\nEnter the CODE you wish to convert\n";
   cin>>inimessage;
   int len=0,sum=0,l=0,z=0;
   for(int k=0;inimessage[k];k++)
   	len++;
   for(int k=0;k<len;k++)
   	tempmessage[k]=(inimessage[k]-'0');
   while(l<=len)
   {
   	if(sum>25)
      {
      	finalmessage[z]=sum;
         sum=0;
         z++;
      }
      else
      {
      	sum=sum*10+tempmessage[l];
         l++;
      }
   }
   cout<<"\n\n\n";
   for(int k=0;finalmessage[k];k++)
   	cout<<char(finalmessage[k]);
   cout<<"\n\n\n";
}
void main()
{
	int choice;
   do
   {
   	cout<<"\nWelcome to the CODE MACHINE!!\n";
      cout<<"Input 1 : Make code\n";
     	cout<<"Input 2 : Break code\n";
      cout<<"Input 0 : Exit\n";
      cin>>choice;
      switch(choice)
      {
      	case 1 : makecode();break;
         case 2 : breakcode();break;
         case 0 : cout<<endl;break;
         default : cout<<"Invalid choice!\n";break;
      }
   }
   while(choice);
}