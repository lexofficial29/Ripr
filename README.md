# Ripr - Lightweight File Searching Utility

Ripr is an efficient and lightweight alternative to the standard grep command, designed to help you quickly search for text within files.

## Features

- **Enhanced Search Options**: Ripr offers powerful search options to tailor your search precisely:

  - `-a` Flag: Search for all occurrences of a given keyword within files.
  - `-f` Flag: Find occurrences of the keyword only when it's not part of another word.
  - Combine Flags: You can stack multiple options together, such as `-af`, to refine your search even further. For example, using `-af` will search for all occurrences of the keyword that are not part of another word.

## Getting Started

**Usage**: 

   ```bash
   ripr <file> <options> <keyword>
