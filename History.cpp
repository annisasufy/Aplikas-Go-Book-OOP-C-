#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <fstream>
#include "History.h"
#include "Rent.h"
#include "Main.h"

using namespace std;

void History::headerHistory(){
        cout <<"\t***********************************************************************\n";
        cout <<"\t                           G O - B O O K                               \n";
        cout <<"\t***********************************************************************\n";
        cout <<"\t                        H  I  S  T  O  R  Y                            \n";
        cout <<"\t***********************************************************************\n";
        cout <<"\tLogin Page > Main Menu > History \n";
}

void History::displayhistoryRent(){
        string renter, renterName;
        Main include;
        system("cls");
        headerHistory();
                cout <<"\tEnter your name (username)= "; cin>>renterName;
                ifstream history ("rentedBook.txt");
                while(getline(history, renter))
                {
                        size_t keyword=renter.find(renterName);
                        if (keyword!=string::npos){
                                if (history.is_open()){
                                        cout<<"\n\t"<<renter<<endl;
                                }
                        }
                }
                history.close();
                cout<<"\n\tNavigate to Main Menu\n\n";
                system("pause");
                include.callMenu();
}