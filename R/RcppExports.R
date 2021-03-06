# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

along <- function(x, dist, units) {
    .Call('geoops_along', PACKAGE = 'geoops', x, dist, units)
}

ringArea <- function(x) {
    .Call('geoops_ringArea', PACKAGE = 'geoops', x)
}

geometry <- function(x) {
    .Call('geoops_geometry', PACKAGE = 'geoops', x)
}

area <- function(inp) {
    .Call('geoops_area', PACKAGE = 'geoops', inp)
}

bbox_polygon <- function(bbox) {
    .Call('geoops_bbox_polygon', PACKAGE = 'geoops', bbox)
}

bearing <- function(start, end) {
    .Call('geoops_bearing', PACKAGE = 'geoops', start, end)
}

circle3 <- function() {
    .Call('geoops_circle3', PACKAGE = 'geoops')
}

destination <- function(from, distance, bearing, units) {
    .Call('geoops_destination', PACKAGE = 'geoops', from, distance, bearing, units)
}

distance <- function(start, end, units) {
    .Call('geoops_distance', PACKAGE = 'geoops', start, end, units)
}

nearest <- function(target_point, points) {
    .Call('geoops_nearest', PACKAGE = 'geoops', target_point, points)
}

point <- function(coordinates, properties = "{}") {
    .Call('geoops_point', PACKAGE = 'geoops', coordinates, properties)
}

get_coords <- function(x) {
    .Call('geoops_get_coords', PACKAGE = 'geoops', x)
}

in_ring <- function(pt, ring) {
    .Call('geoops_in_ring', PACKAGE = 'geoops', pt, ring)
}

inside_cpp <- function(point, polygon) {
    .Call('geoops_inside_cpp', PACKAGE = 'geoops', point, polygon)
}

lineDistance <- function(line, units) {
    .Call('geoops_lineDistance', PACKAGE = 'geoops', line, units)
}

midpoint <- function(from, to) {
    .Call('geoops_midpoint', PACKAGE = 'geoops', from, to)
}

planepoint <- function(point, triangle) {
    .Call('geoops_planepoint', PACKAGE = 'geoops', point, triangle)
}

pointGrid <- function(bbox, cellSize, units) {
    .Call('geoops_pointGrid', PACKAGE = 'geoops', bbox, cellSize, units)
}

triangleGrid <- function(bbox, cellSize, units) {
    .Call('geoops_triangleGrid', PACKAGE = 'geoops', bbox, cellSize, units)
}

version <- function() {
    .Call('geoops_version', PACKAGE = 'geoops')
}

