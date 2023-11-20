// DoubleData.h
#ifndef __DOUBLEDATA_H__
#define __DOUBLEDATA_H__

#include "BaseData.h"

class DoubleData : public BaseData {
private:
    double m_data;

public:
    DoubleData(double data = 0);
    ~DoubleData();
    void print() override;
    void setData() override;
    void getData() const override;
};

#endif