
    int countVowelStrings(int n) {
        int a = 1,e=1,i=1,o=1,u=1;
        for(int j=0;j<n;j++){
            a = a+e+i+o+u;
            e= e+i+o+u;
            i=i+u+o;
            o=o+u;
        }
        return a;
    }
