

char * mergeAlternately(char * word1, char * word2){
    int n =strlen(word1);
    int m =strlen(word2);
  char* res = (char*)malloc((n + m + 1) * sizeof(char));   
  if (res == NULL) {
        return NULL;
    }

  int i , j , k =0;
    while(i<n && j<m){
        if(k%2==0){
            res[k]= word1[i++];
            k++;
        }
        else{
            res[k] = word2[j++];
            k++;
        }
    }

    while(i<n){
        res[k]=word1[i++];
        k++;
    }
    while(j<m){
        res[k]=word2[j++];
        k++;
    }
    res[k] = '\0'; 
    return res;

}