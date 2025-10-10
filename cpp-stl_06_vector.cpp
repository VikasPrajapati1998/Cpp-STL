#include <iostream>
#include <vector>
#include <limits>
#include <exception>

// ================== MACROS ==================
#define ENABLE_VECTOR_PRINT
// #define ENABLE_VECTOR_OF_VECTOR_PRINT

// =========== FUNCTION DECLARATION ===========
namespace vct {
    template<typename T>
    void Vct_PrintVector(const std::vector<T>& input_vector);

    template<typename T>
    void Vct_InputVector(std::vector<T>& input_vector, int size_of_vector);
}

// =================== MAIN ===================
int main(int argc, char* argv[]) {
#ifdef ENABLE_VECTOR_PRINT
    try {
        // vp1: Static Vector
        std::vector<int> vp1 = {2, 3, 4, 5, 6};
        vct::Vct_PrintVector(vp1);
        std::cout << std::endl;

        // --------------------- vp2: Dynamic Vector ---------------------
        int size_of_vp2;
        std::vector<int> vp2;
        std::cout << "Enter the size of the vector: ";
        std::cin >> size_of_vp2;
        if (std::cin.fail() || size_of_vp2 <= 0) {
            throw std::invalid_argument("Invalid size input. Size must be a positive integer.");
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        vct::Vct_InputVector(vp2, size_of_vp2);
        vct::Vct_PrintVector(vp2);

        // ---------------- vp3: Dynamic Vector of Vectors --------------
        std::vector<std::vector<int>> vp3;
        int size_of_vp3;
        std::cout << "Enter the number of vectors: ";
        std::cin >> size_of_vp3;
        if (std::cin.fail() || size_of_vp3 <= 0) {
            throw std::invalid_argument("Invalid number of vectors input. It must be a positive integer.");
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        // Input vector of vectors
        for (int i = 0; i < size_of_vp3; i++) {
            int size_of_inner_vector;
            std::cout << "Enter the size of vector #" << (i + 1) << "/" << size_of_vp3 << ": ";
            std::cin >> size_of_inner_vector;
            if (std::cin.fail() || size_of_inner_vector <= 0) {
                throw std::invalid_argument("Invalid size input. Size must be a positive integer.");
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            std::vector<int> inner_vector;
            vct::Vct_InputVector(inner_vector, size_of_inner_vector);
            vp3.push_back(inner_vector);
        }

        // Print vector of vectors
        std::cout << std::endl << "Vector of Vectors: " << std::endl;
        for (int i = 0; i < vp3.size(); i++) {
            vct::Vct_PrintVector(vp3[i]);
        }
        
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Main function error: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "Main unknown error." << std::endl;
    }
#endif
    return 1;  // Return non-zero if macro not enabled or error occurs
}

// ========== FUNCTION DEFINITION ============
namespace vct {
    template<typename T>
    void Vct_PrintVector(const std::vector<T>& input_vector) {
        try {
            std::cout << "[";
            for (std::size_t i = 0U; i < input_vector.size(); ++i) {
                std::cout << input_vector[i];
                if ((i + 1U) != input_vector.size()) {
                    std::cout << ", ";
                }
            }
            std::cout << "]" << std::endl;
        } catch (const std::exception& e) {
            std::cerr << "Vct_PrintVector error: " << e.what() << std::endl;
        } catch (...) {
            std::cerr << "Vct_PrintVector unknown error." << std::endl;
        }
    }

    template<typename T>
    void Vct_InputVector(std::vector<T>& input_vector, int size_of_vector) {
        try {
            if (size_of_vector <= 0)
                throw std::invalid_argument("Size of vector must be positive and greater than zero.");
            
            for (int i = 0; i < size_of_vector; i++) {
                T element;
                std::cout << "Enter element #" << (i + 1) << ": ";
                std::cin >> element;
                if (std::cin.fail()) {
                    throw std::runtime_error("Invalid input. Please enter a valid element.");
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
                input_vector.push_back(element);
            }
            
        } catch (const std::exception& e) {
            std::cerr << "Vct_InputVector error: " << e.what() << std::endl;
        } catch (...) {
            std::cerr << "Vct_InputVector unknown error." << std::endl;
        }
    }
}


