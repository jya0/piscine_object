/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector2.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:56:55 by jyao              #+#    #+#             */
/*   Updated: 2024/05/27 17:25:27 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		VECTOR2_HPP
# define	VECTOR2_HPP
class Vector2
{
	private:
		float	_xValue;
		float	_yValue;
	protected:
	public:
		Vector2(void);
		~Vector2(void);
		Vector2(const Vector2 &vector2REF);
		Vector2	&operator=(const Vector2 &vector2REF);
		Vector2(const float &xValue, const float &yValue);

		void		setXvalue(const float &xValue);
		void		setYvalue(const float &yValue);
		const float	&getXvalue(void) const;
		const float	&getYvalue(void) const;
};

#endif

