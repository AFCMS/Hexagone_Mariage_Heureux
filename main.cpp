#include <iostream>

#include "Man.hpp"
#include "Woman.hpp"

int main() {
    Man emmanuel("Emmanuel", "Dupont", 46);
    Man jeanmi("Jean-Michel", "Durand", 70);

    emmanuel.setPartner(jeanmi);
    jeanmi.setPartner(emmanuel);

    emmanuel.display();
    std::cout << std::endl;
    jeanmi.display();
    return 0;
}
