    #include <stdio.h>
    #include <math.h>

    extern float fun_el(float z)
    {
        float f;
        f = (cos(z) - 2 * sin(z)) / exp(z);

        printf("f = %f\n", f); // ����� �������� f � �������

        return f;
    }