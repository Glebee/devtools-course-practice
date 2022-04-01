// Copyright 2022 Soldatov Gleb

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Soldatov_Gleb_ComplexNumberTest, Complex_Number_Create_Zero) {
    double re = 0.0;
    double im = 0.0;
    ComplexNumber z(re, im);
    EXPECT_EQ(re, z.getRe());
    EXPECT_EQ(im, z.getIm());
}
TEST(Soldatov_Gleb_ComplexNumberTest, Complex_Number_Addition) {
    ComplexNumber re(7, 10);
    ComplexNumber im(3, 7);
    ComplexNumber z = re + im;
    EXPECT_EQ(10, z.getRe());
    EXPECT_EQ(17, z.getIm());
}

TEST(Soldatov_Gleb_ComplexNumberTest, Complex_Number_Subtraction) {
    ComplexNumber re(7, 10);
    ComplexNumber im(3, 7);
    ComplexNumber z = re - im;
    EXPECT_EQ(4, z.getRe());
    EXPECT_EQ(3, z.getIm());
}

TEST(Soldatov_Gleb_ComplexNumberTest, Complex_Number_Multiply) {
    ComplexNumber re(7, 10);
    ComplexNumber im(3, 7);
    ComplexNumber z = re * im;
    EXPECT_EQ(-49, z.getRe());
    EXPECT_EQ(79, z.getIm());
}

TEST(Soldatov_Gleb_ComplexNumberTest, Complex_Number_Copy) {
    ComplexNumber re(7, 10);
    ComplexNumber z(re);
    EXPECT_EQ(7, z.getRe());
    EXPECT_EQ(10, z.getIm());
}