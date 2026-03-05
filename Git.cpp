#include <iostream>
#include <cstdlib>
#include <string>
void New_instance();
void Commit();
 
int main(){
int choose = 0;
std::cout<<"What do you want to do \n";
std::cout<<"1: Create a new git instance with github\n";
std::cout<<"2: Push an exsisting git to github \n";
std::cin>>choose;

if (choose == 1)
{
    New_instance();
}else if (choose == 2)
{
   Commit(); 
}


return (0);
}

void New_instance(){
    std::string name;
    std::string url;
    std::cout<<"How do you want to name the first commit?\n";
    std::cin>>name;
    std::cout<<"Origin Url \n";
    std::cin>>url;
    
    
    std::cout<<"Instancing the git\n";
    system("git init");
   
    std::cout<<"Adding Files\n";
    system("git add .");
    
    std::string command = "git commit -m \""+ name + "\"";
    system(command.c_str());

    std::cout<<"Creating Main branch";
    system("git branch -M main");

    std::string origin = "git remote add origin "+ url;
    std::cout<<"Adding the Origin";
    system(origin.c_str());

    std::cout<<"Pushing to the Repo";
    system("git push -u origin main");


}

void Commit(){
    std::string name;

    std::cout<<"How do you want to name this commit?\n";
    std::cin>>name;

    
   
    std::cout<<"Adding new Files\n";
    system("git add .");
    
    std::string command = "git commit -m \""+ name + "\"";
    system(command.c_str());

    std::cout<<"Pushing to the Repo";
    system("git push -u origin main");


}