#pragma once
class Processor
{
public:
	Processor();
	int turn_pro();
	{
		int iterator;
		std::cout << "Write number command" << std::endl;
		std::cin >> iterator;
		return 0;
	};
	int pr_addition(int number_1, int number_2)
	{
		int buff;
		buff = number_1 + number_2;
		return (buff);
	};
	int pr_inversion(std::string number_inv)
	{
		int count, index, res = 0;
		try
		{
			for (index = 1; index < number_inv.length; index++)
			{
				if ((number_inv[index] != 1) || (number_inv[index] != 0))
				{
					count = 1;
					std::cout << "Число введено неверно. Повторите ввод." << std::endl;
					return 0;
					break;
				}
				int  number_inv_i = (int)(number_inv);
				while (number_inv)
				{
					res = res * 10 + number_inv % 10;
					num /= 10;
				}
				
			}

			while (index < count )
			{
				if (number_inv != 0 && number_inv != 1)
				{
					throw 1;
				}
				if (number_inv == 1)
				{
					number_inv = number_inv - 1;
					return (number_inv);
				}
				else if (number_inv == 0)
				{
					number_inv = number_inv + 1;
					return (number_inv);
				}
				else
				{
					throw 2;
				}
			}
		}
		catch (int error_id)
		{
			if (error_id == 1)
			{
				printf("%d ", "Error 1: Number not binar!");
			}
			if (error_id == 2)
			{
				printf("%d ", "Error 2: Operation failed!");
			}
		}
	}
	int pr_mixing_register(int number_in_reg, bool side) // side - true = left(<<); false = right(>>);
	{
		try 
		{
			if (side == 0)
			{
				return number_in_reg >> 1;
			}
			if (side == 1)
			{
				return number_in_reg << 1;
			}
			else
			{
				throw 1;
			}
		}
		catch (int error_id)
		{
			printf("%d", "Error 1: Failed to shift bit");
		}
	}
	~Processor();
};

