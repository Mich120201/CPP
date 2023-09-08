/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:40:57 by marvin            #+#    #+#             */
/*   Updated: 2023/08/30 14:41:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

//-------------------------------Vector merge-insertionSort-------------------

void insertionSortVector(std::vector<int>& vec) {
	// Insertion sort algorithm for the vector
	for (int i = 1; i < vec.size(); i++) {
		int key = vec[i];
		int j = i - 1;
		while (j >= 0 && vec[j] > key) {
			vec[j + 1] = vec[j];
			j--;
		}
		vec[j + 1] = key;
	}
}

void mergeVector(std::vector<int>& vec, int start, int mid, int end) {
	// Merge two sorted subvectors into a single sorted vector
	std::vector<int> left(vec.begin() + start, vec.begin() + mid + 1);
	std::vector<int> right(vec.begin() + mid + 1, vec.begin() + end + 1);

	int i = 0, j = 0, k = start;
	while (i < left.size() && j < right.size()) {
		if (left[i] <= right[j]) {
			vec[k] = left[i];
			i++;
		} else {
			vec[k] = right[j];
			j++;
		}
		k++;
	}
	// Copy the remaining elements of the left vector, if any
	while (i < left.size()) {
		vec[k] = left[i];
		i++;
		k++;
	}
	// Copy the remaining elements of the right vector, if any
	while (j < right.size()) {
		vec[k] = right[j];
		j++;
		k++;
	}
}

void mergeSortVectorHelper(std::vector<int>& vec, int start, int end, int threshold) {
	if (start < end) {
		if (end - start + 1 <= threshold) {
			// Switch to insertion sort for small subvectors
			insertionSortVector(vec);
		} else {
			int mid = start + (end - start) / 2;
			// Recursively sort the left and right subvectors
			mergeSortVectorHelper(vec, start, mid, threshold);
			mergeSortVectorHelper(vec, mid + 1, end, threshold);
			// Merge the sorted subvectors
			mergeVector(vec, start, mid, end);
		}
	}
}

void mergeSortVector(std::vector<int>& vec) {
	int threshold = 10;// Threshold value for when to switch to insertion sort
	// Call the helper function to perform merge sort on the vector
	mergeSortVectorHelper(vec, 0, vec.size() - 1, threshold);
}

//-------------------------------List merge-insertionSort---------------------

void insertionSortList(std::list<int>& lis) {
	// Insertion sort algorithm for the list
	for (std::list<int>::iterator it = lis.begin(); it != lis.end(); it++) {
		std::list<int>::iterator j = it;
		while (j != lis.begin() && *std::prev(j) > *j) {
			std::iter_swap(j, std::prev(j));
			j--;
		}
	}
}

void mergeList(std::list<int>& lis, int start, int mid, int end) {
	// Merge two sorted sublists into a single sorted list
	std::list<int> left(std::next(lis.begin(), start), std::next(lis.begin(), mid + 1));
	std::list<int> right(std::next(lis.begin(), mid + 1), std::next(lis.begin(), end + 1));

	std::list<int>::iterator i = left.begin();
	std::list<int>::iterator j = right.begin();
	std::list<int>::iterator k = std::next(lis.begin(), start);

	while (i != left.end() && j != right.end()) {
		if (*i <= *j) {
			*k = *i;
			i++;
		} else {
			*k = *j;
			j++;
		}
		k++;
	}
	// Copy the remaining elements of the left list, if any
	while (i != left.end()) {
		*k = *i;
		i++;
		k++;
	}
	// Copy the remaining elements of the right list, if any
	while (j != right.end()) {
		*k = *j;
		j++;
		k++;
	}
}

void mergeSortListHelper(std::list<int>& lis, int start, int end, int threshold) {
	if (start < end) {
		if (end - start + 1 <= threshold) {
			// Switch to insertion sort for small sublist
			insertionSortList(lis);
		} else {
			int mid = start + (end - start) / 2;
			// Recursively sort the left and right sublist
			mergeSortListHelper(lis, start, mid, threshold);
			mergeSortListHelper(lis, mid + 1, end, threshold);
			// Merge the sorted sublist
			mergeList(lis, start, mid, end);
		}
	}
}

void mergeSortList(std::list<int>& lis) {
	int threshold = 10; // Threshold value for when to switch to insertion sort
	// Call the helper function to perform merge sort on the vector
	mergeSortListHelper(lis, 0, lis.size() - 1, threshold);
}
