#include <iostream>

int main() {
    int n;
    std::cout << "Entrez la taille du tableau : ";
    std::cin >> n;


    int *premierTableau = (int *)malloc(n * sizeof(int));

    if (premierTableau == nullptr) {
        std::cerr << "Allocation mémoire a échoué" << std::endl;
        return 1;
    }

    std::cout << "Entrez " << n << " nombres entiers : ";
    for (int i = 0; i < n; i++) {
        std::cin >> premierTableau[i];
    }


    int *deuxiemeTableau = (int *)malloc(n * sizeof(int));

    if (deuxiemeTableau == nullptr) {
        std::cerr << "Allocation mémoire a échoué" << std::endl;
        free(premierTableau);
        return 1;
    }


    for (int i = 0; i < n; i++) {
        deuxiemeTableau[i] = premierTableau[i] * premierTableau[i];
    }


    std::cout << "Carrés des nombres du premier tableau : ";
    for (int i = 0; i < n; i++) {
        std::cout << deuxiemeTableau[i] << " ";
    }
    std::cout << std::endl;


    free(premierTableau);
    free(deuxiemeTableau);

    return 0;
}
