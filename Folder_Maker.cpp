#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

//Path to folder that you want to create folders in it (parent folder)
//Replace PATH to location of parent folder 
std::string path = "PATH"; 

void create_capital_aphebet_order(){
    for(int i = 0 ; i < 26 ; i++){

        switch (i)
        {
        case 0:
            fs::create_directory(path+"A");
            break;
        case 1 :
            fs::create_directory(path+"B");
            break;
        case 2:
            fs::create_directory(path+"C");
            break;
        case 3:
            fs::create_directory(path+"D");
            break;
        case 4:
            fs::create_directory(path+"E");
            break;
        case 5:
            fs::create_directory(path+"F");
            break;
        case 6:
            fs::create_directory(path+"G");
            break;
        case 7:
            fs::create_directory(path+"H");
            break;
        case 8:
            fs::create_directory(path+"I");
            break;
        case 9:
            fs::create_directory(path+"J");
            break;
        case 10:
            fs::create_directory(path+"K");
            break;
        case 11:
            fs::create_directory(path+"L");
            break;
        case 12:
            fs::create_directory(path+"M");
            break;
        case 13:
            fs::create_directory(path+"N");
            break;
        case 14:
            fs::create_directory(path+"O");
            break;
        case 15:
            fs::create_directory(path+"P");
            break;
        case 16 :
            fs::create_directory(path+"Q");
            break;
        case 17:
            fs::create_directory(path+"R");
            break;
        case 18:
            fs::create_directory(path+"S");
            break;
        case 19:
            fs::create_directory(path+"T");
            break;
        case 20:
            fs::create_directory(path+"U");
            break;
        case 21:
            fs::create_directory(path+"V");
            break;
        case 22:
            fs::create_directory(path+"W");
            break;
        case 23:
            fs::create_directory(path+"X");
            break;
        case 24:
            fs::create_directory(path+"Y");
            break;
        case 25 :
            fs::create_directory(path+"Z");
            break;
        }
    }

}

void create_small_aphebet_order(){
    for(int i = 0 ; i < 26 ; i++){

        switch (i)
        {
        case 0:
            fs::create_directory(path+"a");
            break;
        case 1 :
            fs::create_directory(path+"b");
            break;
        case 2:
            fs::create_directory(path+"c");
            break;
        case 3:
            fs::create_directory(path+"d");
            break;
        case 4:
            fs::create_directory(path+"e");
            break;
        case 5:
            fs::create_directory(path+"f");
            break;
        case 6:
            fs::create_directory(path+"g");
            break;
        case 7:
            fs::create_directory(path+"h");
            break;
        case 8:
            fs::create_directory(path+"i");
            break;
        case 9:
            fs::create_directory(path+"j");
            break;
        case 10:
            fs::create_directory(path+"k");
            break;
        case 11:
            fs::create_directory(path+"l");
            break;
        case 12:
            fs::create_directory(path+"m");
            break;
        case 13:
            fs::create_directory(path+"n");
            break;
        case 14:
            fs::create_directory(path+"o");
            break;
        case 15:
            fs::create_directory(path+"p");
            break;
        case 16 :
            fs::create_directory(path+"q");
            break;
        case 17:
            fs::create_directory(path+"r");
            break;
        case 18:
            fs::create_directory(path+"s");
            break;
        case 19:
            fs::create_directory(path+"t");
            break;
        case 20:
            fs::create_directory(path+"u");
            break;
        case 21:
            fs::create_directory(path+"v");
            break;
        case 22:
            fs::create_directory(path+"w");
            break;
        case 23:
            fs::create_directory(path+"x");
            break;
        case 24:
            fs::create_directory(path+"y");
            break;
        case 25 :
            fs::create_directory(path+"z");
            break;
        }
    }

}

void create_numberic_order(int number){

    for(int i = 1; i <=number ; i++){
        fs::create_directory(path+std::to_string(i));
    }

}

int main(){

    std::cout << "########################## Folder Maker ##########################" <<'\n';

    char selected_option;
    int folder_number ;

    //Displaying options for selecting 
    std::cout << "Please enter one on this options : " << std::endl;
    std::cout << "0 : Creating A-Z folders" << '\n';
    std::cout << "1 : Creating a-z folders" << '\n';
    std::cout << "2 : Creating 1-number folders" << '\n';

    //Selecting an options 
    std::cout << "Option : ";
    std::cin >> selected_option;

    switch (selected_option)
    {
    case '0':
            std::cout << "Creating folders ... Please Wait !" << '\n';
            create_capital_aphebet_order();
        break;
    case '1':
            std::cout << "Creating folders ... Please Wait !" << '\n';
            create_small_aphebet_order();
        break;
    case '2':
            std::cout << "Please enter the number of folders that you want : ";
            std::cin >> folder_number ;
            std::cout << '\n';

            if(folder_number != 0 && folder_number > 0){
                std::cout << "Creating folders ... Please Wait !" << '\n';

                 create_numberic_order(folder_number);
            } else{
                std::cout << "Invalid number" << '\n';
            }

        break;
    default:
            std::cout << "Invalid option please enter an valid option [0-2]" << '\n';
        break;
    }
    
    return 0 ;
}