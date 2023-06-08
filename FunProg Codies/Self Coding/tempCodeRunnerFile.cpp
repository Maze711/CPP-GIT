for (i = 1; i < n; i++)
    {
        for (s = 0; s < i; s++)
            cout << " ";
        for (j = n; j > i; j--)
            cout << "* ";
        // ending line after each row
        cout << "\n";
    }