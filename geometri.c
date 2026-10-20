void storst_rektangel(
    double bredder[],
    double hojder[],
    int antal,
    double *storsta_area,
    int *storsta_index
)
{
    if (antal <= 0)
    {
        return;
    }

    *storsta_area = rektangelarea(bredder[0], hojder[0]);
    *storsta_index = 0;

    for (int i = 1; i < antal; i++)
    {
        double area = rektangelarea(bredder[i], hojder[i]);

        if (area > *storsta_area)
        {
            *storsta_area = area;
            *storsta_index = i;
        }
    }
}