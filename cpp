//bank.cpp

#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<dos.h>
void main()
{
    int choice,a_num,n,cnt,i,p,c_p,c,dep,wid,j,dp;
    char s[100];
    int c_amt=8000,s_amt=5000;

    clrscr();

    cout<<"1. CURRENT ACCOUNT \n2. SAVING ACCOUNT";

    cout<<"\n\nENTER YOUR CHOISE : ";
    cin>>choice;

    switch(choice)
    {
    case 1:
	{
	    if(choice==1)
	    {
		  cout<<"\n\n\t ***YOUR CURRENT ACCOUNT IS OPENED*** ";
		  cout<<"\n\n\t\t Plz give 8000 Rs/-";
	    }else
	    {
		cout<<"\n\n\t ***YOUR SAVING ACCOUNT IS OPENED*** ";
		cout<<"\n\n\t\t Plz give 5000 Rs-";
	    }

	    ac_num:
	    cout<<"\n\n ENTER ACCOUNT NUMBER : ";
	    cin>>a_num;

	    n=a_num;
	    cnt=0;
	    while(n!=0)
	    {
		n/=10;
		cnt++;
	    }
	    if(cnt!=4)
	    {
		cout<<"\n YOU MUST ENTER 4 DIGIT.";
		goto ac_num;
	    }

	    cout<<"\n ENTER YOUR NAME : ";
	    gets(s);

	     i=1;
	    TWO:
	    while(i<=3)
	    {
		cout<<"\n ENTER YOUR PIN : ";
		cin>>p;
		cout<<"\n ENTER CONFIRM PIN : ";
		cin>>c_p;
		if(p!=c_p)
		{
		    if(i<3)
		    {
			cout<<"\n\npin is wrong \n Try Again ";
		    }
		    else
		    {
			cout<<"WAIT FOR 1 MIN.";
			delay(10000);
			i=0;
		    }
		    i++;
		    goto TWO;
		}
		else
		{
		    i=4;
		    cout<<"YOU SUCCES FULLY CREATE ACOOUNT";
		}
	    }

	    cout<<"\n\n 1. Deposit Money \n 2. Withdraw Money \n 3. Show Account \n 4. Change pin \n 5. Exit";
	    repeat:
		dp=p;
	    cout<<"\n ENTER YOUR CHOICE : ";
	    cin>>c;

		switch(c)
		{
		case 1:
		    {
			i=1;
			THREE:
			while(i<=3)
			{
			    cout<<"\nENTER CONFIRM PIN : ";
			    cin>>c_p;
			    if(p!=c_p)
			    {
				if(i<3)
				    cout<<"pin is wrong \n Try Again ";
				else
				{
				    cout<<"WAIT FOR 1 MIN.";
				    delay(10000);
				    i=0;
				}
				i++;
				goto THREE;
			    }else
			    {
				i=4;
				depo:
				cout<<"\n ENTER DEPOSITE VALUE : ";
				cin>>dep;
				if(dep>15000)
				{
				    cout<<"\n YOU CAN'T DEPOSIT MORE THAN 15000..!";
				    goto depo;
				}else
				{
				    c_amt=c_amt+dep;
				    cout<<"\n YOU SUCCES FULLY DEPOSIT MONEY";
				}
			    }
			}
			goto repeat;
		     }
		case 2:
		    {
			i=1;
			four:
			while(i<=3)
			{
			    cout<<"\nENTER CONFIRM PIN : ";
			    cin>>c_p;
			    if(p!=c_p)
			    {
				if(i<3)
				    cout<<"pin is wrong \n Try Again ";
				else
				{
				    cout<<"WAIT FOR 1 MIN.";
				    delay(10000);
				    i=0;
				}
				i++;
				goto four;
			    }else
			    {
				i=4;
				WIDR:
				cout<<"\n ENTER WITHDRAW VALUE : ";
				cin>>wid;
				if(wid>=(c_amt-1000))
				{
				    cout<<"\n YOUR BALANCE IS INSUFFICIENT";
				    goto WIDR;
				}else
				{
				    c_amt=c_amt-wid;
				    cout<<"\n YOU SUCCES FULLY WITHDRAW MONEY";
				}
			    }
			}
			goto repeat;
		    }
		case 3:
		    {
			i=1;
			five:
			while(i<=3)
			{
			    cout<<"\n ENTER CONFIRM PIN : ";
			    cin>>c_p;
			    if(p!=c_p)
			    {
				if(i<3)
				    cout<<"\n pin is wrong \n Try Again ";
				else
				{
				    cout<<"\n WAIT FOR 1 MIN.";
				    delay(10000);
				    i=0;
				}
				i++;
				goto five;
			    }else
			    {
				i=4;
				cout<<"\n YOUR ACCOUNT DETAILS : ";
				cout<<"\n ACCOUNT NUMBER : "<<a_num;
				cout<<"\n ACCOUNTER NAME : "<<s;
				cout<<"\n ACOOUNT BALANCE : "<<c_amt;
			    }
			}
			goto repeat;
		    }
		case 4:
		    {
			i=1;
			six:
			while(i<=3)
			{
			    cout<<"ENTER CURRENT PIN : ";
			    cin>>c_p;
			    if(dp!=c_p)
			    {
				if(i<3)
				    cout<<"pin is wrong \n Try Again ";
				else
				{
				    cout<<"WAIT FOR 1 MIN.";
				    delay(10000);
				    i=0;
				}
				i++;
				goto six;
			    }else
			    {
				i=4;
				j=1;
				seven:
				while(j<=3)
				{
				    cout<<"ENTER NEW PIN : ";
				    cin>>p;
				    cout<<"ENTER NEW CONFIRM PIN : ";
				    cin>>c_p;
				    if(p!=c_p)
				    {
					if(j<3)
					    cout<<"pin is wrong \n Try Again ";
					else
					{
					    cout<<"WAIT FOR 1 MIN.";
					    delay(10000);
					    i=0;
					    goto six;
					}
					j++;
					goto seven;
				    }else
				    {
					j=4;
					cout<<"YOU SUCCESSFULLY CHANGE THE PIN.";
				    }
				}
			    }
			}
			goto repeat;
		    }
		case 5:
		    {
			cout<<"THANK YOU";
			break;
		    }

		default:
		    {
			cout<<"NOT VALID CHOICE";
			goto repeat;
		    }
		}

	    break;
	}
    case 2:
	{
	    cout<<"YOUR ACCOUT IS SAVING ACCOUT...\n";

	    ac_num2:
	    cout<<"ENTER ACCOUNT NUMBER : ";
	    cin>>a_num;

	    n=a_num;
	    cnt=0;
	    while(n!=0)
	    {
		n/=10;
		cnt++;
	    }
	    if(cnt!=4)
	    {
		cout<<"YOU MUST ENTER 4 DIGIT.\n";
		goto ac_num2;
	    }

	    cout<<"\nENTER YOUR NAME : ";
	    gets(s);

	     i=1;
	    two2:
	    while(i<=3)
	    {
		cout<<"\nEnter your pin : ";
		cin>>p;
		cout<<"\nENTER CONFIRM PIN : ";
		cin>>c_p;
		if(p!=c_p)
		{
		    if(i<3)
		    cout<<"pin is wrong \n Try Again ";
		    else
		    {
		    cout<<"WAIT FOR 1 MIN.";
		    delay(10000);
		    i=0;
		    }

		    i++;
		    goto two2;

		}else
		{
		    i=4;
		    cout<<"YOU SUCCES FULLY CREATE ACOOUNT";
		}
	    }

	    cout<<"\n\n 1. Deposit Money \n 2. Withdraw Money \n 3. Show Account \n 4. Change pin \n 5. Exit";
	    repeat2:
		dp=p;
	    cout<<"\n ENTER YOUR CHOICE : ";
	    cin>>c;

		switch(c)
		{
		case 1:
		    {
			i=1;
			THREE2:
			while(i<=3)
			{
			    cout<<"\nENTER CONFIRM PIN : ";
			    cin>>c_p;
			    if(p!=c_p)
			    {
				if(i<3)
				    cout<<"pin is wrong \n Try Again ";
				else
				{
				    cout<<"WAIT FOR 1 MIN.";
				    delay(10000);
				    i=0;
				}
				i++;
				goto THREE2;
			    }else
			    {
				i=4;
				depo2:
				cout<<"\nENTER DEPOSIT VALUE : ";
				cin>>dep;
				if(dep>15000)
				{
				    cout<<"YOU CAN'T DEPOSIT MORE THAN 15000";
				    goto depo2;
				}else
				{
				    s_amt=s_amt+dep;
				    cout<<"YOU SUCCES FULLY DEPOSIT MONEY";
				}
			    }
			}
			goto repeat2;
		    }
		case 2:
		    {
			i=1;
			four2:
			while(i<=3)
			{
			    cout<<"\nENTER CONFIRM PIN : ";
			    cin>>c_p;
			    if(p!=c_p)
			    {
				if(i<3)
				    cout<<"pin is wrong \n Try Again ";
				else
				{
				    cout<<"WAIT FOR 1 MIN.";
				    delay(10000);
				    i=0;
				}
				i++;
				goto four2;
			    }else
			    {
				i=4;
				WIDR2:
				cout<<"\nENTER WITHDRAW VALUE : ";
				cin>>wid;
				if(wid>=(s_amt-1000))
				{
				    cout<<"YOUR BALANCE IS INSUFFICIENT";
				    goto WIDR2;
				}else
				{
				    s_amt=s_amt-wid;
				    cout<<"YOU SUCCES FULLY WITHDRAW MONEY";
				}
			    }
			}
			goto repeat2;
		    }
		case 3:
		    {
			i=1;
			five2:
			while(i<=3)
			{
			    cout<<"\nENTER CONFIRM PIN : ";
			    cin>>c_p;
			    if(p!=c_p)
			    {
				if(i<3)
				    cout<<"pin is wrong \n Try Again ";
				else
				{
				    cout<<"WAIT FOR 1 MIN.";
				    delay(10000);
				    i=0;
				}
				i++;
				goto five2;
			    }else
			    {
				i=4;
				cout<<"\nYOUR ACCOUNT DETAILS : ";
				cout<<"\n ACCOUNT NUMBER : "<<a_num;
				cout<<"\n ACCOUNTER NAME : "<<s;
				cout<<"\n ACOOUNT BALANCE : "<<s_amt;
			    }
			}
			goto repeat2;
		    }
		case 4:
		    {
			i=1;
			six2:
			while(i<=3)
			{
			    cout<<"ENTER CURRENT PIN : ";
			    cin>>c_p;
			    if(dp!=c_p)
			    {
				if(i<3)
				    cout<<"pin is wrong \n Try Again ";
				else
				{
				    cout<<"WAIT FOR 1 MIN.";
				    delay(10000);
				    i=0;
				}
				i++;
				goto six2;
			    }else
			    {
				i=4;
				j=1;
				seven2:
				while(j<=3)
				{
				    cout<<"\nENTER NEW PIN : ";
				    cin>>p;
				    cout<<"ENTER NEW CONFIRM PIN : ";
				    cin>>c_p;
				    if(p!=c_p)
				    {
					if(j<3)
					    cout<<"pin is wrong \n Try Again ";
					else
					{
					    cout<<"WAIT FOR 1 MIN.";
					    delay(30000);
					    i=0;
					    goto six2;
					}
					j++;
					goto seven2;
				    }else
				    {
					j=4;
					cout<<"YOU SUCCESSFULLY CHANGE THE PIN.";
				    }
				}
			    }
			}
			goto repeat2;
		    }
		case 5:
		    {
			cout<<"THANK YOU";
			break;
		    }

		default:
		    {
			cout<<"NOT VALID CHOICE";
			goto repeat2;
		    }
		}

	    break;
	}
    }
    getch();
}
