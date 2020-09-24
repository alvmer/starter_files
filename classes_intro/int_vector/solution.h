#pragma once

#include <iterator>
#include <initializer_list>
#include <stdexcept>

class IntVector {
public:
  /* explicit конструктор с размером */

  // конструктор со списком инициализации 
  IntVector(std::initializer_list<int> list) {
    throw std::logic_error("Not implemented");
  }

  /* конструктор копирования */

  /* конструктор перемещения */

  /* деструктор */

  /* оператор присваивания copy&swap */

  /* const-метод Size */

  /* const-метод Capacity */

  /* void-метод PushBack(int) */

  /* void-метод PopBack() */

  /* void-метод Clear() */

  /* void-метод Reserve() */

  void Swap(IntVector& rhs) {
    throw std::logic_error("Not implemented");
  }

  // для доступа типа запись
  int& operator[](size_t ind) {
    throw std::logic_error("Not implemented");
  }

  // для доступа типа чтение
  int operator[](size_t ind) const {
    throw std::logic_error("Not implemented");
  }
};
