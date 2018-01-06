/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include "pointer1.h"
#include "sorting.h"

int main(){
    //pointer1();
    
    //insert sorting: n**2
    char al[] = "fedabdjgu";
    int n = 9;
    printf("%s\n",al);
    insertion_sort(al, n);
    printf("%s\n",al);
    
    //swap strings
    char* string1 = "Hi, this is 2017.";
    char* string2 = "Hi, this is 2018.";
    printf("1: %s\n2: %s\n",string1, string2);
    swap_string(&string1, &string2);
    printf("1: %s\n2: %s\n",string1, string2);
    
    return 0; 
}
