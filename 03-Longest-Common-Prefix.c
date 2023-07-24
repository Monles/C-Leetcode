char * longestCommonPrefix(char ** strs, int strsSize){
    if (strsSize == 0) return "";
    if (strsSize == 1) return strs[0];

    int len=0, min = strlen(strs[0]);
    for(int i=1; i<strsSize; i++){
      min = strlen(strs[i]) < min ? strlen(strs[i]) : min; 
    }
    
    
    for(int i =0;i < min; i++){
      for(int j = 1; j < strsSize - 1; j++ ){
          if(strs[i][j] == strs[i+1][j]){
            if(i == strsSize - 2){
              ++len;
            }
          }else{
            goto br;
          }


      }
    }

    br:

    if(len > 0){
      char* ret = malloc(len * sizeof(int));
      strs[0][len] = '\0';
      strcpy(ret, strs[0]);
      return ret;
    }

  return "";
}