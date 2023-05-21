#include<iostream>
#include<string>

using namespace std;

class Building;

class Laowang
{
public:
    Laowang();
    void visit1();
    void visit2();
    Building* building;
private:

};

class Building
{
    friend void Laowang::visit1();
public:
    Building();
    string m_SittingRoom;
private:
    string m_BedRoom;
};

Laowang::Laowang()
{
    building = new Building;
}
void Laowang::visit1()
{
    cout << "隔壁老王LaoWang类中的visit1()函数正在访问：" << building->m_SittingRoom << endl;
	cout << "隔壁老王LaoWang类中的visit1()函数正在访问：" << building->m_BedRoom << endl;

}
void Laowang::visit2()
{
	cout << "隔壁老王LaoWang类中的visit2()函数正在访问：" << building->m_SittingRoom << endl;
	//cout << "隔壁老王LaoWang类中的visit2()函数正在访问：" << building->m_BedRoom << endl;	//错误！私有属性不可访问
}
Building::Building()
{
    m_SittingRoom = "客厅";
    m_BedRoom = "卧室";
}
void test()
{
    Laowang lw;
    lw.visit1();
    lw.visit2();
}
int main()
{
    test();
    return 0;
}
