/** @file IsotropicConstant.cxx
    @brief implement IsotropicConstant
$Header: /heacvs/glast/ScienceTools/glast/skymaps/src/IsotropicConstant.cxx,v 1.3 2016/09/12 15:03:35 jasercio Exp $
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
