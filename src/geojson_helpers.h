std::string feature(std::string geometry, std::string properties = "{}");
std::string featureCollection(std::string features);
std::string point(std::string coordinates, std::string properties = "{}");
std::string point_numvec(std::vector<double> coordinates, std::string properties = "{}");
std::string polygon(std::string coordinates, std::string properties = "{}");
std::string polygon_numvec(std::vector< std::vector< std::vector<double> > > coordinates, std::string properties = "{}");
double radiansToDistance(double radians, std::string units = "kilometers");
double distanceToRadians(double distance, std::string units = "kilometers");
