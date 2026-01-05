void pairCubeCount(int n)
{
    int c = 0;
    for (int b = 0; b <= floor(cbrt(n)); b++)
    {
        int cube_b = b * b * b;  // b^3
        int cube_a = n - cube_b; // a^3 = n - b^3
        if (cube_a >= 0)
        {
            int root_a = cbrt(cube_a);
            if (root_a * root_a * root_a == cube_a)
            {
                c++;
                cout << "(" << root_a << "," << b << ")";
            }
        }
    }
    cout << " -> pairs = " << c;
}