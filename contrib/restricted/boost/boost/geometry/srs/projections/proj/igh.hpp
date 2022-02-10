#ifndef BOOST_GEOMETRY_PROJECTIONS_IGH_HPP 
#define BOOST_GEOMETRY_PROJECTIONS_IGH_HPP 
 
// Boost.Geometry - extensions-gis-projections (based on PROJ4) 
// This file is automatically generated. DO NOT EDIT. 
 
// Copyright (c) 2008-2015 Barend Gehrels, Amsterdam, the Netherlands. 
 
// This file was modified by Oracle on 2017. 
// Modifications copyright (c) 2017, Oracle and/or its affiliates. 
// Contributed and/or modified by Adam Wulkiewicz, on behalf of Oracle. 
 
// Use, modification and distribution is subject to the Boost Software License, 
// Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt) 
 
// This file is converted from PROJ4, http://trac.osgeo.org/proj 
// PROJ4 is originally written by Gerald Evenden (then of the USGS) 
// PROJ4 is maintained by Frank Warmerdam 
// PROJ4 is converted to Boost.Geometry by Barend Gehrels 
 
// Last updated version of proj: 4.9.1 
 
// Original copyright notice: 
 
// Permission is hereby granted, free of charge, to any person obtaining a 
// copy of this software and associated documentation files (the "Software"), 
// to deal in the Software without restriction, including without limitation 
// the rights to use, copy, modify, merge, publish, distribute, sublicense, 
// and/or sell copies of the Software, and to permit persons to whom the 
// Software is furnished to do so, subject to the following conditions: 
 
// The above copyright notice and this permission notice shall be included 
// in all copies or substantial portions of the Software. 
 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS 
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL 
// THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING 
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER 
// DEALINGS IN THE SOFTWARE. 
 
#include <boost/geometry/util/math.hpp> 
#include <boost/shared_ptr.hpp> 
 
#include <boost/geometry/srs/projections/impl/base_static.hpp> 
#include <boost/geometry/srs/projections/impl/base_dynamic.hpp> 
#include <boost/geometry/srs/projections/impl/projects.hpp> 
#include <boost/geometry/srs/projections/impl/factory_entry.hpp> 
#include <boost/geometry/srs/projections/proj/gn_sinu.hpp> 
#include <boost/geometry/srs/projections/proj/moll.hpp> 
 
namespace boost { namespace geometry 
{ 
 
namespace srs { namespace par4 
{ 
    struct igh {}; 
 
}} //namespace srs::par4 
 
namespace projections 
{ 
    #ifndef DOXYGEN_NO_DETAIL 
    namespace detail { namespace igh 
    { 
 
            template <typename CalculationType, typename Parameters> 
            struct par_igh 
            { 
                boost::shared_ptr<base_v<CalculationType, Parameters> > pj[12]; 
                CalculationType dy0; 
            }; 
 
            template <typename T> 
            inline T d4044118() { return (T(40) + T(44)/T(60.) + T(11.8)/T(3600.)) * geometry::math::d2r<T>(); } // 40d 44' 11.8" [degrees] 
 
            template <typename T> 
            inline T d10() { return T(10) * geometry::math::d2r<T>(); } 
            template <typename T> 
            inline T d20() { return T(20) * geometry::math::d2r<T>(); } 
            template <typename T> 
            inline T d30() { return T(30) * geometry::math::d2r<T>(); } 
            template <typename T> 
            inline T d40() { return T(40) * geometry::math::d2r<T>(); } 
            template <typename T> 
            inline T d50() { return T(50) * geometry::math::d2r<T>(); } 
            template <typename T> 
            inline T d60() { return T(60) * geometry::math::d2r<T>(); } 
            template <typename T> 
            inline T d80() { return T(80) * geometry::math::d2r<T>(); } 
            template <typename T> 
            inline T d90() { return T(90) * geometry::math::d2r<T>(); } 
            template <typename T> 
            inline T d100() { return T(100) * geometry::math::d2r<T>(); } 
            template <typename T> 
            inline T d140() { return T(140) * geometry::math::d2r<T>(); } 
            template <typename T> 
            inline T d160() { return T(160) * geometry::math::d2r<T>(); } 
            template <typename T> 
            inline T d180() { return T(180) * geometry::math::d2r<T>(); } 
 
            static const double EPSLN = 1.e-10; // allow a little 'slack' on zone edge positions 
 
            // Converted from #define SETUP(n, proj, x_0, y_0, lon_0) 
            template <template <typename, typename> class Entry, typename Parameters, typename CalculationType> 
            inline void do_setup(int n, Parameters const& par, par_igh<CalculationType, Parameters>& proj_parm, 
                                 CalculationType const& x_0, CalculationType const& y_0, 
                                 CalculationType const& lon_0) 
            { 
                Entry<CalculationType, Parameters> entry; 
                proj_parm.pj[n-1].reset(entry.create_new(par)); 
                proj_parm.pj[n-1]->mutable_params().x0 = x_0; 
                proj_parm.pj[n-1]->mutable_params().y0 = y_0; 
                proj_parm.pj[n-1]->mutable_params().lam0 = lon_0; 
            } 
 
            // template class, using CRTP to implement forward/inverse 
            template <typename CalculationType, typename Parameters> 
            struct base_igh_spheroid : public base_t_fi<base_igh_spheroid<CalculationType, Parameters>, 
                     CalculationType, Parameters> 
            { 
 
                typedef CalculationType geographic_type; 
                typedef CalculationType cartesian_type; 
 
                par_igh<CalculationType, Parameters> m_proj_parm; 
 
                inline base_igh_spheroid(const Parameters& par) 
                    : base_t_fi<base_igh_spheroid<CalculationType, Parameters>, 
                     CalculationType, Parameters>(*this, par) {} 
 
                // FORWARD(s_forward)  spheroid 
                // Project coordinates from geographic (lon, lat) to cartesian (x, y) 
                inline void fwd(geographic_type& lp_lon, geographic_type& lp_lat, cartesian_type& xy_x, cartesian_type& xy_y) const 
                { 
                    static const CalculationType d4044118 = igh::d4044118<CalculationType>(); 
                    static const CalculationType d20  =  igh::d20<CalculationType>(); 
                    static const CalculationType d40  =  igh::d40<CalculationType>(); 
                    static const CalculationType d80  =  igh::d80<CalculationType>(); 
                    static const CalculationType d100 = igh::d100<CalculationType>(); 
 
                        int z; 
                        if (lp_lat >=  d4044118) {          // 1|2 
                          z = (lp_lon <= -d40 ? 1: 2); 
                        } 
                        else if (lp_lat >=  0) {            // 3|4 
                          z = (lp_lon <= -d40 ? 3: 4); 
                        } 
                        else if (lp_lat >= -d4044118) {     // 5|6|7|8 
                               if (lp_lon <= -d100) z =  5; // 5 
                          else if (lp_lon <=  -d20) z =  6; // 6 
                          else if (lp_lon <=   d80) z =  7; // 7 
                          else z = 8;                       // 8 
                        } 
                        else {                              // 9|10|11|12 
                               if (lp_lon <= -d100) z =  9; // 9 
                          else if (lp_lon <=  -d20) z = 10; // 10 
                          else if (lp_lon <=   d80) z = 11; // 11 
                          else z = 12;                      // 12 
                        } 
 
                        lp_lon -= this->m_proj_parm.pj[z-1]->params().lam0; 
                        this->m_proj_parm.pj[z-1]->fwd(lp_lon, lp_lat, xy_x, xy_y); 
                        xy_x += this->m_proj_parm.pj[z-1]->params().x0; 
                        xy_y += this->m_proj_parm.pj[z-1]->params().y0; 
                } 
 
                // INVERSE(s_inverse)  spheroid 
                // Project coordinates from cartesian (x, y) to geographic (lon, lat) 
                inline void inv(cartesian_type& xy_x, cartesian_type& xy_y, geographic_type& lp_lon, geographic_type& lp_lat) const 
                { 
                    static const CalculationType d4044118 = igh::d4044118<CalculationType>(); 
                    static const CalculationType d10  =  igh::d10<CalculationType>(); 
                    static const CalculationType d20  =  igh::d20<CalculationType>(); 
                    static const CalculationType d40  =  igh::d40<CalculationType>(); 
                    static const CalculationType d50  =  igh::d50<CalculationType>(); 
                    static const CalculationType d60  =  igh::d60<CalculationType>(); 
                    static const CalculationType d80  =  igh::d80<CalculationType>(); 
                    static const CalculationType d90  =  igh::d90<CalculationType>(); 
                    static const CalculationType d100 = igh::d100<CalculationType>(); 
                    static const CalculationType d160 = igh::d160<CalculationType>(); 
                    static const CalculationType d180 = igh::d180<CalculationType>(); 
 
                    static const CalculationType c2 = 2.0; 
                     
                    const CalculationType y90 = this->m_proj_parm.dy0 + sqrt(c2); // lt=90 corresponds to y=y0+sqrt(2.0) 
 
                        int z = 0; 
                        if (xy_y > y90+EPSLN || xy_y < -y90+EPSLN) // 0 
                          z = 0; 
                        else if (xy_y >=  d4044118)       // 1|2 
                          z = (xy_x <= -d40? 1: 2); 
                        else if (xy_y >=  0)              // 3|4 
                          z = (xy_x <= -d40? 3: 4); 
                        else if (xy_y >= -d4044118) {     // 5|6|7|8 
                               if (xy_x <= -d100) z =  5; // 5 
                          else if (xy_x <=  -d20) z =  6; // 6 
                          else if (xy_x <=   d80) z =  7; // 7 
                          else z = 8;                     // 8 
                        } 
                        else {                            // 9|10|11|12 
                               if (xy_x <= -d100) z =  9; // 9 
                          else if (xy_x <=  -d20) z = 10; // 10 
                          else if (xy_x <=   d80) z = 11; // 11 
                          else z = 12;                    // 12 
                        } 
 
                        if (z) 
                        { 
                          int ok = 0; 
 
                          xy_x -= this->m_proj_parm.pj[z-1]->params().x0; 
                          xy_y -= this->m_proj_parm.pj[z-1]->params().y0; 
                          this->m_proj_parm.pj[z-1]->inv(xy_x, xy_y, lp_lon, lp_lat); 
                          lp_lon += this->m_proj_parm.pj[z-1]->params().lam0; 
 
                          switch (z) { 
                            case  1: ok = (lp_lon >= -d180-EPSLN && lp_lon <=  -d40+EPSLN) || 
                                         ((lp_lon >=  -d40-EPSLN && lp_lon <=  -d10+EPSLN) && 
                                          (lp_lat >=   d60-EPSLN && lp_lat <=   d90+EPSLN)); break; 
                            case  2: ok = (lp_lon >=  -d40-EPSLN && lp_lon <=  d180+EPSLN) || 
                                         ((lp_lon >= -d180-EPSLN && lp_lon <= -d160+EPSLN) && 
                                          (lp_lat >=   d50-EPSLN && lp_lat <=   d90+EPSLN)) || 
                                         ((lp_lon >=  -d50-EPSLN && lp_lon <=  -d40+EPSLN) && 
                                          (lp_lat >=   d60-EPSLN && lp_lat <=   d90+EPSLN)); break; 
                            case  3: ok = (lp_lon >= -d180-EPSLN && lp_lon <=  -d40+EPSLN); break; 
                            case  4: ok = (lp_lon >=  -d40-EPSLN && lp_lon <=  d180+EPSLN); break; 
                            case  5: ok = (lp_lon >= -d180-EPSLN && lp_lon <= -d100+EPSLN); break; 
                            case  6: ok = (lp_lon >= -d100-EPSLN && lp_lon <=  -d20+EPSLN); break; 
                            case  7: ok = (lp_lon >=  -d20-EPSLN && lp_lon <=   d80+EPSLN); break; 
                            case  8: ok = (lp_lon >=   d80-EPSLN && lp_lon <=  d180+EPSLN); break; 
                            case  9: ok = (lp_lon >= -d180-EPSLN && lp_lon <= -d100+EPSLN); break; 
                            case 10: ok = (lp_lon >= -d100-EPSLN && lp_lon <=  -d20+EPSLN); break; 
                            case 11: ok = (lp_lon >=  -d20-EPSLN && lp_lon <=   d80+EPSLN); break; 
                            case 12: ok = (lp_lon >=   d80-EPSLN && lp_lon <=  d180+EPSLN); break; 
                          } 
 
                          z = (!ok? 0: z); // projectable? 
                        } 
                     // if (!z) pj_errno = -15; // invalid x or y 
                        if (!z) lp_lon = HUGE_VAL; 
                        if (!z) lp_lat = HUGE_VAL; 
                } 
 
                static inline std::string get_name() 
                { 
                    return "igh_spheroid"; 
                } 
 
            }; 
 
            // Interrupted Goode Homolosine 
            template <typename CalculationType, typename Parameters> 
            inline void setup_igh(Parameters& par, par_igh<CalculationType, Parameters>& proj_parm) 
            { 
                static const CalculationType d0   =  0; 
                static const CalculationType d4044118 = igh::d4044118<CalculationType>(); 
                static const CalculationType d20  =  igh::d20<CalculationType>(); 
                static const CalculationType d30  =  igh::d30<CalculationType>(); 
                static const CalculationType d60  =  igh::d60<CalculationType>(); 
                static const CalculationType d100 = igh::d100<CalculationType>(); 
                static const CalculationType d140 = igh::d140<CalculationType>(); 
                static const CalculationType d160 = igh::d160<CalculationType>(); 
 
            /* 
              Zones: 
 
                -180            -40                       180 
                  +--------------+-------------------------+    Zones 1,2,9,10,11 & 12: 
                  |1             |2                        |      Mollweide projection 
                  |              |                         | 
                  +--------------+-------------------------+    Zones 3,4,5,6,7 & 8: 
                  |3             |4                        |      Sinusoidal projection 
                  |              |                         | 
                0 +-------+------+-+-----------+-----------+ 
                  |5      |6       |7          |8          | 
                  |       |        |           |           | 
                  +-------+--------+-----------+-----------+ 
                  |9      |10      |11         |12         | 
                  |       |        |           |           | 
                  +-------+--------+-----------+-----------+ 
                -180    -100      -20         80          180 
            */ 
 
 
                    CalculationType lp_lam = 0, lp_phi = d4044118; 
                    CalculationType xy1_x, xy1_y; 
                    CalculationType xy3_x, xy3_y; 
 
                    // sinusoidal zones 
                    do_setup<sinu_entry>(3, par, proj_parm, -d100, d0, -d100); 
                    do_setup<sinu_entry>(4, par, proj_parm,   d30, d0,   d30); 
                    do_setup<sinu_entry>(5, par, proj_parm, -d160, d0, -d160); 
                    do_setup<sinu_entry>(6, par, proj_parm,  -d60, d0,  -d60); 
                    do_setup<sinu_entry>(7, par, proj_parm,   d20, d0,   d20); 
                    do_setup<sinu_entry>(8, par, proj_parm,  d140, d0,  d140); 
 
                    // mollweide zones 
                    do_setup<moll_entry>(1, par, proj_parm, -d100, d0, -d100); 
 
                    // y0 ? 
                     proj_parm.pj[0]->fwd(lp_lam, lp_phi, xy1_x, xy1_y); // zone 1 
                     proj_parm.pj[2]->fwd(lp_lam, lp_phi, xy3_x, xy3_y); // zone 3 
                    // y0 + xy1_y = xy3_y for lt = 40d44'11.8" 
                    proj_parm.dy0 = xy3_y - xy1_y; 
 
                    proj_parm.pj[0]->mutable_params().y0 = proj_parm.dy0; 
 
                    // mollweide zones (cont'd) 
                    do_setup<moll_entry>( 2, par, proj_parm,   d30,  proj_parm.dy0,   d30); 
                    do_setup<moll_entry>( 9, par, proj_parm, -d160, -proj_parm.dy0, -d160); 
                    do_setup<moll_entry>(10, par, proj_parm,  -d60, -proj_parm.dy0,  -d60); 
                    do_setup<moll_entry>(11, par, proj_parm,   d20, -proj_parm.dy0,   d20); 
                    do_setup<moll_entry>(12, par, proj_parm,  d140, -proj_parm.dy0,  d140); 
 
                    par.es = 0.; 
            } 
 
    }} // namespace detail::igh 
    #endif // doxygen 
 
    /*! 
        \brief Interrupted Goode Homolosine projection 
        \ingroup projections 
        \tparam Geographic latlong point type 
        \tparam Cartesian xy point type 
        \tparam Parameters parameter type 
        \par Projection characteristics 
         - Pseudocylindrical 
         - Spheroid 
        \par Example 
        \image html ex_igh.gif 
    */ 
    template <typename CalculationType, typename Parameters> 
    struct igh_spheroid : public detail::igh::base_igh_spheroid<CalculationType, Parameters> 
    { 
        inline igh_spheroid(const Parameters& par) : detail::igh::base_igh_spheroid<CalculationType, Parameters>(par) 
        { 
            detail::igh::setup_igh(this->m_par, this->m_proj_parm); 
        } 
    }; 
 
    #ifndef DOXYGEN_NO_DETAIL 
    namespace detail 
    { 
 
        // Static projection 
        BOOST_GEOMETRY_PROJECTIONS_DETAIL_STATIC_PROJECTION(srs::par4::igh, igh_spheroid, igh_spheroid) 
 
        // Factory entry(s) 
        template <typename CalculationType, typename Parameters> 
        class igh_entry : public detail::factory_entry<CalculationType, Parameters> 
        { 
            public : 
                virtual base_v<CalculationType, Parameters>* create_new(const Parameters& par) const 
                { 
                    return new base_v_fi<igh_spheroid<CalculationType, Parameters>, CalculationType, Parameters>(par); 
                } 
        }; 
 
        template <typename CalculationType, typename Parameters> 
        inline void igh_init(detail::base_factory<CalculationType, Parameters>& factory) 
        { 
            factory.add_to_factory("igh", new igh_entry<CalculationType, Parameters>); 
        } 
 
    } // namespace detail 
    #endif // doxygen 
 
} // namespace projections 
 
}} // namespace boost::geometry 
 
#endif // BOOST_GEOMETRY_PROJECTIONS_IGH_HPP 
 
