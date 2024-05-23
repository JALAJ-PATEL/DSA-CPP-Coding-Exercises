    cout << "The matrix in wave form is as follows : " << endl;
    for(int i = 0 ; i < n ; i++){
        if(i%2 == 0){
            for(int j = n-1 ; j >= 0 ; j--){
                cout << a[i][j] << " ";
            }
        } else {
            for(int j = 0 ; j < n ; j++){
                cout << a[i][j] << " ";
            }
        }
    }
    cout << endl;
    return 0;