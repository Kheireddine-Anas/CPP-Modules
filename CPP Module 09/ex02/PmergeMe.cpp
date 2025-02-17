/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 14:23:32 by akheired          #+#    #+#             */
/*   Updated: 2025/02/17 14:23:33 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iomanip>

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& other) {
        vec = other.vec;
        deq = other.deq;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other) {
    if (this != &other) {
        vec = other.vec;
        deq = other.deq;
    }
    return *this;
}

PmergeMe::~PmergeMe() {}

void PmergeMe::mergeSortVector( std::vector <int>& arr ) {
    if (arr.size() <= 1) return;

    for (size_t i = 0; i < arr.size() - 1; i += 2) {
        if (arr[i] < arr[i + 1]) {
            std::swap(arr[i], arr[i + 1]);
        }
    }

    std::vector <int> Larger;
    for (size_t i = 1; i < arr.size(); i += 2) {
        Larger.push_back(arr[i]);
    }

    if (arr.size() % 2 != 0) {
        Larger.push_back(arr.back());
    }

    mergeSortVector(Larger);

    std::vector <int> sortedArr;
    sortedArr.reserve(arr.size());

    for (size_t i = 0; i < Larger.size(); ++i) {
        sortedArr.push_back(Larger[i]);
    }

    for (size_t i = 0; i < arr.size(); i += 2) {
        if (i + 1 < arr.size()) {
            int smaller = arr[i];
            std::vector <int>::iterator it = std::lower_bound(sortedArr.begin(), sortedArr.end(), smaller);
            sortedArr.insert(it, smaller);
        }
    }

    arr = sortedArr;
}

void PmergeMe::mergeSortDeque( std::deque <int>& arr ) {
    if (arr.size() <= 1) return;

    for (size_t i = 0; i < arr.size() - 1; i += 2) {
        if (arr[i] > arr[i + 1]) {
            std::swap(arr[i], arr[i + 1]);
        }
    }

    std::deque <int> Larger;
    for (size_t i = 1; i < arr.size(); i += 2) {
        Larger.push_back(arr[i]);
    }

    if (arr.size() % 2 != 0) {
        Larger.push_back(arr.back());
    }

    mergeSortDeque(Larger);

    std::deque <int> sortedArr;

    for (size_t i = 0; i < Larger.size(); ++i) {
        sortedArr.push_back(Larger[i]);
    }

    for (size_t i = 0; i < arr.size(); i += 2) {
        if (i + 1 < arr.size()) {
            int smaller = arr[i];
            std::deque <int>::iterator it = std::lower_bound(sortedArr.begin(), sortedArr.end(), smaller);
            sortedArr.insert(it, smaller);
        }
    }

    arr = sortedArr;
}

void PmergeMe::performAction( int ac, char* av[] ) {
    for (int i = 1; i < ac; ++i) {
        std::stringstream ss(av[i]);
        int num;
        if(!(ss >> num)) {
            std::cerr << "Error: Invalid input." << std::endl;
            return;
        }

        char remaining;
        if (ss >> remaining) {
            std::cerr << "Error: Invalid input." << std::endl;
            return;
        }

        if (num < 0) {
            std::cerr << "Error: Negative numbers are not allowed." << std::endl;
            return;
        }
        vec.push_back(num);
        deq.push_back(num);
    }

    std::cout << "Before: ";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    clock_t start = clock();
    mergeSortVector(vec);
    clock_t end = clock();
    double vecTime = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1e6;

    start = clock();
    mergeSortDeque(deq);
    end = clock();
    double deqTime = (static_cast<double>(end - start) / CLOCKS_PER_SEC) * 1e6;

    vecTime = vecTime / 10000;
    deqTime = deqTime / 10000;

    std::cout << "After: ";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : "  << std::fixed << std::setprecision(5) << vecTime << " us" << std::endl;
    std::cout << "Time to process a range of " << deq.size() << " elements with std::deque  : "  << deqTime << " us" << std::endl;

}