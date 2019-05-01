#pragma once
#include <iostream>
#include <array>
void selectionSort(double list[], const std::size_t size);
template <int N>
void selectionSort(std::array<double, N> &list) {
  constexpr int size = N;
  // for ѭ����ÿ�δ�list[i]~list[size-1]���ҳ�һ����С��������list[i]����
  for (std::size_t i = 0; i < size - 1; i++) {
    // ��ʼ������ list[i]��Ϊ��Сֵ����i��Ϊ��Сֵ������
    double min = list[ i ];
    int index = i;

    // ��ѭ�����ҳ�list[i+1]~list[size-1]�е���Сֵ�������±�
    for (std::size_t j = i + 1; j < size; j++) {
      if (min > list[ j ]) {
        min = list[ j ];
        index = j;
      }
    }

    // ��list[i]������Сֵ����ô����list[i] <--> list[index]
    if (index != i) {
      list[ index ] = list[ i ];
      list[ i ] = min;
    }
  }
}