# PlainCoordinateSystem

This project is a simple program that draws a coordinate system on the console and marks specific points on it. It provides a reusable function that can be called with an array of points to be marked.

## Features

- Draws a coordinate system with labeled axes on the console.
- Marks specified points on the coordinate system.

## Installation

1. Clone the repository to your local machine:

   ```shell
   git clone https://github.com/your-username/coordinate-system-drawing.git
   
2.  Navigate to the project directory:

    ```shell
    cd coordinate-system-drawing
    ```

3. Compile the source code using a C compiler:

   ```shell
   gcc main.c coordinate_system.c -o coordinate_system
   ```

4. Run the executable:

   ```shell
    ./coordinate_system
    ```

## Usage

1. Open the main.c file
2. Modify the points array to include the points you want to mark on the coordinate system.
3. Compile and run the program following the instructions in the Installation section.
4. The console should display the coordinate system with the specified points marked on it.

## Example

```shell
#include "coordinatesystem.h"

int main() {
    Point points[] = {
        {10, 10},
        {5, 7},
        {15, 5},
        // Add more points here...
    };
    int size = sizeof(points) / sizeof(points[0]);

    draw_coordinatesystem(points, size);

    return 0;
}
```

## Contributing

Contributions are welcome! If you find any issues or have suggestions
for improvements,please create an issue or submit a pull request.

## License
This project is licensed under the MIT License 






