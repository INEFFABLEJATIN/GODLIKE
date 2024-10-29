#include <ncurses.h> 
 
int main()
{
    // Initialize ncurses mode
    initscr();
 
    // checking whether terminal supports colors
    if (has_colors() == FALSE) 
    {
        printw("Your terminal does not support color");
        endwin();
        return 1;
    }
 
    // Enable color functionality
    start_color();
 
    // Initialize pink color pair
    init_pair(1, COLOR_MAGENTA, COLOR_BLACK);
 
    // Set the color pair and print the text
    attron(COLOR_PAIR(1));
    printw("Hello, World!");
 
    // Refresh the screen to see the changes
    refresh();
 
    // Wait for user input so we can see the result
    getch();  
 
    // Clean up and close
    endwin();
 
    return 0;

    // i installed sudo apt install libncurses5-dev libncursesw5-dev  bcoz of library ncurses
    // gcc -o color color.c -lncurses
 // ./color

    }


