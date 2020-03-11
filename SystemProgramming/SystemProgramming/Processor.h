#pragma once
class Processor
{
public:
	Processor();
	std::string turn_pro()
	{
		try {
			int iterator = 0;
			std::string command_line;
			std::cout << "Write number command (Example: 11232)" << std::endl; 
			std::cin >> command_line;
			while (iterator < command_line.length())
			{
				if (command_line[iterator] == '1')
				{
					std::cout << "Command # 1 - Enter numbers from addition!" << std::endl;
					int a, b;
					std::cout << "Enter number 1 : ";
					std::cin >> a;
					std::cout << std::endl;
					std::cout << "Enter number 2 : ";
					std::cin >> b;
					std::cout << pr_addition(a, b) << std::endl;
				}
				else if (command_line[iterator] == '2')
				{
					std::cout << "Command # 2 - Enter string from inversion: ";
					std::string number_inv;
					std::cin >> number_inv;
					std::cout << std::endl;
					std::cout << pr_inversion(number_inv) << std::endl;
				}
				else if (command_line[iterator] == '3')
				{
					std::cout << "Command # 3 - Enter number from mixing register: ";
					int number_in_reg;
					bool side;
					std::cin >> number_in_reg;
					std::cout << std::endl;
					std::cout << "Enter side from mixing register (side - '1 or after num = left' or '0 = right'): ";
					std::cin >> side;
					std::cout << pr_mixing_register(number_in_reg, side) << std::endl;
				}
				else
				{
					throw 1;
				}
				iterator++;
			}
		}
		catch (int error_id)
		{
			if (error_id == 1)
			{
				return " Error 1: Command number invalid!";
			}
			if (error_id != 1)
			{
				return " Error 2: Operation failed!";
			}
		}
		return "All command success!";
	};
	int pr_addition(int number_1, int number_2)
	{
		int buff;
		buff = number_1 + number_2;
		return (buff);
	};
	std::string pr_inversion(std::string number_inv)
	{
		int count, index = 0, res = 0;
		try
		{
			while (index < number_inv.length())
			{
				if (number_inv[index] == '1')
				{
					number_inv[index] = '0';
				}
				else if (number_inv[index] == '0')
				{
					number_inv[index] = '1';
				}
				else
				{
					throw 1;
				}
				index++;
			}
			return number_inv;
		}
		catch (int error_id)
		{
			if (error_id == 1)
			{
				return " Error 1: Number not binar!";
			}
			if (error_id != 1)
			{
				return " Error 2: Operation failed!";
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
			std::cout << "Error 1: Failed to shift bit" << std::endl;
		}
	}
	~Processor();
};

