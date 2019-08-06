#pragma once

class string {

  char *__string__;
  unsigned int sz;
  unsigned int cap;
  
public:

  string ();

  unsigned int size ();

  unsigned int capacity ();

  char get_char (unsigned int num);

  string get_substring (unsigned int lval = 0, unsigned int rval = size);

  void reserve (unsigned int _add_cap);

  bool empty ();

  void clear ();

  void push_back (char _char);

  void push_top (char _char);

  char pop_top ();

  char pop_back ();

  void insert (char _char, unsigned int _place);

  void replace (unsigned int pos, unsigned int len, string& _cashe_string);

  string& operator= (string& _cashe_string);

  string& operator+= (string& _cashe_string);
  
  bool operator== (string& _cashe_string1); 
  
  ~string ();
  
};
