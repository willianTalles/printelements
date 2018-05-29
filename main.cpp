#include <iostream>
using std::cout;
using std::endl;
#include <set>
using std::set;

template<typename TContainer>
void print_elements(const TContainer& collection, const char* label="", const char separator=' '){
	cout << label;
	for (auto i = collection.begin(); i != collection.end() ; ++i){
		cout << (*i) << separator;
	}

	cout<<endl;
}

int main() {
	set<int> numeros;
	numeros.insert(3);
	numeros.insert(1);
	numeros.insert(4);
	numeros.insert(1);
	numeros.insert(2);
	numeros.insert(5);
	print_elements(numeros, "Set: ");
	print_elements(numeros, "CSV Set: ", ';');
	return 0;
}
