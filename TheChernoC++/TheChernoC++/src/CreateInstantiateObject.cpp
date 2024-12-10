#include <iostream>
#include <string>
using String = std::string;  // Alias for std::string
//typedef std::string String; // Alias older way

class Entity {
private :
	String m_name;
public:
	Entity(): m_name("Unknown"){}
	Entity(const String& name) : m_name(name) {}

	// Function returning a const reference
	const String& getName() const {
		return m_name;
	}
};
int main() {
	Entity entity;
}