# Building on macOS

On macOS you might have problems, because `ghc` and `stack` only support
x86\_64, so you have to use Rosetta 2 for `carp`. That by itself isn't a
problem, but I got `pkg-config` not working randomly, so I had to override
it to just return the "Homebrew Intel" paths:

```sh
#!/bin/sh
echo -D_THREAD_SAFE -I/usr/local/include -L/usr/local/lib -lSDL2
```
