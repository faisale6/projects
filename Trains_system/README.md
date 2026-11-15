# 🚆 Sydney Trains Management & Simulation System

## 📖 Project Overview

A railway management and simulation system inspired by the Sydney Trains network in New South Wales, Australia.

This project is being developed to strengthen my software engineering skills through practical experience with C programming, Python, PostgreSQL and Docker.

The long-term goal is to simulate railway operations, including train management, passenger capacity, station networks, timetables and train movements.

## 🛠️ Technologies

| Technology | Purpose | Status |
|---|---|---|
| C | Train management and simulation logic | In Progress |
| Python | Backend application and system integration | Planned |
| PostgreSQL | Train, station and timetable database | Planned |
| Docker | Containerisation and deployment | Planned |

## 🚆 Features

### Implemented

- Train structure using C (`struct Train`)
- Train ID, capacity and passenger information
- Multiple train management using arrays of structures
- Automatic available seat calculation
- Reusable functions for displaying and updating train information
- Interactive terminal menu
- Display all registered trains
- Search for trains by ID during passenger operations
- Board passengers onto selected trains
- Remove passengers from selected trains
- Prevent boarding beyond available capacity
- Prevent removing more passengers than are onboard
- Reject zero and negative passenger counts
- Detect invalid Train IDs during passenger removal
- Maintain updated passenger counts during program execution
- Exit the program through the main menu

### Planned

- Detect invalid Train IDs during passenger boarding
- Improve menu and input validation
- Train registration and removal
- Save and load train information
- Sydney railway stations and routes
- Train movement simulation
- Timetable and scheduling system
- Train delay tracking
- PostgreSQL database integration
- Python-based application controller
- Docker containerisation
- Railway operations dashboard

## 💻 Current Program

The current C application manages multiple trains through an interactive terminal interface.

Users can view train information, board passengers and remove passengers. The program validates passenger counts and automatically updates available seats.

### Example Output

```text
=== SYDNEY TRAINS ===
1. Display All Trains
2. Board Passengers
3. Remove Passengers
0. Exit

Enter your choice: 1

Train ID: 101
Capacity: 900
Passengers: 400
Available seats: 500

Train ID: 102
Capacity: 900
Passengers: 500
Available seats: 400
```

### Passenger Removal Example

```text
Enter your choice: 3
Enter Train ID: 102
Train found!
Enter passengers leaving: 100
Passengers can leave!
```

After the operation, Train 102 has 400 passengers and 500 available seats.

### Input Validation Example

```text
Enter your choice: 3
Enter Train ID: 102
Train found!
Enter passengers leaving: 600
Error: Not enough passengers onboard!
```

## ⚙️ Installation and Usage

### Requirements

- GCC or another compatible C compiler
- Terminal (macOS or Linux)

### Compile

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 train_system.c -o train_system
```

### Run

```bash
./train_system
```

Run these commands from the directory containing `train_system.c`.

## 🗺️ Development Roadmap

### Phase 1 — C Programming

- [x] Create initial C train structure
- [x] Store train information
- [x] Calculate available passenger capacity
- [x] Support multiple trains
- [x] Implement interactive train management menu
- [x] Implement passenger boarding
- [x] Implement passenger removal
- [x] Validate passenger counts and capacity
- [x] Handle invalid Train IDs during passenger removal
- [ ] Handle invalid Train IDs during passenger boarding
- [ ] Improve menu and input validation
- [ ] Implement train registration and removal
- [ ] Implement file handling for persistent storage

### Phase 2 — Railway Simulation

- [ ] Add Sydney railway stations and routes
- [ ] Implement timetables and scheduling
- [ ] Simulate train movements
- [ ] Implement train delay tracking

### Phase 3 — Python and Database Integration

- [ ] Integrate Python with C
- [ ] Design PostgreSQL database
- [ ] Store train, station and timetable records
- [ ] Develop application management functionality

### Phase 4 — Deployment and Dashboard

- [ ] Containerise using Docker
- [ ] Build railway monitoring dashboard
- [ ] Test and document the integrated application

## 🎯 Learning Objectives

This project focuses on developing practical skills in:

- C structures, functions, arrays and pointers
- Programming logic and problem-solving
- Input validation and error handling
- File handling and persistent storage
- Python application development
- Relational database design and SQL
- Integrating multiple programming languages
- Docker and container management
- Git and GitHub version control

## 📌 Project Status

**In Development — Phase 1: C Programming**

The project is being developed incrementally, with each new feature introducing additional programming concepts.

The current focus is completing the C-based train management system before progressing into railway simulation, Python, PostgreSQL and Docker.

Future versions will expand the system from a terminal application into a more comprehensive railway simulation platform.

---

**Disclaimer:** This is an independent educational project inspired by the Sydney railway network. It is not affiliated with, endorsed by or connected to Sydney Trains or Transport for NSW.