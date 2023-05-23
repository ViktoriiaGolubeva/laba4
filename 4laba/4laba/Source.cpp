float fun_el(int i, float z)
{
    float f;
    f = powf(log10f(z) / log10f(2.71828), 1.0f / 3.0f) / (float)i;
    return f;
}