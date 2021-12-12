#include <iostream>
#include <istream>
#include <stdlib.h>
#include <string.h>
#include "Book.h"
#include "Rent.h"

using namespace std;

void Book::headerBook(){
    system("cls");
        cout <<"\t**************************************************************************\n";
        cout <<"\t                           G O - B O O K                                  \n";
        cout <<"\t**************************************************************************\n";
        cout <<"\t                   Detail Information of the Book                         \n";
        cout <<"\t**************************************************************************\n";
        cout <<"\t                Rent price Rp 15.000 for each book                        \n";
        cout <<"\t**************************************************************************\n\n";
}

void Book::fantasy(){
    Book access;
    Rent enter;
    access.headerBook();
        cout  <<"\tLogin Page > Main Menu > Rent > Book Category > Fantasy\n\n\n";
        Bookcons f1=Bookcons("F1", "The Last Olympian (series 5 of Percy Jackson and The Olympians)");
        Bookcons f2=Bookcons("F2", "The Maze Runner");
        Bookcons f3=Bookcons("F3", "Harry Potter and The Chamber of Secrets");
        Bookcons f4=Bookcons("F4", "Bumi");
        Bookcons f5=Bookcons("F5", "Trials Of Apollo #1 The Hidden Oracle");
        cout  <<"\tNavigate:\n \t1. Previous Page (back to the category list)\n \t2. Next Page (It'll be shown the detail information of the book)\n \tEnter the choice number = ";
        cin   >>navigate;
            if (navigate==1){
                enter.allRent();      
            }
            if (navigate==2){
                access.detailF();
            }
            if (navigate!=1 && navigate!=2){
                cout<<"\tYou enter the wrong number, please re-enter the right number\n";
                system("pause");
                access.fantasy();
            }
}

void Book::romance(){
    Book access;
    Rent enter;
    access.headerBook();
        cout  <<"\tLogin Page > Main Menu > Rent > Book Category > Romance\n\n\n";
        Bookcons r1=Bookcons("R1", "Daun yang Jatuh Tidak Pernah Membenci Angin");
        Bookcons r2=Bookcons("R2", "The Book of Almost");
        Bookcons r3=Bookcons("R3", "Konspirasi Alam Semesta");
        Bookcons r4=Bookcons("R4", "Jingga dan Senja");
        Bookcons r5=Bookcons("R5", "Sunshine Becomes You");
        cout  <<"\tNavigate:\n \t1. Previous Page (back to the category list)\n \t2. Next Page (It'll be shown the detail information of the book)\n \tEnter the choice number = ";
        cin   >>navigate;
        if (navigate==1){
            enter.allRent();      
        }
        if (navigate==2){
            access.detailR();
        }
        if (navigate!=1 && navigate!=2){
            cout<<"\tYou enter the wrong number, please re-enter the right number\n";
            system("pause");
            access.romance();
        }
}

void Book::horror(){
    Book access;
    Rent enter;
    access.headerBook();
        cout  <<"\tLogin Page > Main Menu > Rent > Book Category > Horror/Creepy\n";
        Bookcons H1=Bookcons("H1", "Wingit");
        Bookcons H2=Bookcons("H2", "Kisah tanah jawa");
        Bookcons H3=Bookcons("H3", "Sewu dino");
        Bookcons H4=Bookcons("H4", "Misteri Bangku Kosong");
        Bookcons H5=Bookcons("H5", "Surat Dari Kematian");
        cout  <<"\tNavigate:\n \t1. Previous Page (back to the category list)\n \t2. Next Page (It'll be shown the detail information of the book)\n \tEnter the choice number = ";
        cin  >>navigate;
        if (navigate==1){
            enter.allRent();      
        }
        if (navigate==2){
            access.detailH();
        }
        if (navigate!=1 && navigate!=2){
            cout<<"\tYou enter the wrong number, please re-enter the right number\n";
            system("pause");
            access.horror();
        }
}

void Book::biography(){
    Book access;
    Rent enter;
    access.headerBook();
        cout  <<"\tLogin Page > Main Menu > Rent > Book Category >  Biography\n\n\n";
        Bookcons B1=Bookcons("B1", "Si Doel");
        Bookcons B2=Bookcons("B2", "Bung Karno Presiden R.I. Pertama: Dari Pencinta Seni Budaya Sampai Ahli Pidato");
        Bookcons B3=Bookcons("B3", "Buya Hamka");
        Bookcons B4=Bookcons("B4", "B. J. Habibie Si Jenius");
        Bookcons B5=Bookcons("B5", "Sang Guru- Ki Hajar Dewantara");
        cout  <<"\tNavigate:\n \t1. Previous Page (back to the category list)\n \t2. Next Page (It'll be shown the detail information of the book)\n \tEnter the choice number = ";
        cin   >>navigate;
        if (navigate==1){
            enter.allRent();      
        }
        if (navigate==2){
            access.detailB();
        }
        if (navigate!=1 && navigate!=2){
            cout<<"\tYou enter the wrong number, please re-enter the right number\n";
            system("pause");
            access.biography();
        }
}

void Book::ensiklopedia(){
    Book access;
    Rent enter;
    access.headerBook();
        cout  <<"\tLogin Page > Main Menu > Rent > Book Category > Ensiklopedia\n\n\n";
        Bookcons E1=Bookcons("E1", "Ensiklopedia Dunia Satwa");
        Bookcons E2=Bookcons("E2", "Ensiklopedia The Heritage of Batik");
        Bookcons E3=Bookcons("E3", "Wikipedia Ensiklopedia Top Dunia");
        Bookcons E4=Bookcons("E4", "Ensiklopedia Sainspedia");
        Bookcons E5=Bookcons("E5", "Ensiklopedia Geografi");
        cout  <<"\tNavigate:\n \t1. Previous Page (back to the category list)\n \t2. Next Page (It'll be shown the detail information of the book)\n \tEnter the choice number = ";
        cin   >>navigate;
        if (navigate==1){
            enter.allRent();      
        }
        if (navigate==2){
            access.detailE();
        }
        if (navigate!=1 && navigate!=2){
            cout<<"\tYou enter the wrong number, please re-enter the right number\n";
            system("pause");
            access.fantasy();
        }
}

void Book::detailF(){
    system("cls");
    Book access;
    Rent enter;
    access.headerBook();
        cout  <<"\tLogin Page > Main Menu > Rent > Book Category > Fantasy > Detail Information\n\n\n";
        Bookcons detailF1 = Bookcons("The Last Olympian (series 5 of Percy Jackson and The Olympians)", "2009", "Rick Riordan", "New York", "Disney Hyperion","F1");
        Bookcons detailF2 = Bookcons("The Maze Runner", "2009", "James Dashner", "New York", "Disney Hyperion", "F2");
        Bookcons detailF3 = Bookcons("Harry Potter and The Chamber of Secrets", "1998", "J. K. Rowling", "London", "Bloomsbury (UK)", "F3");
        Bookcons detailF4 = Bookcons("Bumi", "2016", "Tere Liye", "Jakarta", "Gramedia Pustaka Utama", "F4");
        Bookcons detailF5 = Bookcons("Trials Of Apollo #1 The Hidden Oracle", "2019", "Rick Riordan", "New York", "Hachette Book Us", "F5");
        cout  <<"\t\nIf you want to rent a book, enter the following details: \n";
        enter.bokingBook();
}

void Book::detailR(){
    system("cls");
    Book access;
    Rent enter;
    access.headerBook();
        cout  <<"\tLogin Page > Main Menu > Rent > Book Category > Fantasy > Detail Information\n\n\n";
        Bookcons detailR1 = Bookcons("Daun yang Jatuh Tidak Pernah Membenci Angin", "2014", "Tere Liye", "Jakarta", "Gramedia", "R1");
        Bookcons detailR2 = Bookcons("The Book of Almost", "2018", "Brian Khrisna", "Jakarta", "Mediakita", "R2");
        Bookcons detailR3 = Bookcons("Konspirasi Alam Semesta", "2017", "Fiersa Bersari", "Jakarta", "Mediakita", "R3");
        Bookcons detailR4 = Bookcons("Jingga dan Senja", "2010", "Esti Kinasih", "Jakarta", "Gramedia Pustaka Utama", "R4");
        Bookcons detailR5 = Bookcons("Sunshine Becomes You", "2012", "Ilana Tan", "Jakarta", "Gramedia Pustaka Utama", "R5");
        cout  <<"\t\nIf you want to rent a book, enter the following details: \n";
        enter.bokingBook();
}

void Book::detailH(){
    system("cls");
    Book access;
    Rent enter;
    access.headerBook();
        cout  <<"\tLogin Page > Main Menu > Rent > Book Category > Fantasy > Detail Information\n\n\n";
        Bookcons detailH1 = Bookcons("Wingit", "2020", "Sara Wijiyanto", "Jakarta", "Gramedia", "H1");
        Bookcons detailH2 = Bookcons("Kisah tanah jawa ", "2018", "Mada Zidan, Bonaventura D Genta, Hari Hao ", "Yogyakarta", "Gagas media","H2");
        Bookcons detailH3 = Bookcons("Sewu dino", "2019", "Simpleman", "Jakarta", "Bukune", "H3");
        Bookcons detailH4 = Bookcons("Misteri Bangku Kosong", "2006", "Ruwi Meita", "Yogyakarta", "Gagas media","H4");
        Bookcons detailH5 = Bookcons("Surat Dari Kematian", "2018", "Adham T Fusama", "Bandung", "Falcon Publishing","H4");
        cout  <<"\t\nIf you want to rent a book, enter the following details: \n";
        enter.bokingBook();
}

void Book::detailB(){
    system("cls");
    Book access;
    Rent enter;
    access.headerBook();
        cout  <<"\tLogin Page > Main Menu > Rent > Book Category > Fantasy > Detail Information\n\n\n";
        Bookcons detailB1 = Bookcons("Si Doel", "2016", "Rano Karno", "Jakarta", "Gramedia Pustaka Utama", "B1");
        Bookcons detailB2 = Bookcons("Bung Karno Presiden R.I. Pertama: Dari Pencinta Seni Budaya Sampai Ahli Pidato", "1999", "Yant Kaiy, Ida Cynthia", "Jakarta", "Papas Sinar Sinanti","B2");
        Bookcons detailB3 = Bookcons("Buya Hamka", "2018", "Haidar Musyafa", "Bandung", "IRCiSoD","B3");
        Bookcons detailB4 = Bookcons("B. J. Habibie Si Jenius", "2017", "JonarT.H. Situmorang, M.a", "Yogyakarta", "Gramedia","B4");
        Bookcons detailB5 = Bookcons("Sang Guru- Ki Hajar Dewantara", "2015", "Haidar Musyafa", "Semarang", "Imania","B5");
        cout  <<"\t\nIf you want to rent a book, enter the following details: \n";
        enter.bokingBook();
}

void Book::detailE(){
    system("cls");
    Book access;
    Rent enter;
    access.headerBook();
        cout  <<"\tLogin Page > Main Menu > Rent > Book Category > Fantasy > Detail Information\n\n\n";
        Bookcons detailE1 = Bookcons("Ensiklopedia Dunia Satwa", "2015", "John Woodward", "Jakarta", "Bhuana Ilmu Populer","E1");
        Bookcons detailE2 = Bookcons("Ensiklopedia The Heritage of Batik", "2021", "Yohanes Primus Supriono", "Yogyakarta", "Andi Publisher","E2");
        Bookcons detailE3 = Bookcons("Wikipedia Ensiklopedia Top Dunia", "2021", "Tony Hendroyono", "Yogyakarta", "Andi Publisher","E3");
        Bookcons detailE4 = Bookcons("Ensiklopedia Sainspedia", "2017", "Patricia Daniels", "Jakarta", "Kepustakaan Populer Gramedia","E4");
        Bookcons detailE5 = Bookcons("Ensiklopedia Geografi", "2014", "Usborne", "Jakarta", "Bhuana Ilmu Populer","E5");
        cout  <<"\t\nIf you want to rent a book, enter the following details: \n";
        enter.bokingBook();
}
    
Bookcons::Bookcons(string cd, string jud){
    code=cd;
    judul=jud;
    cout<<"\t"<<Bookcons::code<<"\t"<<Bookcons::judul<<endl<<endl;
}

Bookcons::Bookcons(string inputJudul, string inputTahunterbit, string inputPenulis, string inputKotaterbit, string inputPenerbit, string inputKode){
    Title       = inputJudul;
    Tahunterbit = inputTahunterbit;
    Penulis     = inputPenulis;
    kotaterbit  = inputKotaterbit;
    Penerbit    = inputPenerbit;
    Kode        = inputKode;

    cout <<"\n\tTitle\t\t  : "<< Title <<endl;
    cout << "\tPublication Year  : "<<Tahunterbit <<endl;
    cout << "\tWriter\t\t  : "<<Penulis <<endl;
    cout << "\tPublicatioln City : "<<kotaterbit <<endl;
    cout << "\tPublisher\t  : "<<Penerbit <<endl;
    cout << "\tKode\t\t  : " << Kode <<endl;
}