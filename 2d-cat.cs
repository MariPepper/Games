using System;

class Program
{
    static void Main()
    {
        // Create a three-dimensional array.
        string[, ,] threeDimensional = new string[2, 10, 16];
        threeDimensional[0, 0, 0] = "Give me food human. ";  
        threeDimensional[0, 0, 1] = "I command you. ";
        threeDimensional[0, 0, 2] = "Grrrrr.\n ";
        threeDimensional[0, 0, 3] = "\n\n";
        threeDimensional[0, 4, 4] = "^.______.^";
        threeDimensional[0, 5, 5] = "\\.@..^..@.\\";
        threeDimensional[0, 6, 6] = "//........//\\";
        threeDimensional[0, 7, 7] = " /...........\\";
        threeDimensional[0, 8, 8] = " |............|";
        threeDimensional[0, 9, 9] = " |,,|----|,,|/";
        threeDimensional[0, 6, 10] = "............./\\,,";   
        threeDimensional[0, 7, 11] = "...........(.__.7;";   
        threeDimensional[0, 8, 12] = "........../....\\";   
        threeDimensional[0, 9, 13] = "..........C,.(,__)/"; 
        threeDimensional[1, 1, 14] = "Wait a minute. "; 
        threeDimensional[1, 1, 15] = "That better be tuna.|";  

        // Loop over each dimension's length.
        for (int x = 0; x < threeDimensional.GetLength(0); x++)
        {
            for (int y = 0; y < threeDimensional.GetLength(1); y++)
            {
                for (int z = 0; z < threeDimensional.GetLength(2); z++)
                {
                    Console.Write(threeDimensional[x, y, z]);
                }
                Console.WriteLine();
            }
            Console.WriteLine();
        }
    }
}