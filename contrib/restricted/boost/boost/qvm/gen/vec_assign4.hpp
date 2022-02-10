//Copyright (c) 2008-2017 Emil Dotchevski and Reverge Studios, Inc. 
 
//Distributed under the Boost Software License, Version 1.0. (See accompanying 
//file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt) 
 
#ifndef BOOST_QVM_D49FD4A4597E35CF3222F4CCCFD3902D 
#define BOOST_QVM_D49FD4A4597E35CF3222F4CCCFD3902D 
 
//This file was generated by a program. Do not edit manually. 
 
#include <boost/qvm/enable_if.hpp> 
#include <boost/qvm/inline.hpp> 
#include <boost/qvm/vec_traits.hpp> 
 
namespace 
boost 
    { 
    namespace 
    qvm 
        { 
        template <class A,class B> 
        BOOST_QVM_INLINE_OPERATIONS 
        typename enable_if_c< 
            vec_traits<A>::dim==4 && vec_traits<B>::dim==4, 
            A &>::type 
        assign( A & a, B const & b ) 
            { 
            vec_traits<A>::template write_element<0>(a)=vec_traits<B>::template read_element<0>(b); 
            vec_traits<A>::template write_element<1>(a)=vec_traits<B>::template read_element<1>(b); 
            vec_traits<A>::template write_element<2>(a)=vec_traits<B>::template read_element<2>(b); 
            vec_traits<A>::template write_element<3>(a)=vec_traits<B>::template read_element<3>(b); 
            return a; 
            } 
 
        namespace 
        sfinae 
            { 
            using ::boost::qvm::assign; 
            } 
 
        namespace 
        qvm_detail 
            { 
            template <int D> 
            struct assign_vv_defined; 
 
            template <> 
            struct 
            assign_vv_defined<4> 
                { 
                static bool const value=true; 
                }; 
            } 
 
        } 
    } 
 
#endif 
