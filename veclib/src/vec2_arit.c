#include "vec2.h"

t_vec2f	ft_v2(float x, float y)
{
	return ((t_vec2f){x, y});
}

t_vec2f	ft_v2add(t_vec2f a, t_vec2f b)
{
	return (ft_v2(a.x + b.x, a.y + b.y));
}

t_vec2f	ft_v2sub(t_vec2f a, t_vec2f b)
{
	return (ft_v2(a.x - b.x, a.y - b.y));
}

t_vec2f	ft_v2mul(t_vec2f a, float n)
{
	return (ft_v2(a.x * n, a.y * n));
}

t_vec2f	ft_v2div(t_vec2f a, float n)
{
	return (ft_v2(a.x / n, a.y / n));
}
