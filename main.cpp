//
//  main.cpp
//  pat 3n+1
//
//  Created by 董依萌 on 2017/2/11.
//  Copyright © 2017年 董依萌. All rights reserved.
//

#include<iostream>
int main()
{
    int x,y;
    std::cin>>x;
    for(y=0;x!=1;y++){
        if(x%2==0)
            x/=2;
        else
            x=(3*x+1)/2;
    }
    std::cout<<y<<std::endl;
    return 0;
}
