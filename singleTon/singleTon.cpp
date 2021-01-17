#include <iostream>
using namespace std;

class SingleLog{
public:
	static SingleLog *creatSingle()
	{
		if (_ins == nullptr)
		{
			_ins = new SingleLog;//
		}
		return _ins;//
	}

	static void deleteSingle()
	{
		if (_ins != nullptr)
		{
			delete _ins;
			_ins = nullptr;//
		}
	}
	void run()
	{
		cout << "_ins is running!!!" << endl;//
	}


private:
	SingleLog(){};
	SingleLog(const SingleLog & another){};//
	SingleLog & operator=(const SingleLog & another){};//
	~SingleLog(){};
	static SingleLog *_ins;

};
SingleLog *SingleLog::_ins = nullptr;



int main()
{
	SingleLog *ptr = SingleLog::creatSingle();
	ptr->run();
	SingleLog::deleteSingle();
	return 0;

}