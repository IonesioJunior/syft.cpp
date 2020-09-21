#include "message.hpp"

int main(int argc,char** argv){
	AbstractMessage msg = AbstractMessage();
	std::cout << "Message name: " << std::endl;
	std::cout << typeid(msg).name() << std::endl;
	return 0;
};
