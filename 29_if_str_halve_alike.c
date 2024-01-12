
bool vow(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

bool halvesAreAlike(char* s) {
    
    int a = 0 ;
    int b = 0;

    int n = strlen(s);

    for(int i = 0; i < n/2 ;i++){
        if(vow(s[i])){
            a++;
        }
    }
    for(int i = n/2; i < n ;i++){
        if(vow(s[i])){
            b++;
        }
    }
    return a == b;
}