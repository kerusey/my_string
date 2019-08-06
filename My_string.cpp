
string& string::operator= (string& _cashe_string) {
  for (int i = 0 ; i < sz ; i++)
    __string__[i] = _cashe_string[i];
}

string::string (char* _str_, unsigned int _sz = 0) {
  if (_sz != 0)
    sz = _sz;
  else {
    int i = 0;
    while (_str_[i] != '\0')
      i++;
    sz = i;
    delete i;
  }
  cap = 2*sz;
  for (int i = 0 ; i < sz ; ++i)
    __string__[i] = _str_[i];
}



string::~string () {}
