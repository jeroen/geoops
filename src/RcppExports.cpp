// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// along
std::string along(std::string x, double dist, std::string units);
RcppExport SEXP geoops_along(SEXP xSEXP, SEXP distSEXP, SEXP unitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type dist(distSEXP);
    Rcpp::traits::input_parameter< std::string >::type units(unitsSEXP);
    rcpp_result_gen = Rcpp::wrap(along(x, dist, units));
    return rcpp_result_gen;
END_RCPP
}
// ringArea
double ringArea(std::string x);
RcppExport SEXP geoops_ringArea(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(ringArea(x));
    return rcpp_result_gen;
END_RCPP
}
// geometry
double geometry(std::string x);
RcppExport SEXP geoops_geometry(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(geometry(x));
    return rcpp_result_gen;
END_RCPP
}
// area
double area(std::string inp);
RcppExport SEXP geoops_area(SEXP inpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type inp(inpSEXP);
    rcpp_result_gen = Rcpp::wrap(area(inp));
    return rcpp_result_gen;
END_RCPP
}
// bearing
double bearing(std::string start, std::string end);
RcppExport SEXP geoops_bearing(SEXP startSEXP, SEXP endSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type start(startSEXP);
    Rcpp::traits::input_parameter< std::string >::type end(endSEXP);
    rcpp_result_gen = Rcpp::wrap(bearing(start, end));
    return rcpp_result_gen;
END_RCPP
}
// circle3
std::string circle3();
RcppExport SEXP geoops_circle3() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(circle3());
    return rcpp_result_gen;
END_RCPP
}
// destination
std::string destination(std::string from, double distance, double bearing, std::string units);
RcppExport SEXP geoops_destination(SEXP fromSEXP, SEXP distanceSEXP, SEXP bearingSEXP, SEXP unitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type from(fromSEXP);
    Rcpp::traits::input_parameter< double >::type distance(distanceSEXP);
    Rcpp::traits::input_parameter< double >::type bearing(bearingSEXP);
    Rcpp::traits::input_parameter< std::string >::type units(unitsSEXP);
    rcpp_result_gen = Rcpp::wrap(destination(from, distance, bearing, units));
    return rcpp_result_gen;
END_RCPP
}
// distance
double distance(std::string start, std::string end, std::string units);
RcppExport SEXP geoops_distance(SEXP startSEXP, SEXP endSEXP, SEXP unitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type start(startSEXP);
    Rcpp::traits::input_parameter< std::string >::type end(endSEXP);
    Rcpp::traits::input_parameter< std::string >::type units(unitsSEXP);
    rcpp_result_gen = Rcpp::wrap(distance(start, end, units));
    return rcpp_result_gen;
END_RCPP
}
// nearest
std::string nearest(std::string target_point, std::string points);
RcppExport SEXP geoops_nearest(SEXP target_pointSEXP, SEXP pointsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type target_point(target_pointSEXP);
    Rcpp::traits::input_parameter< std::string >::type points(pointsSEXP);
    rcpp_result_gen = Rcpp::wrap(nearest(target_point, points));
    return rcpp_result_gen;
END_RCPP
}
// point
std::string point(std::string coordinates, std::string properties);
RcppExport SEXP geoops_point(SEXP coordinatesSEXP, SEXP propertiesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type coordinates(coordinatesSEXP);
    Rcpp::traits::input_parameter< std::string >::type properties(propertiesSEXP);
    rcpp_result_gen = Rcpp::wrap(point(coordinates, properties));
    return rcpp_result_gen;
END_RCPP
}
// get_coords
std::string get_coords(std::string x);
RcppExport SEXP geoops_get_coords(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(get_coords(x));
    return rcpp_result_gen;
END_RCPP
}
// in_ring
bool in_ring(String pt, String ring);
RcppExport SEXP geoops_in_ring(SEXP ptSEXP, SEXP ringSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type pt(ptSEXP);
    Rcpp::traits::input_parameter< String >::type ring(ringSEXP);
    rcpp_result_gen = Rcpp::wrap(in_ring(pt, ring));
    return rcpp_result_gen;
END_RCPP
}
// inside_cpp
bool inside_cpp(String point, String polygon);
RcppExport SEXP geoops_inside_cpp(SEXP pointSEXP, SEXP polygonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type point(pointSEXP);
    Rcpp::traits::input_parameter< String >::type polygon(polygonSEXP);
    rcpp_result_gen = Rcpp::wrap(inside_cpp(point, polygon));
    return rcpp_result_gen;
END_RCPP
}
// fart_cpp
bool fart_cpp(String point, String polygon);
RcppExport SEXP geoops_fart_cpp(SEXP pointSEXP, SEXP polygonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type point(pointSEXP);
    Rcpp::traits::input_parameter< String >::type polygon(polygonSEXP);
    rcpp_result_gen = Rcpp::wrap(fart_cpp(point, polygon));
    return rcpp_result_gen;
END_RCPP
}
// lineDistance
double lineDistance(std::string line, std::string units);
RcppExport SEXP geoops_lineDistance(SEXP lineSEXP, SEXP unitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type line(lineSEXP);
    Rcpp::traits::input_parameter< std::string >::type units(unitsSEXP);
    rcpp_result_gen = Rcpp::wrap(lineDistance(line, units));
    return rcpp_result_gen;
END_RCPP
}
// planepoint
double planepoint(std::string point, std::string triangle);
RcppExport SEXP geoops_planepoint(SEXP pointSEXP, SEXP triangleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type point(pointSEXP);
    Rcpp::traits::input_parameter< std::string >::type triangle(triangleSEXP);
    rcpp_result_gen = Rcpp::wrap(planepoint(point, triangle));
    return rcpp_result_gen;
END_RCPP
}
// version
std::string version();
RcppExport SEXP geoops_version() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(version());
    return rcpp_result_gen;
END_RCPP
}
