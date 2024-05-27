    bool isPalindrome = true;
    for(int i = 0 ; i < n/2 ; i++){
        if(tolower(str[i]) != tolower(str[n-i-1])){
            isPalindrome = false;
            break;
        }
    }