#include <iostream>

#include "Man.hpp"
#include "Woman.hpp"

int main() {
    Man emmanuel("Emmanuel", "Macron", 46);
    Woman jeanmi("Jean-Michel", "Macron", 70);

    emmanuel.setPartner(jeanmi);
    jeanmi.setPartner(emmanuel);

    emmanuel.display();
    std::cout << std::endl;
    jeanmi.display();
    return 0;
}
