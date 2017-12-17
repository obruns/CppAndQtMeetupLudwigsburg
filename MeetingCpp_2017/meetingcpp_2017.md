% MeetingCpp 2017 - Trip Report
% Oliver Bruns
% C++/QtMeetup Ludwigsburg, 2017-12-20

---------------------

## Meeting C++
C++ Conference

Berlin

Germany

---------------------

## Links
- [Meeting C++ Home](http://meetingcpp.com)
- [Schedule](http://meetingcpp.com/2017/Schedule.html)
- [Slides (203MiB zip archive)](https://meetingcpp.com/2017/slides_meetingcpp_2017.zip)
- [Videos](https://www.youtube.com/user/MeetingCPP/videos) (none uploaded, yet)
- [Trip Reports](https://meetingcpp.com/2017/#tripreports)
- unofficial notes collection (none?)

---------------------

## Keynotes
> - Better Code: Human Interfaces (Sean Parent)
> - It's complicated! (Kate Gregory)
> - What can C++ offer embedded, what can embedded offer C++? (Wouter van Ooijen)

---------------------

## Noteworthy Talks that I have seen

---------------------

## Talks I should have seen (according to others)
> - Felix Petriconi - [There Is A New Future](http://meetingcpp.com/2017/talks/items/There_Is_A_New_Future.html)
    ([CppCast Episode 105](http://cppcast.com/2017/06/felix-petriconi/))
> - Kiki de Rooij, Peter Bindels - [Dealing with software dependencies](http://meetingcpp.com/2017/talks/items/Dealing_with_software_dependencies.html)
    ([CppCast Episode 98](http://cppcast.com/2017/04/peter-bindels/))
> - Nicholas Ormrod - [Fantastic Algorithms and Where To Find Them](http://meetingcpp.com/2017/talks/items/Fantastic_Algorithms_and_Where_To_Find_Them.html)
> - André Bergner - [Reactive Equations](http://meetingcpp.com/2017/talks/items/Reactive_Equations_.html)

---------------------

## Keynote - Sean Parent Better Code: Human interface

> - "moral imperative to write better code"
> - "huge amount of confusion in the community about MVC (or MVVM)"
> - great talk for UX/UI in general
> - the GMail example
> - algorithms
> - [Sean's other papers and presentations](http://sean-parent.stlab.cc/papers-and-presentations)
> - imperative to declarative; also functional
> - "we all were spoiled by imperative code"

---------------------

## Guy Davidson - std::io2d

### Dragging C++ into the modern era: a proposal for a 2D Graphics API

- [example implementation](https://github.com/mikebmcl/P0267_RefImpl)
  * Linux
  * macOS
  * Windows
- asteroids game

---------------------

## Ivan Čukić - Functional Data Structures

> - "Functional Programming is just a collection of ideas"
> - use sum types to avoid invalid states - std::variant
> - Tennis example
> - "lists *were* popular in Functional Programming"

---------------------

## Phil Nash - Modern C++ Testing with Catch2

- [2014@MeetingC++](https://www.youtube.com/watch?v=C2LcIp56i-8)
- a lot has changed in Catch v1
- [Catch2 came out just the other week](http://www.levelofindirection.com/journal/2017/11/3/catch2-released.html)
- future: [microbenchmarks with Catch!?](https://github.com/catchorg/Catch2/blob/master/projects/SelfTest/UsageTests/Benchmark.tests.cpp)

---------------------

## Joel Falcou - The Three Little Dots and the Big Bad Lambdas

> - inspiration from MetaOCaml
> - templated code but **used** entirely without templates
> - from type-based to injection-based TMP

---------------------

## Keynote - Kate Gregory - Its complicated!

> - [Context: CppCon 2015: Kate Gregory “Stop Teaching C"](https://www.youtube.com/watch?v=YnWhqhNdYyk)
> - one third of the audience is on C++ Slack
> - more than one half has heard of the C++ Core Guidelines
> - about the same has read parts of it
> - less than a quarter has used them to support decisions

## cont'd

> - "use checkers to approach the core guidelines"
> - "never help without asking"

---------------------

## Jason Turner - Practical constexpr

> - this is not a rip-off of [CppCon 2017: Ben Deane & Jason Turner “constexpr ALL the Things!”](https://www.youtube.com/watch?v=PJwd4JLYJJY) he did with Ben Deane
> - magic static!?
> - constexpr implies inline
> - "I like that if it compiles it passed all of our tests"
> - static_assert on constexpr
> - prefer constexpr over static const => "constexpr should be the new static const"

---------------------

## Jens Weller - Beginning with C++ (Panel)

- Penalists
    * Kate Gregory
    * Jason Turner
    * Arne Mertz
    * Rainer Grimm
    * Wouter van Ooijen
- C++ as a first language?
- no conclusion

---------------------

## Kevlin Henney - Declarative Thinking, Declarative Practice

> - declarative programming is a superset of FP
> - [Tim Berners-Lee: Principles of Design](https://www.w3.org/DesignIssues/Principles)
> - `make` as an example of declarative programming
> - "it is not your job to do bookkeeping"
> - the STL almost managed composability but failed due to iterators
> - (ranges TS is going to correct that; then: STL2)

## cont'd

> - the contracts proposal does not give us much (stack example)
> - name const methods differently: pushed, popped
> - use GUT ("good unit tests") rather than TDD
> - "my tests are a data structure"

---------------------

## Juan Pedro Bolívar Puente - The most valuable values

> - [immer: immutable and persistent data structures](https://github.com/arximboldi/immer)
> - [ewig: the eternal editor, ersatz emacs](https://github.com/arximboldi/ewig)
> - overall rather philosophical

---------------------

## Arne Mertz Code Reviews - Why, What, and How

- strong candidate for a code review primer (language-agnostic)
- great input from the audience during Q&A at the end
- LGTM!?
- [blog "Code Reviews: Why?"](https://arne-mertz.de/2017/12/code-reviews-why/)
- [blog "Code Reviews: What?"](https://arne-mertz.de/2017/12/code-reviews-what/)

---------------------

## Alfred Bratterud - True parallelism with no concept of threads

- context (CppCon 2016/2017: Alfred Bratterud)
    * [“Delegate this! Designing with delegates in modern C++”](https://www.youtube.com/watch?v=QMb4RRFrY-o)
    * [“Deconstructing the OS: The devil’s In the side effects”](https://www.youtube.com/watch?v=h7D88U-5pKc)
    * [“#include <os>: from bootloader to REST API with the new C++"](https://www.youtube.com/watch?v=t4etEwG2_LY)

## cont'd

- this is the most advanced talk, go watch the others first!
- the code was not public at the time

---------------------

## Lightning Talks Session 3/3

- Accumulators
- Vendored Builds
- C++ High Perf
- The case for package managers
- The Stand Up
- Type punning done right

---------------------

## Secret Lightning Talks

> - Sean Parent: Tasks in ten
> - Kate Gregory: Five things I realized when I was supposed to die
>    * learn to prioritze: when you have children, sleep whenever they sleep
> - J Guy Davidson: Diversity and Inclusion
> - Rainer Grimm: Lessons learned from publishing
> - Jens Weller: Science

---------------------

## Keynote - Wouter van Ooijen What can C++ offer embedded, what can embedded offer C++?

- [FAIL: abusing git](https://github.com/wovo/hwlib/blob/master/_push.bat)
- the Ariane 5 disaster
- some STM32 code
