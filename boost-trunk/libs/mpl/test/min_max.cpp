
// Copyright Aleksey Gurtovoy 2000-2004
//
// Distributed under the Boost Software License, Version 1.0. 
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt)
//
// See http://www.boost.org/libs/mpl for documentation.

// $Id: min_max.cpp 49240 2008-10-10 09:21:07Z agurtovoy $
// $Date: 2008-10-10 02:21:07 -0700 (Fri, 10 Oct 2008) $
// $Revision: 49240 $

#include <boost/mpl/min_max.hpp>
#include <boost/mpl/int.hpp>

#include <boost/mpl/aux_/test.hpp>


MPL_TEST_CASE()
{
    MPL_ASSERT(( is_same< mpl::min< int_<5>,int_<7> >::type,int_<5> > ));
    MPL_ASSERT(( is_same< mpl::max< int_<5>,int_<7> >::type,int_<7> > ));

    MPL_ASSERT(( is_same< mpl::min< int_<-5>,int_<-7> >::type,int_<-7> > ));
    MPL_ASSERT(( is_same< mpl::max< int_<-5>,int_<-7> >::type,int_<-5> > ));
}
