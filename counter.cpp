#include "counter.hpp"

std::vector<std::string> GetFilesList(std::string directory) { return {}; }

bool CheckExtension(const std::string &str,
                    const std::vector<std::string> &ext_list) {
  return false;
}

size_t CountLines(const std::string &url) { return 0; }

size_t CountCode(std::string directory) {
  auto files = GetFilesList(directory);

  size_t counter = 0;

  for (const auto &url : files)
    if (CheckExtension(url, {".hpp", ".cpp", ".h", ".c"}))
      counter += CountCode(url);

  return counter;
}
