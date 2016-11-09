//
//  main.cpp
//  thread
//
//  Created by 周鹏远 on 16/11/8.
//  Copyright © 2016年 周鹏远. All rights reserved.
//

#include <iostream>
#include <unistd.h>


int main(int argc, const char * argv[]) {
    int pipeFd[2];
    if(pipe(pipeFd)==-1){
        perror("pipe");
        exit(EXIT_FAILURE);
    }
    std::cout<<"test"<<std::endl;
    
}
