#pragma once

#include <iostream>
#include <vector>

#define log(x) std::cout << x << std::endl;

int get_value();

std::vector<int> get_vector();

void output_vector(std::vector<int> v);

void swap(int *xp, int *yp);

void pause();

void search_output(int temp, int comparisons);
