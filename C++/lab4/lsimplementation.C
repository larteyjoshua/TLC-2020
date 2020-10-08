#include <iostream>
#include <sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
#include<dirent.h>
#include <string>


int main(int argc, char *argv[]) {

       DIR *dir;
       struct dirent *ent;
       char *path = argv[1];
       dir=opendir(path);

       
       if (dir != NULL)
       
       {
           while((ent =readdir(dir)) != NULL){
       std:: cout <<ent->d_name << std::endl;
       
       }
       closedir(dir);

}
}
