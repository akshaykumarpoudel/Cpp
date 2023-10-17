#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<vector>
using namespace std;

class Library
{
    private:
        string name;
        string password;
        string course;
        string bookNames[10] = {
        "\nBook 1 = C Programming\n",
        "\nBook 2 = C++ Programming\n",
        "\nBook 3 = Java Programming\n",
        "\nBook 4 = Python Programming\n",
        "\nBook 5 = C# Programming\n",
        "\nBook 6 = Ruby Programming\n",
        "\nBook 7 = Objective C Programming\n",
        "\nBook 8 = HTML,CSS,JavaScript Complete Guide\n",
        "\nBook 9 = Flutter Developement\n",
        "\nBook 10 = AWS Certification Guide\n",
        };
        int bookNumber;
        vector<int> booksNum;
    public:
        void welcomeScreen()
        {
            cout << "\t\t\tWelcome to Akku Library" << endl;
            cout << "***********************************************************************************" << endl;
        }
        void closeThisWindow()
        {
            int i = 3;
            cout << "Closing this window in ";
            while (i > 0)
            {
                cout << i << "...";
                i--;
                Sleep(1000.0);
            }
            system("cls");
        }
        void loginScreen()
        {
            welcomeScreen();
            cout<<"\n\nEnter your name:";
            cin>>name;
            cout<<"\n\nEnter your Course: ";
            cin>>course;
            cout<<"\n\nCreate your password:";
            cin>>password;
            cout<<"\nYour Password is Successfully Created!!!\n";
            cout<<"\n\n********\n\nEnter your Login Credentials Again: ";
            getLoginDetails();

        }
        void getLoginDetails()
        {
            string password,name,course;
            while(true)
            {
                cout << "\n\nEnter your name:";
                cin >> name;
                cout << "\n\nEnter your Course: ";
                cin >> course;
                cout<<"\n\nEnter your password: ";
                cin>>password;
                if(password==this->password && name == this->name && course==this->course)
                {
                    cout<<"\n\nYou are Successfully Logged In: \n\n";
                    closeThisWindow();
                    chooseBooks();
                    return;
                }
                else
                {
                    cout<<"\n!!!!!!WRONG LOGIN CREDENTIALS!!!!! \n";
                    cout<<"\n!!!!!!PLEASE TRY AGAIN!!!!!!!!\n";
                    cout<<endl<<endl;
                }
            }
        }
        void chooseBooks()
        {

            welcomeScreen();
            int n;
            cout<<"\n\nWelcome to the Library "<<name<<endl;
            cout<<"\nAvailable Books: \n";
            for(int i=0;i<10;i++)
            {
                cout<<bookNames[i];
            }

            cout<<"\n\nChoose Your Book\n\n";
            cout<<"Enter the number of the book you want to Issue\n\n";
            cin>>n;
            cout<<"\n\nEnter the book number one by one\n\n";

            bookNumber=n;
            int a;
            for(int i=0;i<n;i++)
            {
                cin>>a;
                booksNum.push_back(a);
            }

            cout<<"\n\nYou have Selected these books: \n\n";
            for(int i=0;i<n;i++)
            {
                cout<<bookNames[booksNum[i]-1]<<" ";
            }
            closeThisWindow();
            homeScreen();

        }
        void homeScreen()
        {
            string a;
            welcomeScreen();
            cout << "\n\nWelcome to the Library " << name << endl;

            cout<<"\n\nThese are your issued books\n\n";
            for (int i = 0; i < bookNumber; i++)
            {
                cout << bookNames[booksNum[i] - 1] << " ";
            }
            cout<<"\n\nDo you want to Return Your Books(y or n)\n\n";
            cin>>a;
            if(a=="y" || a=="Y")
            {
                cout<<"\n\nThanks for using the library\n\n";
            }
        }
};

int main()
{
    Library library;
    library.loginScreen();
    getch();
    return 0;
}