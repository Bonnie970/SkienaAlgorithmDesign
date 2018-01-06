/*
 * Learn pointers
 * 
 */
#include <stdio.h>

void print_array(int *ptr, int len);
int pointer1(void);
void swap_string(char** a, char** b);

int pointer1(){
    // 1
    char *char_ptr = NULL;
    int *int_ptr = NULL;

    // initial arrays
    int len = 10;
    char al[10];
    int cl[10];
    char_ptr = al;
    int_ptr = &(cl[0]); 
    for (int i=0; i<len; i++){
        *char_ptr = 'a'+i;
        *int_ptr = i;
        char_ptr ++;
        int_ptr ++;
    }
    printf("%s", al);
    print_array(cl,len);
        
    return 0;
}

/*
 Switch pointers 
 */
void swap_string(char** a, char** b){
    char* x = *a; 
    *a = *b;
    *b = x;
}

void print_array(int *ptr, int len){
    for (int i=0; i<len; i++){
        printf("%d",*ptr);
        ptr++;
    }
}

