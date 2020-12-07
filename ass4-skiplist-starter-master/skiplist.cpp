//
// Created by Yusuf Pisan on 4/26/18.
//

#include <cassert>
#include <climits>
#include <cstdlib>
#include <iostream>

#include "skiplist.h"

using namespace std;

ostream &operator<<(ostream &out, const SkipList &skip) {
  for (int d = skip.maxLevel - 1; d >= 0; d--) {
    out << d << ": ";
    auto *curr = skip.head->forward[d];
    if (curr != skip.tail) {
      out << curr->value;
      curr = curr->forward[d];
    }
    while (curr != nullptr && curr != skip.tail) {
      out << "-->" << curr->value;
      curr = curr->forward[d];
    }
    out << endl;
  }
  return out;
}

SNode::SNode(int value) : value{value} {}

// how many forward/backward pointers it has
int SNode::height() const { return 0; }

// increase the number of forward/backward pointers it has
void SNode::increaseHeight() {}

SkipList::SkipList(int maxLevel, int probability)
    : maxLevel{maxLevel}, probability{probability} {
  assert(maxLevel > 0 && probability >= 0 && probability < 100);
}

bool SkipList::shouldInsertAtHigher() const {
  return rand() % 100 < probability;
}

bool SkipList::add(const vector<int> &values) { return true; }

bool SkipList::add(int value) { return true; }

SkipList::~SkipList() {
  // need to delete individual nodes
}

bool SkipList::remove(int data) { return true; }

// get the node that would be before this data
// at level-0
vector<SNode *> SkipList::getBeforeNodes(int data) const {
  vector<SNode *> v(maxLevel);
  return v;
}

SNode *SkipList::containsSNode(int data) const { return nullptr; }

bool SkipList::contains(int data) const { return true; }

void SkipList::connect2AtLevel(SNode *a, SNode *b, int level) {}

void SkipList::connect3AtLevel(SNode *a, SNode *b, SNode *c, int level) {}