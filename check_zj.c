#include "header.h"

short	check_z_spec_2(const char *s)
{
	if (s[g_jump + 1] == 'x')
	{
		++g_jump;
		g_small  = 1;
		g_flag[7] = 1;
		return (12);
	}
	if (s[g_jump + 1] == 'X')
	{
		++g_jump;
		g_small  = 0;
		g_flag[7] = 1;
		return (12);
	}
	if (s[g_jump + 1] == 'o' || s[g_jump + 1] == 'O')
	{
		if(g_flag[11] && g_flag[9])
			g_flag[4]--;
		++g_jump;
		g_flag[7] = 2;
		return (12);
	}
	return (0);
}

short	check_z_spec(const char *s)
{
	short result;

	if (s[g_jump] == 'z')
	{
		if (s[g_jump + 1] == 'd' || s[g_jump + 1] == 'i' || s[g_jump + 1] == 'D')
		{
			++g_jump;
			return (1);
		}
		if (s[g_jump + 1] == 'u' || s[g_jump + 1] == 'U')
		{
			delete_sign();
			++g_jump;
			return (12);
		}
		result = check_z_spec_2(s);
		if (result)
			return (result);
		if (s[g_jump + 1] == 'p')
		{
			++g_jump;
			return (set_pointer());
		}
	}
	return (0);
}

short	check_j_spec_2(const char *s)
{
	if (s[g_jump + 1] == 'x')
	{
		++g_jump;
		g_small  = 1;
		g_flag[7] = 1;
		return (14);
	}
	if (s[g_jump + 1] == 'X')
	{
		++g_jump;
		g_small  = 0;
		g_flag[7] = 1;
		return (14);
	}
	if (s[g_jump + 1] == 'o' || s[g_jump + 1] == 'O')
	{
		if(g_flag[11] && g_flag[9])
			g_flag[4]--;
		++g_jump;
		g_flag[7] = 2;
		return (14);
	}
	return (0);
}

short	check_j_spec(const char *s)
{
	short result;

	if (s[g_jump] == 'j')
	{
		if (s[g_jump + 1] == 'd' || s[g_jump + 1] == 'D' || s[g_jump + 1] == 'i')
		{
			++g_jump;
			return (11);
		}
		if (s[g_jump + 1] == 'u' || s[g_jump + 1] == 'U')
		{
			delete_sign();
			++g_jump;
			return (14);
		}
		if (s[g_jump + 1] == 'p')
		{
			++g_jump;
			return (set_pointer());
		}
		result = check_j_spec_2(s);
		if (result)
			return (result);
	}
	return (0);
}
