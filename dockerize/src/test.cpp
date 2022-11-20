#include "sample_hello_world.h"

#include <sstream>

#include <gtest/gtest.h>

// Простой тест, выводим HelloWorld в поток, сравниваем вывод с ожидаемым
TEST(HelloWorld, Test) {
  std::ostringstream oss;
  oss << sample::HelloWorld{};
  ASSERT_EQ("Hello World!", oss.str());
}

// Точка входа в тестовое приложение
int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}