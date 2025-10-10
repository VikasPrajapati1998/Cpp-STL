#include <iostream>
#include <vector>
#include <limits>
#include <exception>
#include <typeinfo>

// ================= MACROS ==================
#define MACRO_ENABLE_VECTOR_PRINT
#define MACRO_VERSION 4

// ========== FUNCTION DECLARATION ===========
namespace vct {
    template<typename T>
    void Vct_PrintVector(const std::vector<T>& input_vector);

    template<typename T>
    void Vct_InputVector(std::vector<T>& input_vector, int size_of_vector);

    template<typename T>
    void Vct_PrintVectorOfVectors(const std::vector<std::vector<T>>& input_vector_of_vectors);

    template<typename T>
    void Vct_InputVectorOfVectors(std::vector<std::vector<T>>& input_vector_of_vectors, int number_of_vectors);

    template<typename T1, typename T2>
    void Vct_PrintVectorOfPairs(const std::vector<std::pair<T1, T2>>& input_vector_of_pairs);

    template<typename T1, typename T2>
    void Vct_InputVectorOfPairs(std::vector<std::pair<T1, T2>>& input_vector_of_pairs, int size_of_vector);
}

int main(int argc, char* argv[]) {
#ifdef MACRO_ENABLE_VECTOR_PRINT
    try {
        #if MACRO_VERSION == 1
        // Vector of Vectors
        std::vector<std::vector<int>> vv;
        int num_vectors;
        std::cout << "Enter the number of vectors: ";
        std::cin >> num_vectors;
        if (std::cin.fail() || num_vectors <= 0) {
            throw std::invalid_argument("Invalid number of vectors input. It must be a positive integer.");
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        vct::Vct_InputVectorOfVectors(vv, num_vectors);
        vct::Vct_PrintVectorOfVectors(vv);
        std::cout << std::endl;

        #elif MACRO_VERSION == 2
        // Vector of Pairs
        std::vector<std::pair<int, int>> vp;
        int num_pairs;
        std::cout << "Enter the size of vector of pairs (int, int): ";
        std::cin >> num_pairs;
        if (std::cin.fail() || num_pairs <= 0) {
            throw std::invalid_argument("Invalid number of pairs input. It must be a positive integer.");
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        vct::Vct_InputVectorOfPairs(vp, num_pairs);
        vct::Vct_PrintVectorOfPairs(vp);
        std::cout << std::endl;

        #elif MACRO_VERSION == 3
        // Vector of Pairs
        std::vector<std::pair<int, std::string>> vp2;
        int num_pairs2;
        std::cout << "Enter the size of vector of pairs (int, string): ";
        std::cin >> num_pairs2;
        if (std::cin.fail() || num_pairs2 <= 0) {
            throw std::invalid_argument("Invalid number of pairs input. It must be a positive integer.");
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        vct::Vct_InputVectorOfPairs(vp2, num_pairs2);
        vct::Vct_PrintVectorOfPairs(vp2);
        std::cout << std::endl;

        #elif MACRO_VERSION == 4
        // Vector of Pairs
        std::vector<std::pair<std::string, double>> vp3;
        int num_pairs3;
        std::cout << "Enter the size of vector of pairs (string, double): ";
        std::cin >> num_pairs3;
        if (std::cin.fail() || num_pairs3 <= 0) {
            throw std::invalid_argument("Invalid number of pairs input. It must be a positive integer.");
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        vct::Vct_InputVectorOfPairs(vp3, num_pairs3);
        vct::Vct_PrintVectorOfPairs(vp3);
        std::cout << std::endl;
        #endif
    } catch (const std::exception& e) {
        std::cerr << "Main function error: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "Main unknown error." << std::endl;
    }

#endif
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

    template<typename T>
    void Vct_PrintVectorOfVectors(const std::vector<std::vector<T>>& input_vector_of_vectors) {
        try {
            for (const auto& inner_vector : input_vector_of_vectors) {
                Vct_PrintVector(inner_vector);
            }
        } catch (const std::exception& e) {
            std::cerr << "Vct_PrintVectorOfVectors error: " << e.what() << std::endl;
        } catch (...) {
            std::cerr << "Vct_PrintVectorOfVectors unknown error." << std::endl;
        }
    }

    template<typename T>
    void Vct_InputVectorOfVectors(std::vector<std::vector<T>>& input_vector_of_vectors, int number_of_vectors) {
        try {
            for (int i = 0; i < number_of_vectors; i++) {
                int size_of_inner_vector;
                std::cout << "Enter the size of inner vector #" << (i + 1) << ": ";
                std::cin >> size_of_inner_vector;
                if (std::cin.fail() || size_of_inner_vector <= 0) {
                    throw std::invalid_argument("Invalid number of vector input. It must be a positive integer.");
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
                input_vector_of_vectors.push_back(std::vector<T>());  // push an empty vector
                Vct_InputVector(input_vector_of_vectors.back(), size_of_inner_vector);
            }
        } catch (const std::exception& e) {
            std::cerr << "Vct_InputVectorOfVectors error: " << e.what() << std::endl;
        } catch (...) {
            std::cerr << "Vct_InputVectorOfVectors unknown error." << std::endl;
        }
    }

    template<typename T1, typename T2>
    void Vct_PrintVectorOfPairs(const std::vector<std::pair<T1, T2>>& input_vector_of_pairs) {
        try {
            std::cout << "[";
            for (std::size_t i = 0U; i < input_vector_of_pairs.size(); ++i) {
                std::cout << "(" << input_vector_of_pairs[i].first << ", " << input_vector_of_pairs[i].second << ")";
                if ((i + 1U) != input_vector_of_pairs.size()) {
                    std::cout << ", ";
                }
            }
            std::cout << "]" << std::endl;
        } catch (const std::exception& e) {
            std::cerr << "Vct_PrintVectorOfPairs error: " << e.what() << std::endl;
        } catch (...) {
            std::cerr << "Vct_PrintVectorOfPairs unknown error." << std::endl;
        }
    }

    template<typename T1, typename T2>
    void Vct_InputVectorOfPairs(std::vector<std::pair<T1, T2>>& input_vector_of_pairs, int size_of_vector) {
        try {
            if (size_of_vector <= 0) {
                throw std::invalid_argument("Size of vector must be positive and greater than zero.");
            }
            
            std::pair<T1, T2> temp_pair;
            
            for (int i = 0; i < size_of_vector; i++) {
                std::cout << "Enter pair #" << (i + 1) << "/" << size_of_vector << "(first element): ";
                std::cin >> temp_pair.first;
                if (std::cin.fail()) {
                    throw std::runtime_error("Invalid input. Please enter valid elements.");
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }

                std::cout << "Enter pair #" << (i + 1) << "/" << size_of_vector << "(second element): ";
                std::cin >> temp_pair.second;
                if (std::cin.fail()) {
                    throw std::runtime_error("Invalid input. Please enter valid elements.");
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
                input_vector_of_pairs.push_back(temp_pair); 
            }
            
        } catch (const std::exception& e) {
            std::cerr << "Vct_InputVectorOfPairs error: " << e.what() << std::endl;
        } catch (...) {
            std::cerr << "Vct_InputVectorOfPairs unknown error." << std::endl;
        }
    }

}


