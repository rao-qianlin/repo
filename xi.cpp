//
//  main.cpp
//  欧几里得算法
//
//  Created by 饶茜霖 on 2020/3/10.
//  Copyright © 2020年 饶茜霖. All rights reserved.
//

#include <iostream>
using namespace std;

int get(int a,int b)
{
    int x=max(a,b);
    int y=min(a,b);
    cout<<x<<" "<<y<<endl;
    
    if(x%y==0) return y;
    else
        return get(y,x%y);
}

int main() {
    int x,y;
    int  m;
    
    cout<<"Input";
    
    while (true)
    {
        cin>>m;
        if(m==0) break;
        cout<<"Enter two numbers:"<<endl;
        cin>>x>>y;cout<<endl;
        cout<<get(x,y);
        cout<<endl;
    }
    return 0;
}
