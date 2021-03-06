#include <list>
#include <string>

using namespace std;

class AbstractObject
{
 public:
  // public methods
  AbstractObject* describe(string description);
  virtual string show() const;

 protected:
  // attributes
  int id;
  string owner;
  string description;
  list<string> tags;
  AbstractObject* child;

  // private methods
  friend std::ostream& operator<<(std::ostream&, const AbstractObject&);
};
