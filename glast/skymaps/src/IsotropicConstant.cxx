/** @file IsotropicConstant.cxx
    @brief implement IsotropicConstant
$Header: /glast/ScienceTools/glast/skymaps/src/IsotropicConstant.cxx,v 1.1.2.2 2017/02/01 04:24:01 jasercio Exp $
*/

#include "skymaps/IsotropicConstant.h"
using namespace skymaps;

IsotropicConstant::IsotropicConstant(double constant)
:  m_constant(constant)
{
    setName("constant");
}

IsotropicConstant::~IsotropicConstant()
{
}

double IsotropicConstant::value(const astro::SkyDir& /*dir*/, double energy)const
{
    return m_constant;
}

double IsotropicConstant::integral(const astro::SkyDir& /*dir*/, double a, double b)const
{
    return m_constant*(b-a);
}
