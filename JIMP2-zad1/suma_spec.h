using namespace std;

double suma(char** input, int len)
{
	cout << endl;
	double result = 0;
	string helper = "";

	for (int i = 0; i < len; ++i)
	{
		helper += input[i];
		cout << input[i];
		if (i < len - 1)
			cout << " + ";
		else
		{
			result = helper.length();
			cout << " = " << helper << "(" << result << ")" << endl;
		}
	}

	return result;
}