#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class login{ //login prompt to choose between logging in as admin or customer; also able to end the program

    private:
    int loginc;

    public:
    void display()
    {
    cout<<endl<<endl;
    cout<<"                                                                                                         /\\                                          "<<endl;
    cout<<"                                                                                                    /\\  //\\\\                                       "<<endl;
    cout<<"                                                                                             /\\    //\\\\///\\\\\\        /\\                        "<<endl;
    cout<<"                                                                                            //\\\\  ///\\////\\\\\\\\  /\\  //\\\\                    "<<endl;
    cout<<"                                                                               /\\          /  ^ \\/^ ^/^  ^  ^ \\/^ \\/  ^ \\                        "<<endl;
    cout<<"                                                                              / ^\\    /\\  / ^   /  ^/ ^ ^ ^   ^\\ ^/  ^^  \\                        "<<endl;
    cout<<"                                                                             /^   \\  / ^\\/ ^ ^   ^ / ^  ^    ^  \\/ ^   ^  \\       *               "<<endl;
    cout<<"                                                                            /  ^ ^ \\/^  ^\\ ^ ^ ^   ^  ^   ^   ____  ^   ^  \\     /|\\              "<<endl;
    cout<<"                                                                           / ^ ^  ^ \\ ^  _\\___________________|  |_____^ ^  \\   /||o\\             "<<endl;
    cout<<"                                                                          / ^^  ^ ^ ^\\  /______________________________\\ ^ ^ \\ /|o|||\\            "<<endl;
    cout<<"                                                                         /  ^  ^^ ^ ^  /________________________________\\  ^  /|||||o|\\             "<<endl;
    cout<<"                                                                        /^ ^  ^ ^^  ^    ||___|___||||||||||||___|__|||      /||o||||||\\             "<<endl;
    cout<<"                                                                       / ^   ^   ^    ^  ||___|___||||||||||||___|__|||          | |                  "<<endl;
    cout<<"                                                                      / ^ ^ ^  ^  ^  ^   ||||||||||||||||||||||||||||||oooooooooo| |ooooooo           "<<endl;
    cout<<"                                                                      ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo           "<<endl<<endl<<endl; 
    
    
    cout<<"                                                                    _.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._         "<<endl;
    cout<<"                                                                 .-'---      - ---     --     ---   -----   - --       ----  ----   -     ---`-.      "<<endl;
    cout<<"                                                                  )                            MUERTE A LOS VIAJEROS                          (       "<<endl;
    cout<<"                                                                 (                                                                             )      "<<endl;
    cout<<"                                                                  )                                 WELCOME !!!!                              (       "<<endl;
    cout<<"                                                                 (                                                                             )      "<<endl;
    cout<<"                                                                  )                                                             (`-._o_.-')   (       "<<endl;
    cout<<"                                                                 (              Enter 0 for Administator                         (`- | -')     )      "<<endl;
    cout<<"                                                                  )             Enter 1 for Customer                              `-.|.-'     (       "<<endl;
    cout<<"                                                                 (                                                                  o|o        )      "<<endl;
    cout<<"                                                                  )                                                                ( | )      (       "<<endl;
    cout<<"                                                                 (                                                                  `!'        )      "<<endl;
    cout<<"                                                                  )                                                                 (|)       (       "<<endl;
    cout<<"                                                                 (                                                                   X         )      "<<endl;
    cout<<"                                                                  )                                                                 (|)       (       "<<endl;
    cout<<"                                                                 (                                                                  '|`        )      "<<endl;
    cout<<"                                                                  )    Enter 2 to Quit.                                                       (       "<<endl;
    cout<<"                                                                 (___       _       _       _       _       _       _       _       _       ___)      "<<endl;
    cout<<"                                                                     (__  _) ( __ _) (__  _) (__ _ ) `-._.-' ( _ __) (_  __) (_ __ ) (_  __)          "<<endl;
    cout<<"                                                                     ( _ __) (_  __) (__ __) `-._.-'         `-._.-' (__ __) (__  _) (__ _ )          "<<endl;
    cout<<"                                                                     (__  _) (_ _ _) `-._.-'                         `-._.-' (_ _ _) (_  __)          "<<endl;
    cout<<"                                                                     (_ ___) `-._.-'                                         `-._.-' (___ _)          "<<endl;
    cout<<"                                                                     `-._.-'                                                         `-._.-'          "<<endl;
    cout<<"                                                                                                     Login : ";
    cin >> loginc;
    cout<<endl<<endl;    
    }

    int setdata() //returning choice chosen in loginc back to main
    {
        return loginc;
    }
    
};

class packages{ 
    private:
    float price;
    string loc;
    int day;
    char cont;
    int lock = 0, startdate;
    int date[30] = {0};

    public:
    void disp() //displaying packages and its info
    {
        cout<<"                                                                                    .==-=-==--=---=-=-==--=-=-=-=-=-=-=-=-."<<endl; 
        cout<<"                                                                                    |    " << setw(30) << left <<loc<<"   |"<<endl;
        cout<<"                                                                                    |    RM " << setw(28) << left << fixed << setprecision(2)<<price<<"  |"<<endl;
        cout<<"                                                                                    |    Duration : " << setw(20) << left << day << "  |"<<endl;
        cout<<"                                                                                    *_____________________________________*"<<endl<<endl;  
    }

    void dispCust() //displaying custom and its info
    {
        cout<<"                                                                                    .==-=-==--=---=-=-==--=-=-=-=-=-=-=-=-."<<endl;
        cout<<"                                                                                     )    " << setw(26) << left << loc <<"       )" << endl;
        cout<<"                                                                                    (     RM " << fixed << setprecision(2) << price << " per day "<< setw(15) << right << " (" << endl; 
        cout<<"                                                                                    *_____________________________________*"<<endl<<endl;  
    }

    char add() //adding items
    {
    
            cout << "                                                                                    Location : ";
            cin.ignore();
            getline(cin, loc);
            cout << "                                                                                    Price : ";
            cin >> price;
            cout << "                                                                                    Duration : ";
            cin >> day;
            
            cout << "                                                                                    Do you wish to add more packages? (Y/N): ";
            cin >> cont;

            return cont;
    
    } 

    char addC() //adding items
    {
    
            cout << "                                                                                    Location : ";
            cin.ignore();
            getline(cin, loc);
            cout << "                                                                                    Price : ";
            cin >> price;
            
            cout << "                                                                                    Do you wish to add more packages? (Y/N): ";
            cin >> cont;

            return cont;
    
    } 

    ~packages() //destructor
    {
        cout << "Memory cleared" << endl;
    }

    friend class customer;
    friend class deleteshop;
    friend class defPack;
    friend class edit;
    friend class defCust;

};

class defPack{ //default preset packages
    public:

    void setdata(class packages x[])
    {
        x[0].loc = "Manila and Boracay";
        x[0].price = 1500;
        x[0].day = 5;
        x[1].loc = "Kuala Lumpur";
        x[1].price = 200;
        x[1].day = 2;
        x[2].loc = "Antartica and North Pole";
        x[2].price = 1000;
        x[2].day = 4;
        x[3].loc = "Saudi Arabia";
        x[3].price = 750;
        x[3].day = 4;
    }

    
};


class defCust{ //default preset custom locations
    public:
    void setdata(class packages a[])
    {
        a[0].loc = "Penang";
        a[0].price = 50;
        a[1].loc = "Kuala Lumpur";
        a[1].price = 75;
        a[2].loc = "Atlantis";
        a[2].price = 600;

    }
};


class deleteshop //base class deleteshop
{
    private:
    int delchoice;

    public:
    
    int delDisp()
    { 
    cout<<endl<<endl;
    cout<<"                                                                           _.-=-._.-=-._.-=-._.-=-._.-=-=-=-._.-=-._.-=-._.-=-._.-=-._              "<<endl;
    cout<<"                                                                        .-'---   - ---    --     ---  -----   - --      ----  ---- ---'-.           "<<endl;
    cout<<"                                                                         )                    MUERTE A LOS VIAJEROS                    (            "<<endl;
    cout<<"                                                                        (      Admin Prompt                                             )           "<<endl;
    cout<<"                                                                         )                                            (`-._o_.-')      (            "<<endl;
    cout<<"                                                                        (                                              `--.|.--'        )           "<<endl;
    cout<<"                                                                         )      1. Package                               ( | )         (            "<<endl;
    cout<<"                                                                        (       2. Custom                                 (|)           )           "<<endl;
    cout<<"                                                                         )                                                (|)          (            "<<endl;
    cout<<"                                                                        (                                                 '|`           )           "<<endl;
    cout<<"                                                                         )                                                             (            "<<endl;
    cout<<"                                                                        (    0. Log Out                                                 )           "<<endl;
    cout<<"                                                                        (___        _       _       _        _         _       _     ___)           "<<endl;
    cout<<"                                                                             ( __ _) (__  _) (__ _ ) `-._.-' ( _ __) (_  __) (_ __ )                "<<endl;
    cout<<"                                                                             (_  __) (__ __) `-._.-'         `-._.-' (__ __) (__  _)                "<<endl;
    cout<<"                                                                             (_ _ _) `-._.-'                         `-._.-' (_ _ _)                "<<endl;
    cout<<"                                                                             `-._.-'                                         `-._.-'                "<<endl<<endl;
    cout<<"                                                                                               Enter your option : ";
    cin >> delchoice;  
        
    return delchoice;
    }

    int nDelprompt(int x)
    {
        int nDel = 0;
        if(x == 0) //when there are no items to delete
        {
            cout << "                                                                                    There are no items to delete\n\n\n";
        }

        else{
        
        cout << "                                                                              Enter the number of the item you would like to delete: ";
            cin >> nDel; //prompt the user to enter the number of the item they would like to delete
        }

        

            return nDel;
    }

    int packdelete(int n, int nDel, class packages b[]) //function to delete items
    {
        int j;
        
        if(n != 0)
        {
            
        
            

            if (b[nDel - 1].lock == 0) //when item is not locked
            {
            b[nDel - 1] = {}; //delete item chosen by user
            

            for (j = nDel; j < n; j++)
            {
                b[j - 1] = b[j]; //shift all items below deleted item up
                
            }

           
            cout << "                                                                                    Object successfully deleted\n\n";
            --n; //reduce number of items in array by 1
            }

            else if (b[nDel - 1].lock == 1) //when payment has begun and full amount not given items will be locked and the user will be unable to remove them
            {
                cout << "                                                                                    Item locked";
            }
                
        }


        return n;
    }
    
};

class edit{ //edit function
    private: 
    int epp;
    int nEdit;

    public:

    void editprompt()
    {
        
        
        cout << "                                                                              Enter the number of the package you would like to edit: ";
        cin >> nEdit;

    }

    void editPromptPack()
    {
    cout<<endl;
    cout<<"                                                                           _.-=-._.-=-._.-=-._.-=-._.-=-=-=-._.-=-._.-=-._.-=-._.-=-._              "<<endl;
    cout<<"                                                                        .-'---   - ---    --     ---  -----   - --      ----  ---- ---'-.           "<<endl;
    cout<<"                                                                         )                                MUERTE A LOS VIAJEROS        (            "<<endl;
    cout<<"                                                                        (                                                               )           "<<endl;
    cout<<"                                                                         )                                            (`-._o_.-')      (            "<<endl;
    cout<<"                                                                        (        1. Edit Location                      `--.|.--'        )           "<<endl;
    cout<<"                                                                         )       2. Edit Price                           ( | )         (            "<<endl;
    cout<<"                                                                        (        3. Edit Duration                         (|)           )           "<<endl;
    cout<<"                                                                         )       4. Edit Whole Package                    (|)          (            "<<endl;
    cout<<"                                                                        (                                                 '|`           )           "<<endl;
    cout<<"                                                                         )       0. Return                                             (            "<<endl;
    cout<<"                                                                        (                                                               )           "<<endl;
    cout<<"                                                                        (___        _       _       _        _         _       _     ___)           "<<endl;
    cout<<"                                                                             ( __ _) (__  _) (__ _ ) `-._.-' ( _ __) (_  __) (_ __ )                "<<endl;
    cout<<"                                                                             (_  __) (__ __) `-._.-'         `-._.-' (__ __) (__  _)                "<<endl;
    cout<<"                                                                             (_ _ _) `-._.-'                         `-._.-' (_ _ _)                "<<endl;
    cout<<"                                                                             `-._.-'                                         `-._.-'                "<<endl<<endl;
    cout<<"                                                                                              Enter your option : ";

    cin >> epp;
    }

    void packEdit(int n, class packages p[]) //function to edit items
    {
        int i;


        if (n != 0)
        {
            if (p[nEdit - 1].lock == 0) //when item is not locked
            {
                do{
                editPromptPack(); 
                switch(epp)
                {
                case 1: //edit only the location
                {
                    cout << "                                                                                    Location: ";
                    cin.ignore();
                    getline(cin, p[nEdit - 1].loc);
                    
                }
                break;

                case 2: //edit only the price
                cout << "                                                                                    Price: ";
                cin >> p[nEdit - 1].price;
                break;

                case 3: //edit only the duration
                cout << "                                                                                    Duration: ";
                cin >> p[nEdit - 1].day;
                break;

                case 4: //edit all values of the item
                cout << "                                                                                    Location: ";
                cin.ignore();
                cin >> p[nEdit - 1].loc;

                cout << "                                                                                    Price: ";
                cin >> p[nEdit - 1].price;

                cout << "                                                                                    Duration: ";
                cin >> p[nEdit - 1].day;
                break;

                }
                }while(epp != 0);
            }

            else 
            {cout << "                                                                                    Package Locked";} 
        }

        else if (n == 0)
        {
            cout << "                                                                                    There are no packages to edit\n\n\n";
        }
    }
    

};

class admin: public deleteshop{ //derived object of class deleteshop
    private:
    int choice, z, pass, choose;
    char c;
    edit adEdit;
    login templog;
    deleteshop del;//base class as an object
    public:
    
    int password() //prompt user for admin password
    {
        cout << "                                                                                    Enter admin password: ";
        cin >> pass;

        return pass;
    }



    void maindisp() //main display
    {
    cout<<endl<<endl;
    cout<<"                                                                           _.-=-._.-=-._.-=-._.-=-._.-=-=-=-._.-=-._.-=-._.-=-._.-=-._              "<<endl;
    cout<<"                                                                        .-'---   - ---    --     ---  -----   - --      ----  ---- ---'-.           "<<endl;
    cout<<"                                                                         )                    MUERTE A LOS VIAJEROS                    (            "<<endl;
    cout<<"                                                                        (                                                               )           "<<endl;
    cout<<"                                                                         )       1. Add Item                      (`-._o_.-')          (            "<<endl;
    cout<<"                                                                        (        2. Edit Item                      `--.|.--'            )           "<<endl;
    cout<<"                                                                         )       3. Delete Item                      ( | )             (            "<<endl;
    cout<<"                                                                        (                                             (|)               )           "<<endl;
    cout<<"                                                                         )                                            (|)              (            "<<endl;
    cout<<"                                                                        (                                             '|`               )           "<<endl;
    cout<<"                                                                         )       0. Return                                             (            "<<endl;
    cout<<"                                                                        (                                                               )           "<<endl;
    cout<<"                                                                        (___        _       _       _        _         _       _     ___)           "<<endl;
    cout<<"                                                                             ( __ _) (__  _) (__ _ ) `-._.-' ( _ __) (_  __) (_ __ )                "<<endl;
    cout<<"                                                                             (_  __) (__ __) `-._.-'         `-._.-' (__ __) (__  _)                "<<endl;
    cout<<"                                                                             (_ _ _) `-._.-'                         `-._.-' (_ _ _)                "<<endl;
    cout<<"                                                                             `-._.-'                                         `-._.-'                "<<endl;
    cout<<"                                                                                              Enter your choice: ";
    cin >> choice; 

    }

    int pacOrCus() //prompt user choose to access package or custom list
    {
        choose = del.delDisp();
        return choose;
    }

    int returndata() //returning choice of main display back to main
    {
        return choice;
    }

    
    int returndata2() //returning updated amount of items back to main
    {
        return z;
    }

    void setdata(int a) //initialising the amount of items that already exist
    {
        z = a;
    }

    void choosePack(class packages x[], int y) //function to either add, edit or delete an item
    {
        int nDel1;
        switch (y)
        {
          case 1: //adding an item
        do
        {
            c = x[z].add();
            ++z;

        } while (c == 'Y' || c == 'y');
        break;
          case 2: //editing an item
        adEdit.editprompt();
        adEdit.packEdit(z, x);
        break;
          case 3: //deleting an item

          nDel1 = nDelprompt(z);
          z = packdelete(z, nDel1, x);
          
          break;
        }
    }

    void chooseCust(class packages x[], int y) //function to either add, edit or delete an item
    {
        int nDel1;
        switch (y)
        {
          case 1: //adding an item
        do
        {
            c = x[z].addC();
            ++z;

        } while (c == 'Y' || c == 'y');
        break;
          case 2: //editing an item
        adEdit.editprompt();
        adEdit.packEdit(z, x);
        break;
          case 3: //deleting an item

          nDel1 = nDelprompt(z);
          z = packdelete(z, nDel1, x);
          
          break;
        }
    }

        
};


class customer: public deleteshop{ //derived class of class deleteshop
    private:
    int n, i, nc, m = 0, c, sdc, nDel;
    packages *x = new packages[8]; //packages available
    packages *bp = new packages[10]; //bought packages
    packages *z = new packages[8]; //locations available
    int sel, startdate;
    char cont;
    float total = 0, pay = 0, ppay, recTotal = 0;
    int date[30] = {0};
    string name;
    string calen[30];
    
    

    public:
    int opt;
    void mainDis()
    {
    cout<<endl;
    cout<<"                                                                           _.-=-._.-=-._.-=-._.-=-._.-=-=-=-._.-=-._.-=-._.-=-._.-=-._              "<<endl;
    cout<<"                                                                        .-'---   - ---    --     ---  -----   - --      ----  ---- ---'-.           "<<endl;
    cout<<"                                                                         )                    MUERTE A LOS VIAJEROS                    (            "<<endl;
    cout<<"                                                                        (                                                               )           "<<endl;
    cout<<"                                                                         )       1. Packages                          (`-._o_.-')      (            "<<endl;
    cout<<"                                                                        (        2. Custom                             `--.|.--'        )           "<<endl;
    cout<<"                                                                         )       3. Shopping Cart                        ( | )         (            "<<endl;
    cout<<"                                                                        (        4. Calendar                              (|)           )           "<<endl;
    cout<<"                                                                         )       5. Log out                               (|)          (            "<<endl;
    cout<<"                                                                        (                                                 '|`           )           "<<endl;
    cout<<"                                                                         )                                                             (            "<<endl;
    cout<<"                                                                        (                                                               )           "<<endl;
    cout<<"                                                                        (___        _       _       _        _         _       _     ___)           "<<endl;
    cout<<"                                                                             ( __ _) (__  _) (__ _ ) `-._.-' ( _ __) (_  __) (_ __ )                "<<endl;
    cout<<"                                                                             (_  __) (__ __) `-._.-'         `-._.-' (__ __) (__  _)                "<<endl;
    cout<<"                                                                             (_ _ _) `-._.-'                         `-._.-' (_ _ _)                "<<endl;
    cout<<"                                                                             `-._.-'                                         `-._.-'                "<<endl<<endl;
    cout<<"                                                                                               Enter your option : ";
    cin>>opt;  
    cout<<endl<<endl;
    }

    void getname() //prompt user for their name
    {
        cout << "                                                                                    Customer Name : ";
        cin.ignore();
        getline(cin, name);
    }
    
    void choice() //outcome of what option is chosen in mainDis()
    {

        switch (opt)
        {
            case 1 : //adding packages
            for (i = 0; i < n; i++)
            {
                x[i].disp();
            }

            cout<<endl;
            cout<<"                                                                           _.-=-._.-=-._.-=-._.-=-._.-=-=-=-._.-=-._.-=-._.-=-._.-=-._              "<<endl;
            cout<<"                                                                        .-'---   - ---    --     ---  -----   - --      ----  ---- ---'-.           "<<endl;
            cout<<"                                                                        (                      MUERTE A LOS VIAJEROS                    )            "<<endl;
            cout<<"                                                                         )                                            (`-._o_.-')      (            "<<endl;
            cout<<"                                                                        (        Enter 0 to return to Main Menu        `--.|.--'        )           "<<endl;
            cout<<"                                                                         )                                               ( | )         (            "<<endl;
            cout<<"                                                                        (        Please select a Package                  (|)           )           "<<endl;
            cout<<"                                                                         )         < 1 / 2 / 3 / 4 ..>                    (|)          (            "<<endl;
            cout<<"                                                                        (___        _       _       _        _         _  '|`  _     ___)           "<<endl;
            cout<<"                                                                             ( __ _) (__  _) (__ _ ) `-._.-' ( _ __) (_  __) (_ __ )                "<<endl;
            cout<<"                                                                             (_  __) (__ __) `-._.-'         `-._.-' (__ __) (__  _)                "<<endl;
            cout<<"                                                                             (_ _ _) `-._.-'                         `-._.-' (_ _ _)                "<<endl;
            cout<<"                                                                             `-._.-'                                         `-._.-'                "<<endl<<endl;
            cout<<"                                                                                                    Package : ";
            cin >> sel;
            cout<<endl;

            if(sel != 0)
            {
                total = 1; //temp value for total
                bp[m] = x[sel - 1]; //adding selected package into shopping cart
                
                bp[m].startdate = dateselect(); //asking for date of departure
                ++m;

                
            }

            
            
            break;

            case 2: //adding custom locations
            for (i = 0; i < nc; i++)
            {
                z[i].dispCust();
            }

            cout<<endl;
            cout<<"                                                                           _.-=-._.-=-._.-=-._.-=-._.-=-=-=-._.-=-._.-=-._.-=-._.-=-._              "<<endl;
            cout<<"                                                                        .-'---   - ---    --     ---  -----   - --      ----  ---- ---'-.           "<<endl;
            cout<<"                                                                        (                      MUERTE A LOS VIAJEROS                    )            "<<endl;
            cout<<"                                                                         )                                            (`-._o_.-')      (            "<<endl;
            cout<<"                                                                        (        Enter 0 to return to Main Menu        `--.|.--'        )           "<<endl;
            cout<<"                                                                         )                                               ( | )         (            "<<endl;
            cout<<"                                                                        (        Please select a Location                 (|)           )           "<<endl;
            cout<<"                                                                         )           < 1 / 2 / 3 >                        (|)          (            "<<endl;
            cout<<"                                                                        (___        _       _       _        _         _  '|`  _     ___)           "<<endl;
            cout<<"                                                                             ( __ _) (__  _) (__ _ ) `-._.-' ( _ __) (_  __) (_ __ )                "<<endl;
            cout<<"                                                                             (_  __) (__ __) `-._.-'         `-._.-' (__ __) (__  _)                "<<endl;
            cout<<"                                                                             (_ _ _) `-._.-'                         `-._.-' (_ _ _)                "<<endl;
            cout<<"                                                                             `-._.-'                                         `-._.-'                "<<endl<<endl;
            cout<<"                                                                                                   Location : ";
            cin >> sel;
            cout<<endl;

            if (sel != 0)
            {
                total = 1; //temp value for total
                bp[m] = z[sel - 1]; //adding selected location to shopping cart
                cout << "                                                                                    Please select the duration: ";
                cin >> bp[m].day;
                bp[m].price = bp[m].price * bp[m].day; //price of custom locations depend on the price per day of the location and the duration selected by the user

                bp[m].startdate = dateselect(); //locking in the dates chosen
                ++m;
            }
            break;

            case 3: //checking shopping cart

        cout <<"                                                                                _______________________________________________________         "<<endl;
        cout <<"                                                                              /\\                                                      \\        "<<endl;
        cout <<"                                                                          (O)===)><><><><><><><><><><><><><><><><><><><><><><><><><><><)==(O)  "<<endl;
        cout <<"                                                                              \\/''''''''''''''''''''''''''''''''''''''''''''''''''''''/        "<<endl;
        cout <<"                                                                              (                 MUERTE A LOS VIAJEROS                (         "<<endl;
        cout <<"                                                                               )                     < Shopping Cart >                )"  <<endl;
        cout <<"                                                                              (     Name : " << setw(30) << left << name <<"            ("<<endl;
        cout <<"                                                                               )______________________________________________________)" <<endl;
        cout <<"                                                                              (                                                      (" << endl;

        shopdisplay();
    
        cout <<"                                                                              (                                                      (        "<<endl;
        cout <<"                                                                               )                                                      )         "<<endl;
        cout <<"                                                                              /\\''''''''''''''''''''''''''''''''''''''''''''''''''''''\\        "<<endl;
        cout <<"                                                                          (O)===)><><><><><><><><><><><><><><><><><><><><><><><><><><><)==(O)  "<<endl;
        cout <<"                                                                              \\/______________________________________________________/        "<<endl;
            totalCalc();
            sdcDisp();
            
            if(sdc == 1) //when sdc is 1 delete an item from shopping cart
            {
            do{ 
            
            
            nDel = nDelprompt(m); //delete functions
            datedelete();
            m = packdelete(m, nDel, bp);
            
            cout << "                                                                                    Continue? : ";
                cin >> cont;

                if(cont == 'y')
                {
                shopdisplay(); //display updated shopping cart
                }
            
            } while (cont == 'y');
            }

            else if(sdc == 2) //when sdc is 2 proceed to payment
            {
                payment();
                totalCalc();
            }
            

            
            break;

            case 4: //display calendar to check which days are booked and which aren't
            datedisp();
            break;

            case 5: //log out
            if(total != 0) //when payment not completed, log out is not permitted
        {
            cout<<endl;
            cout<< "                                                                                       You have not complete your payment!!!!"<<endl<<endl;
        }
            break;
        }


  
    }


    
    void setdata(class packages o[], class packages y[], int j, int r) //initialising values from main to this class
    {
        x = y; //set package array to this class' array
        n = j; //set count of current amount of packages
        z = o; //set custo array to this class' array
        nc = r; //set count of current amount of custom locations
    }

    void shopdisplay() //shopping cart display
    {
    

        for (i = 0; i < m; i++)
        {
        cout <<"                                                                               )  " << i + 1  << ". "<< setw(43) << left << bp[i].loc <<"      )" << endl;
        cout <<"                                                                              (      Price: RM " << setw(32) << left << bp[i].price <<"      (" << endl;
        cout <<"                                                                               )     Date of Departure: " << setw(28) << left << bp[i].startdate <<"  )" << endl;
        cout <<"                                                                              (      Duration (days): " << setw(30) << left << bp[i].day <<" (" << endl; 
        cout <<"                                                                               )                                                      )" << endl;
        }
    }


    void sdcDisp() //shopping cart options
    {
    cout<<endl<<endl<<endl;
    cout<<"                                                                           _.-=-._.-=-._.-=-._.-=-._.-=-=-=-._.-=-._.-=-._.-=-._.-=-._              "<<endl;
    cout<<"                                                                        .-'---   - ---    --     ---  -----   - --      ----  ---- ---'-.           "<<endl;
    cout<<"                                                                         )                                MUERTE A LOS VIAJEROS        (            "<<endl;
    cout<<"                                                                        (                         Shopping Cart                         )           "<<endl;
    cout<<"                                                                         )                                            (`-._o_.-')      (            "<<endl;
    cout<<"                                                                        (        1. Delete                             `--.|.--'        )           "<<endl;
    cout<<"                                                                         )       2. Proceed to Payment                   ( | )         (            "<<endl;
    cout<<"                                                                        (           (You can add more packages but        (|)           )           "<<endl;
    cout<<"                                                                         )           current packages will be locked      (|)          (            "<<endl;
    cout<<"                                                                        (            and cannot be removed!)              '|`           )           "<<endl;
    cout<<"                                                                         )                                                             (            "<<endl;
    cout<<"                                                                        (                                                               )           "<<endl;
    cout<<"                                                                         )       0. Return                                             (            "<<endl;
    cout<<"                                                                        (___        _       _       _        _         _       _     ___)           "<<endl;
    cout<<"                                                                             ( __ _) (__  _) (__ _ ) `-._.-' ( _ __) (_  __) (_ __ )                "<<endl;
    cout<<"                                                                             (_  __) (__ __) `-._.-'         `-._.-' (__ __) (__  _)                "<<endl;
    cout<<"                                                                             (_ _ _) `-._.-'                         `-._.-' (_ _ _)                "<<endl;
    cout<<"                                                                             `-._.-'                                         `-._.-'                "<<endl<<endl;
    cout<<"                                                                                              Enter your option : ";
    cin>>sdc;
    }


    void totalCalc() //calculating the total amount owed
    {   
        total = 0;
        for (i = 0; i < m; i++)
        {   
            total += bp[i].price; //total amount
        }

        recTotal = total;
        total = total - pay; //outstanding amount



        cout << "                                                                                      Total amount needed to be paid: RM " << total << endl;
    }

    void payment()//payment function
    {
        cout<<endl;
        cout << "                                                                                         Enter amount to pay: RM ";
        cin >> ppay; //amount to pay

        pay += ppay; //paid amount including from previous payments

        for (i = 0; i < m; i++)
        {
            bp[i].lock = 1; //locks the packages currently in the shopping cart after payment is requested
        }

        
    }


    int dateselect() //selecting the date of departure
    {
        int book1;
        cout << endl <<  "                                                                                            Please select the date: ";
        cin >> startdate;


           book1 = datedetect();

            while (book1 == 1) //when there is a clash between the date selected and the dates already booked
            {
            {
            cout << endl;
            cout << "                                                                                      Date already booked, please select another date: ";
            cin >> startdate;

            book1 = datedetect();
            }
            }

            
            for(i = startdate - 1; i < startdate + bp[m].day - 1; i++)
            {
                date[i] = 1; //booking the dates based on the duration and start date selected by the user
                bp[m].date[i] = 1; //the date of the specific packages, set to a separate array so when deleting can free up the specific date
            }
            
        return startdate;
           
     }


    int datedetect() //detecting if the date requested by user is already booked
    {
        int book = 0;
        for(i = startdate - 1; i < startdate + bp[m].day - 1; i++)
        {
            if(date[i] == 1)
            {
                book = 1; //0 = free date; 1 = already booked
            }

        }
        return book;
    }

    void datedelete() //deleting the dates that is booked under the deleted item
    {
        for(i = 0; i < 30; i++)
        {
            if(bp[nDel - 1].date[i] == date[i]) //when the day the package being deleted is booked for is equals to the main calendar
            {
                date[i] = 0; //free up the date booked for package being deleted

            }
        }
    }

    void datedisp() //displaying which days are free and which aren't
    {
        for (i = 0; i < 30; i++)
        {
            
            if(date[i] == 0)
            {
                calen[i] = "Free";
            }

            else
            {calen[i] = "Book";}

            
        }
        cout<<endl<<endl;
        cout<<"                                                                                  1. "<<calen[0]<<"             2. "<<calen[1]<<"             3. "<<calen[2]<<endl;
        cout<<"                                                                                  4. "<<calen[3]<<"             5. "<<calen[4]<<"             6. "<<calen[5]<<endl;
        cout<<"                                                                                  7. "<<calen[6]<<"             8. "<<calen[7]<<"             9. "<<calen[8]<<endl;                                                                    
        cout<<"                                                                                 10. "<<calen[9]<<"            11. "<<calen[10]<<"            12. "<<calen[11]<<endl;
        cout<<"                                                                                 13. "<<calen[12]<<"            14. "<<calen[13]<<"            15. "<<calen[14]<<endl;
        cout<<"                                                                                 16. "<<calen[15]<<"            17. "<<calen[16]<<"            18. "<<calen[17]<<endl;
        cout<<"                                                                                 19. "<<calen[18]<<"            20. "<<calen[19]<<"            21. "<<calen[20]<<endl;
        cout<<"                                                                                 22. "<<calen[21]<<"            23. "<<calen[22]<<"            24. "<<calen[23]<<endl;
        cout<<"                                                                                 25. "<<calen[24]<<"            26. "<<calen[25]<<"            27. "<<calen[26]<<endl;
        cout<<"                                                                                 29. "<<calen[27]<<"            29. "<<calen[28]<<"            30. "<<calen[29]<<endl;
        cout<<endl<<endl;
    }

    void receipt() //printing receipt
    {
    cout<<"                                                                                                               .''.                      "<<endl;
    cout<<"                                                                                     .''.             *''*    :_\\/_:     .               "<<endl;
    cout<<"                                                                                    :_\\/_:   .    .:.*_\\/_*   : /\\ :  .'.:.'.            "<<endl;
    cout<<"                                                                                .''.: /\\ : _\\(/_  ':'* /\\ *  : '..'.  -=:o:=-            "<<endl;
    cout<<"                                                                               :_\\/_:'.:::. /)\\*''*  .|.* '.\\'/.'_\\(/_'.':'.'            "<<endl;
    cout<<"                                                                               : /\\ : :::::  '*_\\/_* | |  -= o =- /)\\    '  *            "<<endl;
    cout<<"                                                                                '..'  ':::'   * /\\ * |'|  .'/.\\'.  '._____               "<<endl;
    cout<<"                                                                                    *        __*..* |  |     :      |.   |' .---.|       "<<endl;
    cout<<"                                                                                    _*   .-'   '-. |  |     .--'|  ||   | _|    |       "<<endl;
    cout<<"                                                                                  .-'|  _.|  |    ||   '-__  |   |  |    ||      |       "<<endl;
    cout<<"                                                                                  |' | |.    |    ||       | |   |  |    ||      |       "<<endl;
    cout<<"                                                                               ___|  '-'     '    ""       '-'   '-.'    '`      |____   "<<endl;
    cout<<"                                                                              ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~   "<<endl;
    cout<<"                                                                             <   THANK YOU FOR TRAVELLING WITH MUERTE A LOS VIAJEROS   > "<<endl;
    cout<<"                                                                                                     SAFE TRAVELS                        "<<endl<<endl<<endl;
    
    
        cout <<"                                                                                _______________________________________________________         "<<endl;
        cout <<"                                                                              /\\                                                      \\        "<<endl;
        cout <<"                                                                          (O)===)><><><><><><><><><><><><><><><><><><><><><><><><><><><)==(O)  "<<endl;
        cout <<"                                                                              \\/''''''''''''''''''''''''''''''''''''''''''''''''''''''/        "<<endl;
        cout <<"                                                                              (                 MUERTE A LOS VIAJEROS                (         "<<endl;
        cout <<"                                                                               )                     < Receipt >                      )"  <<endl;
        cout <<"                                                                              (     Name : " << setw(30) << left << name <<"            ("<<endl;
        cout <<"                                                                               )______________________________________________________)" <<endl;
        cout <<"                                                                              (                                                      (" << endl;

        shopdisplay();
    
        cout <<"                                                                              (                                                      (        "<<endl;
        cout <<"                                                                               )                                                      )         "<<endl;
        cout <<"                                                                              /\\''''''''''''''''''''''''''''''''''''''''''''''''''''''\\        "<<endl;
        cout <<"                                                                          (O)===)><><><><><><><><><><><><><><><><><><><><><><><><><><><)==(O)  "<<endl;
        cout <<"                                                                              \\/______________________________________________________/        "<<endl;
    }

    float setTotal()
    {
        return total;
    }



    friend float grandTot(customer); //friend function

};





float grandTot(customer a) //function returns total amount spent back to main
{
    float grand = 0;

    grand = a.recTotal;

    return grand;
}


int main()
{
    login start;
    int log, pass;
    int i = 0, x = 4, y = 3, c = 0, m, poc, dur;
    char cont;
    float total = 0, grandTotal = 0;
    admin ad;
    packages *pack = new packages[8];
    packages *custo = new packages[8];
    customer cust;
    defPack defp;
    defCust defc;


    defc.setdata(custo); //initialising default custom locations
    defp.setdata(pack); //initialising default packages



    

    do{
    start.display(); //login display
    log = start.setdata();
    

    if (log == 0) // when admin option is selected
    {
        pass = ad.password(); //password required for admin log in 
        if (pass == 1221202725)
        {
            
        do{
            poc = ad.pacOrCus(); //selecting between packages and custom
            do{
            if (poc == 1)
            {
            for (i = 0; i < x; i++)
                {
                pack[i].disp(); //displaying packages
                }
            ad.maindisp();
            c = ad.returndata();
            ad.setdata(x);
            ad.choosePack(pack, c);
            x = ad.returndata2();
            }

            else if (poc == 2)
            {
            for (i = 0; i < y; i++)
                {
                custo[i].dispCust(); //displaying custom locations
                }
            ad.maindisp();
            c = ad.returndata();
            ad.setdata(y);
            ad.chooseCust(custo, c);
            y = ad.returndata2();
            
            }
            }while(c != 0);

        }while(poc !=0);
        }

        else
        {cout << "                                                                                            Wrong Password" << endl << endl;}
            
    }

    else if (log == 1) //when customer option is selected
    {   
        cust.getname(); //ask customer name
        do{
        
        cust.setdata(custo, pack, x, y);
        cust.mainDis();
        cust.choice();
        total = cust.setTotal(); //initialising total
        
        } while (cust.opt != 5 || total != 0); //when owed amount is not resolved completely, user cannot log out

        cust.receipt();//printing the receipt
        grandTotal = grandTot(cust);
        cout << "                                                                                            Total Paid: RM " << grandTotal << endl; //total amount spent

    }
    } while (log != 2); 
         

    
    delete [] pack; //deleting dynamic arrays
    delete [] custo;
        

    
    return 0;

    
    
}