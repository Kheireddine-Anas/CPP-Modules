/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 14:23:37 by akheired          #+#    #+#             */
/*   Updated: 2025/02/17 14:23:38 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <deque>
#include <ctime>
#include <sstream>

class PmergeMe {
    private:
        std::vector <int> vec;
        std::deque <int> deq;

        void mergeSortVector( std::vector<int>& arr );
        void mergeSortDeque( std::deque<int>& arr );
    public:
        PmergeMe();
        PmergeMe( const PmergeMe &other );
        PmergeMe& operator=( const PmergeMe &other );
        ~PmergeMe();

        void performAction( int ac, char* argv[] );
};

#endif
