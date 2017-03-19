/*
 * https://www.careercup.com/question?id=5721669436964864
 */

#include <iostream>

typedef struct Node {
  int _v;
  Node* _left;
  Node* _right;
}Node;

class Tree {
  public:
    Tree() : _root(nullptr) {}
    virtual ~Tree();
    void insert(int v);
    Node* search(int v, Node* node);
    void inOrder();
    void levelOrder();
    void reverseLevelOrder();
    int getHeight();
  private:
    void _insert(int v, Node* node);
    void _delete(Node* node);
    void _inOrder(Node* node);
    void _levelOrder(Node* node, int lv);
    void _reverseLevelOrder(Node* node, int lv);
    int _getHeight(Node* node);
    Node* _root = nullptr;
};

int main(void)
{
  Tree* t = new Tree();
  t->insert(4);
  t->insert(2);
  t->insert(5);
  t->insert(3);
  t->insert(1);

  t->inOrder();
  t->levelOrder();
  t->reverseLevelOrder();

  delete t;

  return 0;
}

Tree::~Tree()
{
  _delete(_root);
}

void Tree::insert(int v)
{
  if (nullptr == _root) {
    _root = new Node();
    _root->_v = v;
    return;
  }
  _insert(v, _root);
}

Node * Tree::search(int v, Node* node)
{
  if (nullptr == node) return nullptr;

  if (node->_v > v) {
    return search(v, node->_left);
  }
  else if (node->_v == v) {
    return node;
  }
  else {
    return search(v, node->_right);
  }
}

void Tree::inOrder()
{
  _inOrder(_root);
  std::cout << std::endl;
}

void Tree::levelOrder()
{
  int h = getHeight();
  for (int i = 1; i <= h; ++i) {
    _levelOrder(_root, i);
  }
  std::cout << std::endl;
}

void Tree::reverseLevelOrder()
{
  int h = getHeight();
  for (int i = h; i > 0; --i) {
    _levelOrder(_root, i);
  }
}

int Tree::getHeight()
{
  return _getHeight(_root);
}

void Tree::_insert(int v, Node* node)
{
  if (node->_v == v) return;

  if (node->_v > v) {
    if (nullptr == node->_left) {
      node->_left = new Node();
      node->_left->_v = v;
    }
    else {
      _insert(v, node->_left);
    }
  }

  else if (node->_v < v) {
    if (nullptr == node->_right) {
      node->_right = new Node();
      node->_right->_v = v;
    }
    else {
      _insert(v, node->_right);
    }
  }
}

void Tree::_delete(Node * node)
{
  if (nullptr == node->_left && nullptr == node->_right) {
    delete node;
  }
  else {
    if(nullptr != node->_left)
      _delete(node->_left);
    if(nullptr != node->_right)
      _delete(node->_right);
  }
}

void Tree::_inOrder(Node * node)
{
  if (nullptr == node) return;

  if (nullptr != node->_left) _inOrder(node->_left);
  std::cout << node->_v << ' ';
  if (nullptr != node->_right) _inOrder(node->_right);
}

void Tree::_levelOrder(Node * node, int lv)
{
  if (nullptr == node) return;
  if (lv == 1) std::cout << node->_v << ' ';
  else {
    _levelOrder(node->_left, lv - 1);
    _levelOrder(node->_right, lv - 1);
  }
}

void Tree::_reverseLevelOrder(Node * node, int lv)
{
}

int Tree::_getHeight(Node * node)
{
  if (nullptr == node) return 0;

  int lh = _getHeight(node->_left);
  int rh = _getHeight(node->_right);

  return (lh > rh ? lh + 1: rh + 1);
}

