#include <iostream>
#include "bye.h"

void bye(){
#ifdef _DEBUG
    std::cout << "Bye World Debug!" <<std::endl;
#else
    std::cout << "Bye World Release!" <<std::endl;
#endif
}
