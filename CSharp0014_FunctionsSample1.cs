using System;

namespace CSharp0014_FunctionsSample1
{
    class CSharp0014_FunctionsSample1
    {
		static int isTriangular(int number) 
		{
			int i;
			for (i = 1; number > 0; i++)
				number -= i;
			if (number == 0)
				return 1;
			return 0;
		}

		static void Main(string[] args)
		{

			int x;
			do
            {

				x = int.Parse(Console.ReadLine());
				if (x > 0)
					if (Convert.ToBoolean(isTriangular(x)))
						Console.WriteLine(x + " is a triangular number");
					else
						Console.WriteLine(x + " is NOT a triangular number");
			} while (x > 0);

		}
	}
}
