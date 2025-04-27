#include <iostream>
#include <unistd.h>
#include <cstdlib>
using namespace std;

void exitScript_invalid_option() 
{
    cout << "Invalid Option!\n";
    cout << "press enter to exit...";
    cin.ignore();
    cin.get(); 
}

void exitScript() 
{
    cout << "press enter to exit... ";
    cin.ignore();
    cin.get(); 
}

int main() 
{
    if (getuid() == 0) {
        cout << "Iniciando..." << endl;
    } 
    else {
        cout << "Rode o programa como root" << endl;
        exitScript();    
        return 0;
    }


    // variables
    int system_type;
    int server_type;

    cout << "_______  _______  ______    __   __  _______  ______           _______  _______  _______  ___\n" << endl;        
    cout << "|       ||       ||    _ |  |  | |  ||       ||    _ |         |       ||       ||       ||   |\n" << endl;  
    cout << "|  _____||    ___||   | ||  |  |_|  ||    ___||   | ||   ____  |_     _||   _   ||   _   ||   |\n" << endl;  
    cout << "| |_____ |   |___ |   |_||_ |       ||   |___ |   |_||_ |____|   |   |  |  | |  ||  | |  ||   |\n" << endl;   
    cout << "|_____  ||    ___||    __  ||       ||    ___||    __  |         |   |  |  |_|  ||  |_|  ||   |___\n" << endl;
    cout << "_____| ||   |___ |   |  | | |     | |   |___ |   |  | |         |   |  |       ||       ||       |\n" << endl;
    cout << "|_______||_______||___|  |_|  |___|  |_______||___|  |_|         |___|  |_______||_______||_______|\n" << endl;


    cout << "\n\nWelcome to Linux Server installation tool" << endl;
    cout << "1. Debian/Ubuntu" << endl;;
    cout << "2. CentOS/RHEL/Fedora" << endl;;
    cout << "3. Alpine Linux" << endl;;
    cout << "4. Arch Linux" << endl;;

    cout << "Select which Linux distro your system is based on: ";
    cin >> system_type;
     
    // Verificar se a entrada é válida, ou seja, é um inteiro
    if(cin.fail()) 
    {
        cout << "Invalid input. Please enter a valid number between 1 and 4." << endl;
        return 1; // Encerra o programa em caso de entrada inválida
    }

    if(system_type >= 1 && system_type <= 4)
    {
        if(system_type == 1)
        {
            cout << "Selected System is Debian/Ubuntu" << endl;
            cout << "1. Web Server(Apache)\n";
            cout << "2. File Server(Samba)\n";
            cout << "3. DB Server(MySQL)\n";
            cout << "4. DNS Server(bind9)\n";
            cout << "5. VPN Server\n";
            cout << "6. Domain Controller(Samba 4)\n";
            cout << "7. Web Panel\n";
            cout << "8. Virtualization Server(KVM)\n"; // se o usuario escolher esse, colocar 2 opções(instalar o servidor de virtualização ou configurar ele)
            cout << "0. Exit\n";
            cout << "Which service do you want to install? ";
            cin >> server_type;

            if(server_type >= 1 && server_type <= 8)
            {
                switch(server_type)
                {
                    case 1:
                        int web_server_option;
                        cout << "1. Apache\n";
                        cout << "2. Nginx\n";
                        cout << "Which web server do you want to install? ";
                        cin >> web_server_option;
                        if(web_server_option == 1)
                        {
                            system("bash 1_1-apache.sh");
                        }
                        if(web_server_option == 2)
                        {
                            system("bash 1_1-nginx.sh");
                        }
                        
                        break;
                    case 2:
                        int file_server_option;
                        cout << "Initializing...\n";
                        cout << "1. Anonymous Access\n";
                        cout << "2. Create User Access\n";
                        cout << "Which option do you want to choose? ";
                        cin >> file_server_option;
                        if(file_server_option == 1)
                        {

                            system("bash 1_2-samba.sh");
                        }
                        
                        break;
                    case 3:
                        cout << "Installing MySQL..." << endl;
                        break;
                    case 4:
                        cout << "Installing bind9..." << endl;
                        break;
                    case 5:
                        cout << "Installing VPN..." << endl;
                        break;
                    case 6:
                        cout << "Installing Samba 4..." << endl;
                        break;
                    case 7:
                        cout << "Installing Web Panel..." << endl;
                        break;
                    case 8:
                        cout << "Installing KVM..." << endl;
                        break;
                    default:
                        exitScript_invalid_option();
                        break;
                } 
            }
            else
            {
                exitScript_invalid_option();
            }
        }

        if(system_type == 2)
        {
            cout << "Selected System is CentOS/RHEL/Fedora" << endl;
            cout << "1. Web Server(Apache)\n";
            cout << "2. File Server(Samba)\n";
            cout << "3. DB Server(MySQL)\n";
            cout << "4. DNS Server(bind9)\n";
            cout << "5. VPN Server\n";
            cout << "6. Domain Controller(Samba 4)\n";
            cout << "7. Web Panel\n";
            cout << "8. Virtualization Server(KVM)\n"; // se o usuario escolher esse, colocar 2 opções(instalar o servidor de virtualização ou configurar ele)
            cout << "0. Exit\n";
            cout << "Which service do you want to install? ";
            cin >> server_type;
            
            if(server_type >= 1 && server_type <= 8)
            {
                switch(server_type)
                {
                    case 1:
                        cout << "Installing Apache..." << endl;
                        break;
                    case 2:
                        cout << "Installing Samba..." << endl;
                        break;
                    case 3:
                        cout << "Installing MySQL..." << endl;
                        break;
                    case 4:
                        cout << "Installing bind9..." << endl;
                        break;
                    case 5:
                        cout << "Installing VPN..." << endl;
                        break;
                    case 6:
                        cout << "Installing Samba 4..." << endl;
                        break;
                    case 7:
                        cout << "Installing Web Panel..." << endl;
                        break;
                    case 8:
                        cout << "Installing KVM..." << endl;
                        break;
                    default:
                        exitScript_invalid_option();
                        break;
                } 
            }
            else
            {
                exitScript_invalid_option();
            }

        }

        if(system_type == 3)
        {
            cout << "Selected System is Alpine Linux" << endl;
            cout << "1. Web Server(Apache)\n";
            cout << "2. File Server(Samba)\n";
            cout << "3. DB Server(MySQL)\n";
            cout << "4. DNS Server(bind9)\n";
            cout << "5. VPN Server\n";
            cout << "6. Domain Controller(Samba 4)\n";
            cout << "7. Web Panel\n";
            cout << "8. Virtualization Server(KVM)\n"; // se o usuario escolher esse, colocar 2 opções(instalar o servidor de virtualização ou configurar ele)
            cout << "0. Exit\n";
            cout << "Which service do you want to install? ";
            cin >> server_type;

            if(server_type >= 1 && server_type <= 8)
            {
                switch(server_type)
                {
                    case 1:
                        cout << "Installing Apache..." << endl;
                        break;
                    case 2:
                        cout << "Installing Samba..." << endl;
                        break;
                    case 3:
                        cout << "Installing MySQL..." << endl;
                        break;
                    case 4:
                        cout << "Installing bind9..." << endl;
                        break;
                    case 5:
                        cout << "Installing VPN..." << endl;
                        break;
                    case 6:
                        cout << "Installing Samba 4..." << endl;
                        break;
                    case 7:
                        cout << "Installing Web Panel..." << endl;
                        break;
                    case 8:
                        cout << "Installing KVM..." << endl;
                        break;
                    default:
                        exitScript_invalid_option();
                        break;
                } 
            }
            else
            {
                exitScript_invalid_option();
            }
        }

        if(system_type == 4)
        {
            cout << "Selected System is Arch Linux" << endl;
            cout << "1. Web Server(Apache)\n";
            cout << "2. File Server(Samba)\n";
            cout << "3. DB Server(MySQL)\n";
            cout << "4. DNS Server(bind9)\n";
            cout << "5. VPN Server\n";
            cout << "6. Domain Controller(Samba 4)\n";
            cout << "7. Web Panel\n";
            cout << "8. Virtualization Server(KVM)\n"; // se o usuario escolher esse, colocar 2 opções(instalar o servidor de virtualização ou configurar ele)
            cout << "0. Exit\n";
            cout << "Which service do you want to install? ";
            cin >> server_type;

            if(server_type >= 1 && server_type <= 8)
            {
                switch(server_type)
                {
                    case 1:
                        cout << "Installing Apache..." << endl;
                        break;
                    case 2:
                        cout << "Installing Samba..." << endl;
                        break;
                    case 3:
                        cout << "Installing MySQL..." << endl;
                        break;
                    case 4:
                        cout << "Installing bind9..." << endl;
                        break;
                    case 5:
                        cout << "Installing VPN..." << endl;
                        break;
                    case 6:
                        cout << "Installing Samba 4..." << endl;
                        break;
                    case 7:
                        cout << "Installing Web Panel..." << endl;
                        break;
                    case 8:
                        cout << "Installing KVM..." << endl;
                        break;
                    default:
                        exitScript_invalid_option();
                        break;
                } 
            }
            else
            {
                exitScript_invalid_option();
            }
        }
    }
    
    return 0;
}
