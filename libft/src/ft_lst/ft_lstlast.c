/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japostad <japostad@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 18:50:53 by japostad          #+#    #+#             */
/*   Updated: 2024/12/30 18:51:21 by japostad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
#include <stdio.h>


t_list *ft_lstlast(t_list *lst);

void print_list(t_list *list) {
    while (list != NULL) {
        printf("%p ", list->content);
        list = list->next;
    }
    printf("\n");
}

int main() {
    t_list *myList = ft_lstnew("Node 1");
    t_list *lastNode = ft_lstlast(myList);
    printf("Last node of the initial list: %p\n", lastNode);

    t_list *newNode = ft_lstnew("Node 0");
    ft_lstadd_front(&myList, newNode);

    lastNode = ft_lstlast(myList);
    printf("Last node after adding to the front: %p\n", lastNode);

	int i = ft_lstsize(myList);
	printf("List size is: %d", i);

    return 0;
}
*/
