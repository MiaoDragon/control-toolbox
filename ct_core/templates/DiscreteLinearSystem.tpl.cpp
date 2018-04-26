/**********************************************************************************************************************
This file is part of the Control Toolbox (https://adrlab.bitbucket.io/ct), copyright by ETH Zurich, Google Inc.
Licensed under Apache2 license (see LICENSE file in main directory)
**********************************************************************************************************************/

#include "LINEAR_SYSTEM_NAME.h"

namespace ct {
namespace NS1 {
namespace NS2 {


const LINEAR_SYSTEM_NAME::state_matrix_t& LINEAR_SYSTEM_NAME::getDerivativeState(
    const state_vector_t& x,
    const control_vector_t& u,
    const int t)
{
    SCALAR* jac = dFdx_.data();
    Eigen::Matrix<SCALAR, STATE_DIM + CONTROL_DIM, 1> x_in;
    x_in << x, u;

    AUTOGENERATED_CODE_PLACEHOLDER_JAC_A

    return dFdx_;
}

const LINEAR_SYSTEM_NAME::state_control_matrix_t& LINEAR_SYSTEM_NAME::getDerivativeControl(
    const state_vector_t& x,
    const control_vector_t& u,
    const int t)
{
    SCALAR* jac = dFdu_.data();
    Eigen::Matrix<SCALAR, STATE_DIM + CONTROL_DIM, 1> x_in;
    x_in << x, u;

    AUTOGENERATED_CODE_PLACEHOLDER_JAC_B

    return dFdu_;
}

}
}
}
