//
//  maze.c
//  playground
//
//  Created by apple on 10/27/18.
//  Copyright © 2018 Elena. All rights reserved.
//

#include<stdio.h>
#include<stdlib.h>


int main()
{
    char map[50][50] =
    {   "######",
        "#o #  ",
        "# ## #",
        "#  # #",
        "##   #",
        "######",
    };//design maze
    int i,x,y,p,q;
    x = 1; y = 1; //initial position of the ball
    p = 1; q = 5; //position of the exit
    char ch;
    
    for(i=0;i<=5;i++)
    {
        puts(map[i]);
    }
    
    while(x!=p || y!=q)
    {
        ch = getchar(); //ch = getch(); not showing the input
        if(ch=='s')
        {
            if(map[x+1][y] != '#')
            {
                map[x][y] = ' ';
                x++;
                map[x][y] = 'o';
            }
        }
        if(ch=='w')
        {
            if(map[x-1][y] != '#')
            {
                map[x][y] = ' ';
                x--;
                map[x][y] = 'o';
            }
        }
        if(ch=='a')
        {
            if(map[x][y-1] != '#')
            {
                map[x][y] = ' ';
                y--;
                map[x][y] = 'o';
            }
        }
        if(ch=='d')
        {
            if(map[x][y+1] != '#')
            {
                map[x][y] = ' ';
                y++;
                map[x][y] = 'o';
            }
        }
        system("clear");
        for(i=0;i<=5;i++)
        {
            puts(map[i]);
        }
    }
    system("clear");
    printf("You Win!\n");
    getchar();//system("pause");
    return 0;
    
    
}

