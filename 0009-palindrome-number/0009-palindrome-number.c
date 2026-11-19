bool isPalindrome(int x) {
    int i, copy, temp, length, *ip, flag;
    length = 0;
    copy = x;

    if(x<0){
        return 0;
    }
    while (copy != 0) {
        copy = copy / 10;
        length++;
    }
    ip = (int*)malloc(length * sizeof(int));
    i = 0;

    while (x != 0) {
        temp = x % 10;
        x = x / 10;
        ip[i] = temp;
        i++;
    }
    
    i = 0;
    flag = 1;
    while (i < length) {
        if (ip[i] != ip[length-1]) {
            flag = 0;
         }
        i++;
        length--;
    }

    return flag;
}