
#include<iostream>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<stdlib.h>
#include<pwd.h>
#include<grp.h>

//void displayFileDetails(auto, struct stat);
int main(int argc, char *argv[]) {

        struct stat sbuf;
        struct group *gp;
        struct passwd *pw;

        if(stat(argv[1], &sbuf) < 0) {
                perror(argv[1]);
                exit(EXIT_FAILURE);
        }

        //get the user and group details
        pw = getpwuid(sbuf.st_uid);
        gp = getgrgid(sbuf.st_gid);

        if(S_ISREG(sbuf.st_mode)) {
                        std::cout <<"- " ;
                        }
                        else {
                        std::cout << "d ";
                        }
       //printf((sbuf.st_mode & S_IRUSR) ? 'r' : '-' sbuf.st_mode & S_IRUSR);
        std::cout << pw->pw_name << " " << gp->gr_name << " " << sbuf.st_size <<" ";
        std::cout << sbuf.st_mtime << " " << argv[1] << std::endl;


}
