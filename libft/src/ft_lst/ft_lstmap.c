/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japostad <japostad@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 18:51:38 by japostad          #+#    #+#             */
/*   Updated: 2024/12/30 18:53:25 by japostad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*current;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		current = ft_lstnew(f(lst->content));
		if (!current)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, current);
		lst = lst->next;
	}
	return (new_list);
}
/*
#include <stdio.h>

void print_list(t_list *list) {
    while (list != NULL) {
        printf("%p ", list->content);
        list = list->next;
    }
    printf("\n");
}

// Function to duplicate a string (example)
void *duplicate_string(void *content) {
    return ft_strdup((char *)content);
}

int main() {
    t_list *myList = ft_lstnew("Node 1");
    ft_lstadd_back(&myList, ft_lstnew("Node 2"));

    // Print the original list
    printf("Original list: ");
    print_list(myList);

    // Duplicate the content of each node
    t_list *newList = ft_lstmap(myList, duplicate_string, free);

    if (newList != NULL)
    {
        // Print the new list with duplicated content
        printf("List after mapping: ");
        print_list(newList);

        // Clean up the new list
        ft_lstclear(&newList, free);
    }
    return 0;
}
*/
