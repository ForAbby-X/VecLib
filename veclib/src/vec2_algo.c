#include "vec2.h"

float	ft_v2mag(t_vec2f a)
{
	return (sqrtf(a.x * a.x + a.y * a.y));
}

float	ft_v2dot(t_vec2f a, t_vec2f b)
{
	return (a.x * b.x + a.y * b.y);
}

float	ft_v2cross(t_vec2f a, t_vec2f b)
{
	return (a.x * b.y - a.y * b.x);
}

t_vec2f	ft_v2norm(t_vec2f a, float n)
{
	return (ft_v2mul(ft_v2div(a, ft_v2mag(a)), n));
}
