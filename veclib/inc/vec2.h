#ifndef VEC2_H
# define VEC2_H

# include <math.h>

typedef struct s_vec2f	t_vec2f;

// arithmetic
t_vec2f	ft_v2(float x, float y);
t_vec2f	ft_v2add(t_vec2f a, t_vec2f b);
t_vec2f	ft_v2sub(t_vec2f a, t_vec2f b);
t_vec2f	ft_v2mul(t_vec2f a, float n);
t_vec2f	ft_v2div(t_vec2f a, float n);

// algorithm
float	ft_v2mag(t_vec2f a);
float	ft_v2dot(t_vec2f a, t_vec2f b);
float	ft_v2cross(t_vec2f a, t_vec2f b);
t_vec2f	ft_v2norm(t_vec2f a, float n);

struct s_vec2f
{
	float	x;
	float	y;
};

#endif
