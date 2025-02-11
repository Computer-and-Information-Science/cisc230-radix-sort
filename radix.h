#include <cstddef>
#include <vector>

// sort - Performs a radix sort on the given array. Assumes the given array
//	contains only non-negative integers no greater than 99,999. Since the
//	algorithm works only on integers, this function is not implemented as a
//	template. Further, the idea of a comparison function is not applicable
//	given that the algorithm only supports ascending sort of integer values.
void sort (int a[], size_t n) {
	// Create 10 buckets for sorting
	std::vector<std::vector<int>> buckets(10);

	// Find greatest value in the array
	int max_value = a[0];
	for (size_t i = 1; i < n; ++i)
		if (a[i] > max_value)
			max_value = a[i];

	// Initialize divisor to 1, which is multiplied by 10 for each iteration.
	int divisor = 1;

	// Perform radix sort
	while (divisor < max_value) {

		// Clear buckets
		for (size_t i = 0; i < 10; ++i)
			buckets[i].clear();

		// Place each number in the appropriate bucket
		for (size_t i = 0; i < n; ++i) {
			int digit = (a[i] / divisor) % 10;
			buckets[digit].push_back(a[i]);
		}

		// Concatenate buckets back into the array
		size_t index = 0;
		for (size_t i = 0; i < 10; ++i) {
			for (size_t j = 0; j < buckets[i].size(); ++j) {
				a[index++] = buckets[i][j];
			}
		}

		divisor *= 10;
	}
}
