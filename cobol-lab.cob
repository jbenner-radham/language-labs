       IDENTIFICATION DIVISION.
       PROGRAM-ID. hello-world.
       DATA DIVISION.
       WORKING-STORAGE SECTION.
           01 STR PIC X(13) VALUE 'Hello, world.'.
       PROCEDURE DIVISION.
           DISPLAY STR.
           DISPLAY FUNCTION UPPER-CASE(STR).
           DISPLAY FUNCTION LOWER-CASE(STR)
           .
