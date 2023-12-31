// test_data.cpp
#include "IntData.h"
#include "DoubleData.h"

int main() {
    IntData data1;
    IntData data2(10);
    IntData* pData1 = new IntData;
    IntData* pData2 = new IntData(20);

    data1.print();
    data2.print();
    pData1->setData();
    pData1->getData();
    pData2->print();

    delete pData1;
    delete pData2;

    DoubleData doubleData;
    doubleData.setData();
    doubleData.getData();

    return 0;
}