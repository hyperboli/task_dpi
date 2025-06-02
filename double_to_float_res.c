






extern "C" int double_to_float_res(long long in_val)
{
    double   double_val;
    float    float_val;
    int      res;

    double_val = *(double*)&in_val;
    float_val  = (float)double_val;
    res        = *(int*)&float_val;

    return res;
}
