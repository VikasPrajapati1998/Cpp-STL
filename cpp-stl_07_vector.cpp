#include <iostream>
#include <vector>
#include <limits>
#include <exception>

// ================== MACROS ==================
#define ENABLE_VECTOR


int main(int argc, char* argv[]) {
#ifdef ENABLE_VECTOR
    // Vector of Vectors
    try {
        int size_of_vector_of_vectors;
        std::vector<std::vector<int>> vector_of_vectors;
        std::cout << "Enter the size of vector of vectors: ";
        std::cin >> size_of_vector_of_vectors;
        if (std::cin.fail() || size_of_vector_of_vectors <= 0) {
            throw std::invalid_argument("Invalid number of vectors input. It must be a positive integer.");
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        // Input of vector of vector
        for (int  i = 0; i < size_of_vector_of_vectors; i++) {
            int size_of_inner_vector, element;
            std::cout << "Enter the size of inner vector #" << (i + 1) << "/" << size_of_vector_of_vectors << ": ";
            std::cin >> size_of_inner_vector;
            if (std::cin.fail() || size_of_inner_vector <= 0) {
                throw std::invalid_argument("Invalid number of vector input. It must be a positive integer.");
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            vector_of_vectors.push_back(std::vector<int> ());  // push an empty vector

            for (int j = 0; j < size_of_inner_vector; j++) {
                std::cout << "Enter the element #" << (j + 1) << ": ";
                std::cin >> element;
                vector_of_vectors[i].push_back(element);
            }
        }

        // print vector of vector
        for (int i = 0; i < vector_of_vectors.size(); i++) {
            std::cout << "[";
            for (int j = 0; j < vector_of_vectors[i].size(); j++) {
                std::cout << vector_of_vectors[i][j];
                if ((j + 1) != vector_of_vectors[i].size()) {
                    std::cout << ", ";
                }
            }
            std::cout << "]";

            if ((i + 1) != vector_of_vectors.size()) {
                std::cout << ", " << std::endl;
            }
        }
        std::cout << std::endl;
    } catch (std::exception& e) {
        std::cerr << "Vector of Vectors error: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "Unknown error occurred in Vector of Vectors section." << std::endl;
    }
#endif
}