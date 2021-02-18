//
// Created by rusla on 18.02.2021.
//

#ifndef UNTITLED2_A_H
#define UNTITLED2_A_H


class A {

protected:
    int val1;
public:
    A()
    {
        val1 = 0;
    }

    A(int a)
    {
        val1 = a;
    }
};

class B : virtual public A
{

protected:
    int val2;
public:
    B()
    {
        val1 = 0;
        val2 = 0;
    }

    B(int a, int b)
    {
        val1 = a;
        val2 = b;
    }
};

class C : virtual public A
{

protected:
    int val3;
public:
    C()
    {
        val1 = 0;
        val3 = 0;
    }

    C(int a, int c)
    {
        val1 = a;
        val3 = c;
    }
};

class D : virtual public A
{

protected:
    int val4;
public:
    D()
    {
        val1 = 0;
        val4 = 0;
    }

    D(int a, int d)
    {
        val1 = a;
        val4 = d;
    }
};

class E : B,C,D
{
private:
    int val5;

public:
    E()
    {
        val1 =0;
        val2 = 0;
        val3 = 0;
        val4 = 0;
        val5 = 0;
    }

    E(int a, int b, int c, int d)
    {
        val1 =0;
        val2 = 0;
        val3 = 0;
        val4 = 0;
        val5 = 0;
    }
};


#endif //UNTITLED2_A_H
