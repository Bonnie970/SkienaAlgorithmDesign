/*
 * Sorting
 */
void swap(char *p1, char *p2);
void insertion_sort(char *s, int n);


void insertion_sort(char *s, int n){
    int i,j; /* counters */
    for (i=1; i<n; i++) {
        j=i;
        while ((j>0) && (s[j] < s[j-1])) {
            swap(&s[j],&s[j-1]);
            j = j-1;
        }
    }
}

void swap(char *p1, char *p2){
    //we're not assigning to the pointers, but assigning to what they point to
    char x = *p1; 
    *p1 = *p2; 
    *p2 = x;
}
