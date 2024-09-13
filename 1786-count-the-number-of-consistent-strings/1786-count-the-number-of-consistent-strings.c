
int countConsistentStrings(char * allowed, char ** words, int wordsSize){
    int tam = strlen(allowed);
    char letras[tam];
    for(int i = 0; i < tam; i++){//separando letras
        letras[i] = allowed[i];
    }
    bool consist = false;
    int co = 0;
    for(int i = 0; i < wordsSize; i++){
        consist = false;
        int cont = 0;
        tam = 0;
        for(int j = 0; words[i][j] != '\0'; j++){
            for(int k = 0; allowed[k] != '\0'; k++){
                if(words[i][j] == allowed[k]) consist = true, cont++;
            }
            tam++;
        }
        if(cont == tam) co++;
    }
    return co;

}