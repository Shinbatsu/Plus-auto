#include "sample_hello_world.h"

#include <boost/program_options.hpp>

#include <iostream>

// Наше приложение будет иметь один параметр командной строки - "--help"
auto parseArgs(int argc, char* argv[]) {
  namespace po = boost::program_options;
  po::options_description desc("Allowed options");
  desc.add_options()
    ("help,h", "Produce this message");

  auto parsed = po::command_line_parser(argc, argv)
    .options(desc)
    .allow_unregistered()
    .run();

  po::variables_map vm;
  po::store(parsed, vm);
  po::notify(vm);

  // В C++17 больше нет необходимости использовать std::make_pair
  return std::pair(vm, desc);
}

int main(int argc, char* argv[]) try {
  auto [vm, desc] = parseArgs(argc, argv);

  if (vm.count("help")) {  
    std::cout << desc << std::endl;
    return 0;
  }

  std::cout << sample::HelloWorld{} << std::endl;

  return 0;
} catch (std::exception& e) {
  std::cerr << "Unhandled exception: " << e.what() << std::endl;
  return -1;
}