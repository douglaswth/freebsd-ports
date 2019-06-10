--- libpbe/src/URI.cc.orig	2008-11-09 15:16:16.000000000 +0100
+++ libpbe/src/URI.cc	2013-03-30 17:45:57.000000000 +0100
@@ -18,11 +18,11 @@
 
 #include "URI.hh"
 
-#include <boost/spirit.hpp>
-#include <boost/spirit/actor/insert_at_actor.hpp>
-#include <boost/spirit/dynamic/if.hpp>
-#include <boost/spirit/utility/loops.hpp>
-#include <boost/spirit/iterator/multi_pass.hpp>
+#include <boost/spirit/include/classic.hpp>
+#include <boost/spirit/home/classic/actor/insert_at_actor.hpp>
+#include <boost/spirit/home/classic/dynamic/if.hpp>
+#include <boost/spirit/home/classic/utility/loops.hpp>
+#include <boost/spirit/home/classic/iterator/multi_pass.hpp>
 
 #include <boost/lexical_cast.hpp>
 #include <boost/scoped_array.hpp>
@@ -30,7 +30,7 @@
 #include <map>
 
 using namespace std;
-using namespace boost::spirit;
+using namespace boost::spirit::classic;
 
 
 namespace pbe {
