#include <iostream>
#include <istream>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <fstream>
#include "Rent.h"
#include "Book.h"
#include "Main.h"

using namespace std;


void Rent::headerCategory(){
    cout <<"\t***********************************************************************\n";
    cout <<"\t                           G O - B O O K                               \n";
    cout <<"\t***********************************************************************\n";
    cout <<"\t                    B O O K   C A T E G O R Y                          \n";
    cout <<"\t***********************************************************************\n";
    cout <<"\t      Code      ||                  Category Name                      \n";
    cout <<"\t***********************************************************************\n";
}

Cons::Cons(string cd, string ctg){
    code = cd;
    category = ctg;
    cout <<"\t       " << Cons::code << "        ||   " << Cons::category <<"\n";
}

void Rent::displayCategory(){
    Book access;
    string genre;
    Cons Cons1=Cons("F", "Fantasy\t");
    Cons Cons2=Cons("R", "Romance\t");
    Cons Cons3=Cons("H", "Horror/Creepy");
    Cons Cons4=Cons("B", "Biography\t");
    Cons Cons5=Cons("E", "Ensiklopedia");
    cout <<"\t***********************************************************************\n";
    cout <<"\tLogin Page > Main Menu > Rent > Book Catagory\n\n";
    cout <<"\tChoose the book category based on the book code = ";
    cin  >>genre;
    if(genre=="F"){
        system("cls");
        access.fantasy();
    }
    if(genre=="R"){
        system("cls");
        access.romance();
    }
    if(genre=="H"){
        system("cls");
        access.horror();
    }
    if(genre=="B"){
        system("cls");
        access.biography();
    }
    if(genre=="E"){
        system("cls");
        access.ensiklopedia();
    }
    if (genre!="F" && genre!="R" && genre!="H" && genre!="B" && genre!="E"){
        cout<<"\tYou enter code was wrong, please re-enter the code with capital\n";
        system("pause");
        system ("cls");
        headerCategory();
        displayCategory();    
    }
}

void Rent::allRent(){
    Rent access;
    system("cls");
    access.headerCategory();
    access.displayCategory();
}

void Rent::bokingBook(){
    Main include;
    string renterName, rentDay, rentedBook;
        cout <<"\tEnter your name= "; cin>>renterName;
        cout <<"\tEnter the today's date (DD/MM/YYYY)= "; cin>>rentDay;
        cin.ignore();
        cout <<"\tEnter the book title you want to rent= "; getline(cin, rentedBook);
        cout <<"\n\tThe book will expired 7 days later\n";
        cout <<"\tPay for Rp 15.000 at Go-Bank 21475357*** (p.p Go-Book)\n";
        cout <<"\n\tThank you for using our service \n\tYour rented Book has been saved in History Rent @GO-BOOK\n";
        
        ofstream outputRentBook("rentedBook.txt",ios::app);
        outputRentBook<< renterName << ' ' <<rentedBook<<' '<<rentDay<<endl;
        cout <<"\tNavigate to Main Menu\n";
        system("pause");
        include.callMenu();    
}