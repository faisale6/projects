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
- Train structure using C (`struct`)
- Train ID and capacity storage
- Passenger count tracking
- Available capacity calculation
- Terminal-based train information display
- Multiple train management using arrays of structures
- Automatic train display using a for loop
- Reusable display_header() function

### Planned
- Multiple train management
- Train registration and removal
- Sydney railway stations and routes
- Train movement simulation
- Timetable and scheduling system
- Passenger boarding and departure simulation
- Train delay tracking
- PostgreSQL database integration
- Python-based application controller
- Docker containerisation
- Railway operations dashboard

## 💻 Current Program

The current C application stores information about a single train and calculates its available passenger capacity.

Example output:

```text
=== SYDNEY TRAINS

Train ID: 101
Capacity: 900
Passengers: 350
Available Seats: 550
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

- [x] Create initial C train structure
- [x] Store train information
- [x] Calculate available passenger capacity
- [x] Support multiple trains
- [ ] Implement interactive train management menu
- [ ] Add Sydney railway stations and routes
- [ ] Simulate train movements
- [ ] Integrate Python with C
- [ ] Design PostgreSQL database
- [ ] Containerise using Docker
- [ ] Build railway monitoring dashboard

## 🎯 Learning Objectives

This project focuses on developing practical skills in:

- C structures, functions, arrays and pointers
- Programming logic and problem-solving
- Python application development
- Relational database design and SQL
- Integrating multiple programming languages
- Docker and container management
- Git and GitHub version control

## 📌 Project Status

**In Development — Phase 1: C Programming**

The project is being developed incrementally, with each new feature introducing additional programming concepts.

Future versions will expand the system from a basic terminal application into a more comprehensive railway simulation.

---

**Disclaimer:** This is an independent educational project inspired by the Sydney railway network. It is not affiliated with, endorsed by or connected to Sydney Trains or Transport for NSW.