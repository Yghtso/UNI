#include <iostream>

void print_array(int *array, int size) {
  if (!size) return;

  std::cout << '[';

  for (int i = 0; i < size - 1; i++) {
    std::cout << array[i] << ", ";
  }
  std::cout << array[size - 1] << ']' << std::endl;
}

void selection_sort(int *array, int size) {
  if (!size) return;

  for (int i = 0; i < size - 1; i++) {
    int min = i;
    for (int j = i + 1; j < size; j++) {
      if (array[j] < array[min]) min = j;
    }
    int tmp = array[i];
    array[i] = array[min];
    array[min] = tmp;
  }
}

void bubble_sort(int *array, const int size) {
  bool ordered = false;

  for (int i = 0; i < size - 1 && !ordered; i++) {
    ordered = true;
    for (int j = 0; j < size - 1; j++) {
      if (array[j] > array[j + 1]) {
        int tmp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = tmp;
        ordered = false;
      }
    }
  }
}

bool binary_search(const int *array, int size, int value, int &index) {
  if (array == nullptr || size <= 0) return false;

  int inf = 0;
  int sup = size - 1;

  while (inf <= sup) {
    int middle = (inf + sup) / 2;

    if (array[middle] == value) {
      index = middle;
      return true;
    }

    if (array[middle] < value) {
      inf = middle + 1;
    } else {
      sup = middle - 1;
    }
  }

  index = -1;
  return false;
}

int main() {
  int numbers1[] = {3, 43, 5, 6, 321, 3, 5, 887, 3, 21, 23};

  int lenght = sizeof(numbers1) / sizeof(numbers1[0]);

  print_array(numbers1, lenght);
  selection_sort(numbers1, lenght);
  print_array(numbers1, lenght);

  int index;
  bool found = binary_search(numbers1, lenght, 4, index);

  if (found) {
    std::cout << "Found at index " << index << std::endl;
  } else {
    std::cout << "Not found" << std::endl;
  }

  return 0;
}