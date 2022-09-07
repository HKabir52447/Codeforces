for(i=0;i<strlen(word);i++){
        if(sm >= lg){
        if(word[i] >=97 && word[i] <=122){
            printf("%c",word[i]);
        }else{
            printf("%c",word[i]+32);
        }
    }else{
       if(word[i] >=65 && word[i] <=90){
            printf("%c",word[i]);
        }else{
            printf("%c",word[i]-32);
        } 
    }