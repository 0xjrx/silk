# 🕸️ silk

<div align="center">

*"You wrap me up like silk in the strings"*  
**— Courtney LaPlante, Spiritbox**

[![Windows](https://img.shields.io/badge/Platform-Windows-blue?style=flat-square&logo=windows)](https://www.microsoft.com/windows)
[![C](https://img.shields.io/badge/Language-C-00599C?style=flat-square&logo=c)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Shellcode](https://img.shields.io/badge/Type-Shellcode%20Injection-red?style=flat-square)](https://attack.mitre.org/techniques/T1055/)

</div>

---

## Overview

A simple **PoC** for executing shellcode inside a **fiber**, without requiring APIs such as `CreateThread`.

## Background

I was reading through **Windows Internals Part 1** (great book btw) and stumbled upon so-called **'Fibers'**.

🔹 A **fiber** is an execution unit which is scheduled by the process itself as opposed to the OS scheduler  
🔹 They run within the thread which schedules them, but need **no call** to `CreateThread`  
🔹 My initial thought was *"Well this is interesting, maybe you can also run shellcode with this..."* without triggering common detection patterns and I was right

> ⚠️ This is by no means new information and there are probably already some other PoCs out there but I thought I'd share mine.

## To Do
- [ ] Add **TartarusGate** dynamic syscalls and other evasion stuff

---

<div align="center">
<sub><i>(Also, don't mind the Spiritbox quote, the song reminded me of this)</i> 🎵</sub>
</div>
