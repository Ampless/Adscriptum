# Adscriptum
A modern text editor targeted at all Operating Systems, including iOS and Android.

It is built with Carp, a modern LISP that basically works like Adscript would have.

## What is a "modern text editor"?
That's a good question. Some folks could think that we were trying to be the next VS Code,
but that isn't a particularly good guess. Rather, we are trying to be the next Emacs.

Emacs has a lot of problems and has historically been the wrong choice, but if you look at
Doom Emacs now, putting the 200+ MB of RAM usage and horrible performance aside, it is a
really good text editor and, even more importantly, a really good "OS".

But Emacs is legacy, a lot of legacy. So instead of crying over Elisp, we are making a
better alternative to build cool plugins in, like AlMetSys (short for "Algebraic and
geoMetrical System"), a GeoGebra alternative, or yet another Amplissimus.

## Running
Install Carp and SDL2, then run the following command:

```sh
carp -x main.carp
```

### Apple silicon
On ARM64 macOS the GHC Haskell ecosystem is still a mess as of mid 2021. For that reason
you will have to install the AMD64 versions of Stack and Carp, which complicates the
linking, because `carp` tries to use `pkg-config`. For that reason you will have to create
a dummy `pkg-config` to point to the Homebrew Intel installation of SDL2:

```sh
#!/bin/sh
echo -D_THREAD_SAFE -I/usr/local/include -L/usr/local/lib -lSDL2
```

Then you can weld your `PATH` a bit to get it working:

```sh
PATH="$PWD:$PATH" carp -x main.carp
```
