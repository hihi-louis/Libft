/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tripham <tripham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:01:47 by tripham           #+#    #+#             */
/*   Updated: 2024/11/05 20:30:01 by tripham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_front(t_list **lst, t_list *new)
{
    new->next = *lst;
    *lst = new;
}
// void ft_lstprint(t_list *lst) {
//     while (lst != NULL) {
//         if (lst->content != NULL) {
//             if (*(int *)lst->content == 10) { 
//                 printf("%d", *(int *)lst->content);
//             } else {
//                 printf("%s", (char *)lst->content);
//             }
//         }
//         if (lst->next != NULL) {
//             printf(" -> ");
//         }
//         lst = lst->next;
//     }
//     printf(" -> NULL\n");
// }


// void ft_lstclear(t_list **lst) {
//     t_list *current;
//     t_list *next_node;

//     if (lst == NULL || *lst == NULL) {
//         return; // If the list is empty or NULL, do nothing
//     }

//     current = *lst; // Start with the head of the list
//     while (current != NULL) {
//         next_node = current->next; // Save the next node
//         free(current->content);     // Free the content of the current node
//         free(current);              // Free the current node
//         current = next_node;        // Move to the next node
//     }
//     *lst = NULL; // Set the head to NULL to indicate the list is cleared
// }

// int main()
// {
//     t_list  *louis = malloc(sizeof(t_list));
// //    if (louis == NULL) {
// //         printf("Memory allocation failed\n");
// //         return 1; // Return error code
// //     }
    
//     int *louis_content = malloc(sizeof(int));
//     *louis_content = 10;
//     //int *louis_content_ptr = &louis_content;
//     //    if (louis_content == NULL) {
//     //     printf("Memory allocation failed\n");
//     //     free(louis);
//     //     return 1; // Return error code
//     // }
//     // *louis_content = 10;
//     //louis->content = malloc(sizeof(int));
//     louis->content = louis_content;
//     louis->next = NULL;

//     t_list  *hihi = malloc(sizeof(t_list));
//     //  if (hihi == NULL) {
//     //     printf("Memory allocation failed\n");
//     //     free(louis_content);
//     //     free(louis);
//     //     return 1; // Return error code
//     // }
//     char *hihi_content = malloc(20);
//     // if (hihi_content == NULL) {
//     //     printf("Memory allocation failed\n");
//     //     free(hihi);
//     //     free(louis_content);
//     //     free(louis);
//     //     return 1; // Return error code
//     // }
//     char *hihi_content1 = ft_strcpy(hihi_content, "Hello");
//     //hihi->content = malloc(20);
//     hihi->content = hihi_content1;
//     hihi->next = NULL;

//     ft_lstadd_front(&louis, hihi);
//     ft_lstprint(louis); 
    
   
//     ft_lstclear(&hihi);
//     return 0;

// }