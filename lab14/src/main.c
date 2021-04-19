#include "lib.h"

int main() {
   
    int main_arr[N] = {0};

    read_from_user_file(main_arr);

    int array_size = size(main_arr);

    counter(array_size, main_arr);

  

    return 0;
}