/*
** EPITECH PROJECT, 2021
** 101pong
** File description:
** 101pong
*/

#include "my.h"

int help(void)
{
    printf("USAGE\n"
           "   ./101pong x0 y0 z0 x1 y1 z1 n\n\n"
           "DESCRIPTION\n"
           "    x0 ball abscissa at time t - 1\n"
           "    y0 ball ordinate at time t - 1\n"
           "    z0 ball altitude at time t - 1\n"
           "    x1 ball abscissa at time t\n"
           "    y1 ball ordinate at time t\n"
           "    z1 ball altitude at time t\n"
           "    n time shift (greater than or equal to zero, integer)\n");
    return (1);
}

int check_error(int ac, char **av)
{
    if (!strcmp(av[1], "-h"))
        return (help());
    if (ac != 8 || av[7][0] == '-') {
        return (ERROR);
    }
    for (int i = 0; av[7][i] != '\0'; i++)
        if (av[7][i] == '.')
            return (ERROR);
    return (SUCCESS);
}

vector check_velocity(vector po, vector pt)
{
    vector vl;
    vl.x = pt.x - po.x;
    vl.y = pt.y - po.y;
    vl.z = pt.z - po.z;

    printf("The vl vector of the ball is:\n");
    printf("(%.2f, %.2f, %.2f)\n", vl.x, vl.y, vl.z);
    return vl;
}

void check_pos_at_t(vector pt, vector vl, unsigned int n)
{
    vector pos_at_t;
    pos_at_t.x = pt.x + vl.x * n;
    pos_at_t.y = pt.y + vl.y * n;
    pos_at_t.z = pt.z + vl.z * n;

    printf("At time t + %d, ball coordinates will be:\n", n);
    printf("(%.2f, %.2f, %.2f)\n", pos_at_t.x, pos_at_t.y, pos_at_t.z);
}

void check_angle(vector vl, vector pt)
{
    if (pt.z == 0 || (pt.z > 0 && vl.z < 0) || (pt.z < 0  && vl.z > 0)) {
        float dot = 0 * vl.x + 0 * vl.y + 1 * vl.z;
        float len_vector_z = 1;
        float len_vector_vl = vl.x * vl.x + vl.y * vl.y + vl.z * vl.z;
        float angle = acos(dot/sqrt(len_vector_z * len_vector_vl));

        printf("The incidence angle is:\n");
        printf("%.2f degrees\n", fabs((angle * 180 / PI) - 90));
    } else
        printf("The ball won't reach the paddle.\n");
}

int main(int ac, char **av)
{
    if (check_error(ac, av))
        return (ERROR);
    vector po;
    po.x = atof(av[1]);
    po.y = atof(av[2]);
    po.z = atof(av[3]);
    vector pt;
    pt.x = atof(av[4]);
    pt.y = atof(av[5]);
    pt.z = atof(av[6]);
    vector vl = check_velocity(po, pt);
    unsigned int n = atoi(av[7]);
    check_pos_at_t(pt, vl, n);
    check_angle(vl, pt);
    return (SUCCESS);
}
