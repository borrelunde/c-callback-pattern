# Callback Pattern in C Demonstration Application

This is a simple C demonstration application that showcases the use of the callback pattern. It is a variation of the observer design pattern.

The observer pattern is a behavioral design pattern where an object, known as the subject, maintains a list of its observers, that are notified of state changes. The callback pattern demonstrated in this application is a limited implementation where only one observer can be tied to the subject at any given time.

## Table of Contents

- [Introduction](#introduction)
- [Project Structure](#project-structure)
- [Sample Application Execution](#sample-application-execution)

## Introduction

The application employs the callback pattern to separate a button's concern of acting on its button press event. An observer, decoupled from the button itself, is tasked with that instead. Modifying the operation is easy since it is not tied directly to the button.

In the application, a button and its corresponding observer are initialised, and the observer is registered to the button. For the application operation, the observer acts on two simulated button presses. After that, the observer is unregistered from the button, and both are deinitialised.

## Project Structure

- **`main.c`**: The entry point of the application, initialising and running the demonstration.
- **`log.h`**: Header file defining a basic logging macro.
- **`container_of.h`**: Header file defining a macro for obtaining a pointer to the containing structure.
- **`application.h`**: Header file for the main application structure.
- **`application.c`**: Implementation file for the main application, demonstrating the usage of the callback pattern.
- **`button.h`**: Header file containing the button object to be observed.
- **`button.c`**: Implementation file for the button object.
- **`button_observer.h`**: Header file for the observer of the button object.
- **`button_observer.c`**: Implementation file for the button observer.

## Sample Application Execution

Below is a sample execution of the application, demonstrating the initialisation, operation, and deinitialisation process:

```
[2023-12-03 14:03:41 application_init]: Application initialising.        
[2023-12-03 14:03:41 button_init]: Button initialising.
[2023-12-03 14:03:41 button_init]: Button initialised.
[2023-12-03 14:03:41 button_observer_init]: Button observer initialising.
[2023-12-03 14:03:41 button_add_callback]: Button add callback.
[2023-12-03 14:03:41 button_observer_init]: Button observer initialised.
[2023-12-03 14:03:41 application_init]: Application initialised.        
[2023-12-03 14:03:41 application_run]: Application running.
[2023-12-03 14:03:41 button_press]: Button pressed...
[2023-12-03 14:03:41 button_press]: ... callback called.
[2023-12-03 14:03:41 button_observer_on_button_callback]: Observer on button callback.
[2023-12-03 14:03:41 button_press]: Button pressed...
[2023-12-03 14:03:41 button_press]: ... callback called.
[2023-12-03 14:03:41 button_observer_on_button_callback]: Observer on button callback.
[2023-12-03 14:03:41 application_run]: Application ran.
[2023-12-03 14:03:41 application_deinit]: Application deinitialising.
[2023-12-03 14:03:41 button_observer_deinit]: Button observer deinitialising.
[2023-12-03 14:03:41 button_remove_callback]: Button remove callback.
[2023-12-03 14:03:41 button_observer_deinit]: Button observer deinitialised.
[2023-12-03 14:03:41 button_deinit]: Button deinitialising.
[2023-12-03 14:03:41 button_deinit]: Button deinitialised.
[2023-12-03 14:03:41 application_deinit]: Application deinitialised.
```

This section provides a glimpse into the flow of the application, its key steps and corresponding log entries.