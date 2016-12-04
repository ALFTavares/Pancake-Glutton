//
//  main.cpp
//  Pancake Glutton
//
//  Created by Antonio Tavares on 03/12/16.
//  Copyright © 2016 Antonio Tavares. All rights reserved.
//

/*Write a program that asks the user to enter the number of pancakes eaten for breakfast by 10 different people (Person 1, Person 2, ..., Person 10)
 Once the data has been entered the program must analyze the data and output which person ate the most pancakes for breakfast.
 
 ★ Modify the program so that it also outputs which person ate the least number of pancakes for breakfast.
 
 ★★★★ Modify the program so that it outputs a list in order of number of pancakes eaten of all 10 people.
 i.e.
 Person 4: ate 10 pancakes
 Person 3: ate 7 pancakes
 Person 8: ate 4 pancakes
 ...
 Person 5: ate 0 pancakes*/

#include <iostream>
#include <algorithm>
#include <functional>

struct pancakes
{
    int person[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int pancake[10];
};

int main()
{
    pancakes pan;
    
    int i;
    
    for(i=0; i<10; i++)
    {
        std::cout << "Number of pancakes person " << pan.person[i] << " ate: ";
        std::cin >> pan.pancake[i];
    }
    
    std::sort(pan.pancake, pan.pancake+10, std::greater<int>());
    
    for(i=0; i<10; i++)
        std::cout << "person " << pan.person[i] << ": " << pan.pancake[i] << " pancakes" << std::endl;
    
    return 0;
}
