# Overview

This is a code kata about C++ smart pointers. It is meant to make you familiar with some aspects of C++ smart pointers.

# General Rules

* Please make use of the reference, e.g. https://en.cppreference.com/w/cpp/memory, and all other online or offline
  resources that might be helpful.
* You are free to write new tests, but do not modify existing tests.
* Do not change anything inside `AwefulApi` as this is an external (possibly proprietary) dependency.
* This Kata is designed for people new to smart pointers. Thus, it will mainly talk about `shared_ptr`. Experienced
  users can try to make use of other pointer types, e.g. `unique_ptr`.
* You will need a recent compiler that supports the smart pointer features. If you have no access to such a compiler,
  boost or other libraries offer smart pointers for c++.
  See e.g. https://www.boost.org/doc/libs/1_61_0/libs/smart_ptr/smart_ptr.htm

# Tasks

## Galaxy and System

* Let's start with Galaxies and Systems. The Galaxy contains a vector of raw pointers to Systems.
* Understand why the Galaxy class destructor will cause problems. How could you detect such problems?
* Modify the Galaxy class to use `std::shared_ptr` instead of raw pointers.

### Hints:

* The `std::make_shared<System>()` function is very handy.

## Galaxy and Sprites

* Every Galaxy class should have a nice picture, represented by a Sprite. Sprites are handled by AwefulApi.
* AwefulApi Sprites need to be created by createSprite() and need to be destroyed by destroySprite(), otherwise terrible
  things will happen at runtime.
* Replace the raw pointer which stores the sprite with an `std::shared_ptr`. Of course creation and deletion
  still has to happen via the AwefulApi functions.

## Systems and ships

* The system owns the ships in the system.
* Ships need to know which system they are in.
* Use the correct combination of `std::shared_ptr` and `std::weak_ptr` to represent this relationship correctly with
  smart pointers.

### Hints:

* Which class could benefit from https://en.cppreference.com/w/cpp/memory/enable_shared_from_this ? 
