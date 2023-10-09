#ifndef COUNTER_HPP
#define COUNTER_HPP

#include <string>
#include <vector>

std::vector<std::string> GetFilesList(std::string directory);

bool CheckExtension(const std::string& str,
                    const std::vector<std::string>& ext_list);

size_t CountLines(const std::string& url);

size_t CountCode(std::string directory);

#endif
