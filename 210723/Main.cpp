#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<string>
#include<unordered_set>


struct Record {
	int id;
	std::string name;
	double vage;
	Record(int id, std::string name, double vage) {
		this->id = id;
		this->name = name;
		this->vage = vage;
	}
	Record():id(1),name("no name"),vage(0.0){}

	//kostil'
	/*bool operator<(const Record& obj)const {
		return id < obj.id;
	}*/

	//size_t hash()const;

};

//namespace std {
//	template<>
//	struct hash<Record> {
//		 size_t operator()(const Record& obj) {
//			 return 1;
//		}
//	};
//}

//void F00() {
//	//std::unordered_set<Record>coll;
//	std::set<Record>coll;
//	coll.insert(Record());
//	/*std::map<int, Record> coll2;
//	Record a(1, "Ivan", 1.1);
//	coll2.insert(std::pair<int, Record>(a.id, a));*/
//}

int* arrrr(int* arr, const int size,int num) {
	if (num > size) {
		int* tmp;
		for (size_t i = size; i < num; i++)
		{
			arr[i + size] = 0;
		}
		tmp = arr;
		delete arr;
		return tmp;
	}
	if (size > num)
		return arr;
}


int main() {

	//std::vector<int> data;//{1,2,3,4,5,6};
	//data.reserve(100000);

	////std::cout << data.capacity();

	//for (size_t i = 0; i < data.capacity(); ++i)
	//{
	//	data.emplace_back(::rand() % 10000);
	//}

	//// cikl prohoda po array + povtoreniya

	//std::set<int> uniq_elements;

	//for (size_t i = 0; i < data.size(); ++i) {
	//	uniq_elements.insert(data[i]);
	//}
	////for(auto &el:data) uniq_elements.insert(el);

	//std::cout << data.size() << "\tall data\n" << uniq_elements.size() << "\tdifferent data\n";

	//std::vector<int> uniq_data;
	//for (auto& el : data) {
	//	auto find = std::find(uniq_data.begin(), uniq_data.end(), el);
	//	if (find == uniq_data.end())
	//		uniq_data.push_back(el);
	//}
	//std::cout << "\n\n________________________________\n\n\n";
	//std::cout << data.size() << "\tall data\n" << uniq_data.size() << "\tdifferent data\n";


	//std::vector<int> data_other;

	//data_other.reserve(100000);

	//for (size_t i = 0; i < data_other.capacity(); ++i)
	//{
	//	data_other.emplace_back(-5000+::rand() % 10000);
	//}

	//std::set<int> uniq_elements_other;

	//for (size_t i = 0; i < data_other.size(); ++i) {

	//	uniq_elements_other.insert(data_other[i]);
	//}
	//std::cout << "\n\n________________________________\n\n\n";
	//std::cout << data_other.size() << "\tall other data\n" << uniq_elements_other.size() << "\tdifferent other data\n";


	//std::vector<int> result;
	//std::set_intersection(uniq_elements.begin(),
	//	uniq_elements.end(), uniq_elements_other.begin(),
	//	uniq_elements_other.end(),
	//	std::back_inserter(result));

	//std::cout << "\n\n________________________________\n\n\n";
	//std::cout << result.size() << "\tresult data\n";// << uniq_elements_other.size() << "\tdifferent other data\n";


	return {};
}