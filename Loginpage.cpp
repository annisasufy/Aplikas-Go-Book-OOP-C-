#include <iostream>
#include <istream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include "Register.h"
#include "Loginpage.h"

using namespace std;

void Loginpage::headerLoginpage()
{   
    cout <<"\t***********************************************************************\n";
    cout <<"\t                           G O - B O O K                            \n";
    cout <<"\t***********************************************************************\n";
    cout <<"\t                 W E L C O M E  T O  G O - B O O K                  \n";
    cout <<"\t***********************************************************************\n\n";
}

void Loginpage::userpage(){
    //laman Log In
        Register access;
        Loginpage enter;
        int akun;
        system("cls");
        headerLoginpage();
            cout <<"\t1. Login\n \t2. Register\n \t3. Change Password\n \t4. Delete Account\n \t5. Exit App\n";
            cout <<"\tEnter the choice number : ";
            cin  >>akun;
            switch(akun)
            {   case 1:
                    access.login();
                case 2:
                    access.reg();
                case 3:
                    access.changepass();
                case 4:
                    access.del();
                case 5:
                    exit( 0 );
                    break;
             }
}