/*-------------------------------------------------[0]---------------------------------------------------------------*/
#include <iostream>
#include<string>
#include<windows.h>

using namespace std;

int main()
{
    int know,i,j;
    int ac_number;
    char info,inp,offer,card,loan,A,B,Y,N,a,b;
    char w[]="Welcome To ESTARN BANK CHATBOX";
    string name,gtkey;
    system("color B");
    cout<<"\n\t\t";
    for(i=0; i<strlen(w); i++)
    {
        cout <<w[i];
        Sleep(100);
    }
    cout<<"\n\n\t Project Manager: Md. Abu Sufian \t\tID No:19-41749-3\n\n\n\n\n";
    cout<<"To continue the program type 'Y' and End type 'N' - \n";
    cout<<"--> ";
    cin>>inp;

    if(inp=='y'||inp=='Y'||inp=='Yes'||inp=='YES'||inp=='yes')
    {
        cout<<"\n Welcome To ESTARN BANK CHATBOX ";
    }
    else
    {
        cout<<"\n Thanks For Coming ";
        return 0;
    }
    system("cls");
    system("color A");

    if(gtkey!="bi")
    {
        {
            cout<<"\t HELLO USER \n";
            cout<<"\t--> ";
            cin>>gtkey;
        }
        /*-------------------------------------------------[1]---------------------------------------------------------------*/
        cout<<"\n\t Do you want to know your banking information?\n\t(Yes=y/No=n) \n";
        cout<<"\t--> ";
        cin>>info;
        system("cls");
        if(info=='y'||info=='Y'||info=='Yes'||info=='YES'||info=='yes')
        {
            {
                cout<<"\n\tWhat is your name? \n";
                cout<<"\t--> ";
                cin>>name;
            }
            cout<<endl;
            cout<<endl;
            /*-------------------------------------------------[2]---------------------------------------------------------------*/
            cout<<"\n\tWhat is your Card type? \n"<<endl;
            cout<<"\t"<<endl<<"\t(a) VISA CARD\n\t(b) MASTER CARD"<<endl;
            cout<<"\t--> ";
            cin>>card;
            system("cls");
            cout<<"\n\tEnter Your Account Number:";
            cin>>ac_number;
            if(card=='a'||card=='A')
            {
                cout<<"\nCard Type: VISA CARD"<<endl;
                cout<<"\nNow we are checking your information."<<endl;
                cout<<"\n";
                char l[]="Loading...........";
                for(i=0; i<strlen(l); i++)
                {
                    cout <<l[i];
                    Sleep(200);
                }
                system("cls");
                cout<<"\n\n\n\t\tVerification complete."<<endl;
                for(i=0; i<20; i++)
                {
                    Sleep(80);
                }

            }
            if(card=='b'||card=='B')
            {
                cout<<"\nCard Type: MASTER CARD"<<endl;
                cout<<"\nNow we are checking your information."<<endl;
                cout<<"\n\t";
                char l[]="Loading...........";
                for(i=0; i<strlen(l); i++)
                {
                    cout <<l[i];
                    Sleep(200);
                }
                system("cls");
                cout<<"\n\n\t\tVerification complete."<<endl;
                for(i=0; i<20; i++)
                {
                    Sleep(80);
                }
            }
            system("cls");
            /*------------------------------------------------------[3]----------------------------------------------------------*/
            cout<<"\n what do you want to know?"<<endl;
            cout<<"\n Choose an option :"<<endl;
            cout<<"(1)Available Balance(BDT)\n(2)Available Balance(USD)\n(3)Last 5 Transaction(BDT)\n(4)Last 5 Transaction(USD)\n(5)Mobile Recharge "<<endl;
            cout<<"--> ";
            cin>>know;
            system("cls");
            if(know==1)
            {
                cout<<"\n Your Available Balance(BDT) is: 8592.37 TAKA"<<endl;
            }

            if(know==2)
            {
                cout<<"\n Your Available Balance(USD) is: 103.25 DOLLAR"<<endl;
            }

            if(know==3)
            {
                cout<<"\n Your Last 5 Transaction(BDT) is: \n1. BDT 1025.0 Debit on AL ARABIAN CAKE  And  SWEETS Gulshan Model \n2. BDT 10000.0 Debit on EBL KHILKHET 1ST ATM \n3. BDT 1870.0 Debit on TAKEOUT BD  \n4. BDT 2459.0 Debit on CAFE MEMOIRE DHAKA \n5. BDT 900.0 Debit on easy.com.bd"<<endl;
            }
            if(know==4)
            {
                cout<<"\n Your Last 5 Transaction(USD) is:\n1. USD (2.0) Debit on FACEBOOK \n2. USD (5.32) Debit on GOOGLE *Supercell \n3. USD (19.94) Credit on Payment Received Through EBL DROPBOX \n4. USD (50.0) Debit on WWW.RAZER.COM \n5. USD (70.59) Credit on CASH DEPOSIT"<<endl;
            }

            if(know==5)
            {
                cout<<"\n We are not provide this service."<<endl;
                return 0;
            }
            cout<<endl;
            /*------------------------------------------------------[4]----------------------------------------------------------*/
            cout<<"\nWe are offering you some interesting loan related offers.\nWould you like to know more about the offers?\n(Yes=y/No=n) "<<endl;
            cout<<"--> ";
            cin>>offer;
            system("cls");
            if(offer=='y'||offer=='YES'||offer=='Yes'||offer=='yes')
            {
                char l[]="Loading...........";
                for(i=0; i<strlen(l); i++)
                {
                    cout <<l[i];
                    Sleep(200);
                }
                system("cls");
                cout<<"\nOFFERS: \n\n1.EBL ASSURE : EBL Assure is an any purpose lifestyle loan facility for any\nlegitimate purpose with life insurance coverage.\n\n2. EBL EXECUTIVE LOAN : EBL Executive Loan is any purpose unsecured.\nTerm loan facility (EMI based) for any legitimate purpose. Bank would\nfinance against monthly income of any credit worthy individual to meet\nhis/her life style needs.\n\n3. Auto loan : Thinking of buying a car? With EBL's exciting Auto Loan offer,\n don't think anymore.\nDrive your dream car home!"<<endl;
            }

            else
            {
                cout<<"\n Okay. Thank You "<<endl;
            }
            cout<<endl;
            cout<<endl;
            /*------------------------------------------------------[5]----------------------------------------------------------*/
            cout<<"\n Now, are you interested in taking out a loan?(Yes=y/No=n)"<<endl;
            cout<<"--> ";
            cin>>loan;
            system("cls");
            if(loan=='y'||loan=='Yes'||loan=='yes'||loan=='YES')
            {
                cout<<"\n OKAY!!!\n Please send the full address of your home to this '01712345678' number.\n Our representative will meet at your address within 3days. \n (N.B. Use your registered phone number against EBL card)"<<endl;
            }
            else
            {
                cout<<"Okay. Thank You,Sir.";
            }
            cout<<endl;
            cout<<endl;
            /*-------------------------------------------------------[6]---------------------------------------------------------*/
            cout<<"\n Thanks for being with us. Have a good day."<<endl;
            cout<<endl;
            cout<<endl;
            cout<<endl;

            cout<<" Name       :  "<<name      <<endl;
            cout<<" Account No :  "<<ac_number <<endl;
            cout<<" Loan       :  "<<loan      <<endl;
            /*----------------------------------------------------------------------------------------------------------------*/
            system("PAUSE");
        }
    }
}
