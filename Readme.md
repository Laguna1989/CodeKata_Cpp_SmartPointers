# General Rules:

* Please make use of the reference,
  e.g. https://en.cppreference.com/w/cpp/memory, and all other online or offline
  resources that might come in helpful.
* You are free to write new tests, but do not modify existing tests.
* Do not change anything inside `AwefulApi`.

# Tasks

## Galaxy and System

* Let's start with Galaxies and Systems. The Galaxy contains a vector of raw
  pointers to Systems.
* Understand why the Galaxy class destructor will cause problems. How could you
  detect such problems?
* Modify the Galaxy class to use smart pointers instead of raw pointers. Think
  about which smart pointer to use.

Hints:

* Galaxy is the sole owner of Systems.
* The `std::make_XYZ<System>()` function is very handy.

## Galaxy and Sprites

* Every Galaxy class should have a nice picture, represented by a Sprite.
  Sprites are handled by AwefulApi.
* AwefulApi Sprites need to be created by createSprite() and need to be
  destroyed by destroySprite(), otherwise terrible things will happen at
  runtime.
* Replace the raw pointer which stores the sprite with an appropriate smart
  pointer. Of course creation and deletion still has to happen via the AwefulApi
  functions.

## Systems and ships

* The system owns the ships in the system.
* Ships need to know which system they are in.
* Use the correct combination of `std::shared_ptr` and `std::weak_ptr` to
  represent this relationship correctly with smart pointers.

Hints:

* which class could benefit
  from https://en.cppreference.com/w/cpp/memory/enable_shared_from_this ? 