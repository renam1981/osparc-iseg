/*
 * Copyright (c) 2018 The Foundation for Research on Information Technologies in Society (IT'IS).
 * 
 * This file is part of iSEG
 * (see https://github.com/ITISFoundation/osparc-iseg).
 * 
 * This software is released under the MIT License.
 *  https://opensource.org/licenses/MIT
 */
#pragma once

#include "iSegCore.h"

#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

namespace iseg {

class ISEG_CORE_API IndexPriorityQueue
{
public:
	IndexPriorityQueue(unsigned size2, float* valuemap1);
	unsigned pop();
	unsigned size();
	void insert(unsigned pos);
	void insert(unsigned pos, float value);
	void change(unsigned pos, float value);
	void make_smaller(unsigned pos, float value);
	void make_larger(unsigned pos, float value);
	void remove(unsigned pos);
	void print_queue();
	bool empty();
	void clear();
	bool in_queue(unsigned pos);
	~IndexPriorityQueue();

private:
	int* indexmap;
	float* valuemap;
	std::vector<unsigned> Q;
	unsigned l;
	unsigned size1;
};
} // namespace iseg
