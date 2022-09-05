
# Kotai

A rewrite of [@jcoelho96](https://github.com/jcoelho96)'s [Jotai](http://cuda.dcc.ufmg.br:8080/jcoelho/jotai) wrapper scripts

## Dependencies

### Required:
* Python 3.10[\*](#WhyModernPython) (if your OS/distro doesn't use it by default, check pyenv below)
* Valgrind 3.17 compiled with [CFGgrind](https://github.com/rimsa/CFGgrind#building)
* A working build of [Jotai](http://cuda.dcc.ufmg.br:8080/jcoelho/jotai#building-the-project)

### Recommended:
* [pyenv](https://github.com/pyenv/pyenv#installation)
* [Poetry](https://python-poetry.org/docs/master/#installation) (master, not 1.1)

## Setup

### 1. Clone the repo and enter the project directory

```zsh
git clone git@github.com:condekind/kotai.git && cd kotai
```

### 2. Check if you're running Python 3.10

```zsh
python --version
```
>  <pre>Python 3.10.0</pre>

### 3. \[Optional\] Create and activate a virtualenv (strongly suggested)

Follow the instructions below according to whether you installed the optional dependencies

<hr>

#### 🇵 If you're using pyenv and Poetry

Fetch project dependencies and create virtualenv
```zsh
poetry install
```
Activate virtualenv
```zsh
poetry shell
```

To check if it worked, this:
```zsh
poetry env info
```
should output something like this:
>  <pre>
>  Virtualenv
>  Python:         <strong>3.10.0</strong>
>  Implementation: CPython
>  Path:           /home/condekind/repos/<strong>kotai/.venv</strong>
>  Valid:          True
>  
>  System
>  Platform: linux
>  OS:       posix
>  Python:   /home/condekind/.local/share/pyenv/versions/3.10.0</pre>

<hr>

#### ⛔ If you're not using pyenv and Poetry

Create virtualenv
```zsh
# Change "python" below to your python3.10 binary if 3.10 is not your default
python -m venv .venv
```
Activate virtualenv
```zsh
source .venv/bin/activate
```

To check if it worked, this:
```zsh
which python && "$(which python)" --version
```
should output something like this:
>  <pre>
>  /home/condekind/repos/kotai/<strong>.venv/bin/python</strong>
>  Python <strong>3.10.0</strong></pre>

### 4. Locate Jotai

Create a link to the directory in which you built Jotai at the root of the repo. For this early version it's important that the link is called _build_, but the code for accepting other names is already [baked in](#ChangeJotaiPath).
<pre>
ln -sfiT <strong>...path/to</strong>/jotai/build build && realpath -eL build/lib/Jotai
</pre>


<details>
  <summary name="ChangeJotaiPath">🥧</summary>
  
  > In <code>kotai/plugin/Jotai.py</code>, change `Path('./build/lib/Jotai')` in the class dict `Jotai.exe` to your liking
</details>

### 5. (Re)locate valgrind

During CFGgrind's setup, valgrind was built and installed with `sudo make install`, as per instructions. Therefore it should be the one executed when you run `valgrind`. It is understandable, however, if you don't have or want to use root privileges for this. If that is the case, have a [cookie](#ChangeCFGgrindPath)

<pre>
...
class CFGgrind:

    # ---------------------------- Static attrs. ---------------------------- #

    exe: dict[str, Path] = {
        'valgrind':        Path(<strong>'valgrind'</strong>),
        'cfggrind_asmmap': Path('cfggrind_asmmap'),
        'cfggrind_info':   Path('cfggrind_info'),
    }

    timeout: float = 3.0
...
</pre>
<details>
  <summary name="ChangeCFGgrindPath">🍪</summary>
  
  > In <code>kotai/plugin/CFGgrind.py</code>, change Path('valgrind') in the class dict `Jotai.exe` to your valgrind-with-cfggrind binary
</details>

## Usage

### Options

```zsh
python kotai -h
```
>  <pre>
>  usage: python -m kotai [-h] [-c] -i INPUTDIR [INPUTDIR ...] [-j NPROC] [-J CHUNKSIZE] [-K {int-bounds,big-arr,big-arr-10x,all}] [-L LOGFILE]
>  
>  Jotai options
>  
>  options:
>    -h, --help            show this help message and exit
>    -c, --clean
>    -i INPUTDIR [INPUTDIR ...], --inputdir INPUTDIR [INPUTDIR ...]
>    -j NPROC, --nproc NPROC
>    -J CHUNKSIZE, --chunksize CHUNKSIZE
>    -K {int-bounds,big-arr,big-arr-10x,all}
>    -L LOGFILE, --logfile LOGFILE</pre>

### Running one example with one *constraint* type

```zsh
python kotai -K big-arr -i examples/lengthEquals
```

### Cleaning the generated files

```zsh
python kotai --clean --inputdir examples/lengthEquals
```

### Running on 70k functions with all *constraint* types on 16 cores

```zsh
mkdir -p tmp
```
```zsh
curl -s http://cuda.dcc.ufmg.br/angha/files/functions/seed-from-530k-functions.tar.gz | tar xvz -C tmp
```
```zsh
python kotai -j 16 -K all -i tmp/seed_fns
```

### Viewing results

Unfortunately, results are still not being processed. This means each individual benchmark will have its results in its own directory, but not in an generalized collective view. To have a rough estimative after using kotai, simply counting the indermediate outputs provides some insights. Here's an example, using 210 files from angha:

Number of .c files in benchmarks
```zsh
find benchmarks -maxdepth 1 -name "*.c" | wc -l
```
>  <pre>
>  210</pre>

Number of descriptors generated
```zsh
find benchmarks -wholename "*.d/descriptor" | wc -l
```
>  <pre>
>  210</pre>

Number of constraints generated by constraint big-arr strategy
```zsh
find benchmarks -wholename "*.d/constraint_big-arr" | wc -l
```
>  <pre>
>  210</pre>

Number of .c files generated by Jotai.cpp with a main() entry point
```zsh
find benchmarks -wholename "*.d/*.c" | wc -l
```
>  <pre>
>  205</pre>

Number of binaries successfully compiled by clang with -O0
```zsh
find benchmarks -wholename "*.d/*O0" | wc -l
```
>  <pre>
>  197</pre>

Number of .map files generated by cfggrind_asmmap
```zsh
find benchmarks -wholename "*.d/*.map" | wc -l
```
>  <pre>
>  197</pre>

Number of .cfg files generated by valgrind with --tool=cfggrind
```zsh
find benchmarks -wholename "*.d/*.cfg" | wc -l
```
>  <pre>
>  197</pre>

Number of .info files with stats produced by cfggrind_info
```zsh
find benchmarks -wholename "*.d/*.info" | wc -l
```
>  <pre>
>  158</pre>

This last number implies how many binaries were executed. Interpreting the results, however, requires understanding the output of CFGgrind, e.g., what does "complete: true" / "complete: false" mean? And halt? exit?

```zsh
grep -rl "complete: true" ./benchmarks | wc -l
```
>  <pre>
>  35</pre>

```zsh
grep -rl "complete: false" ./benchmarks | wc -l
```
>  <pre>
>  123</pre>

### Checking progress

Limited logging functionality is available, and will be expanded in the future. For the time being, the default logfile is `output/jotai.log`, opened in "append" mode.

## Troubleshoot

### I'm using pyenv and Poetry, but my virtualenv's Python version is wrong

This could have many causes. Check if <code>$POETRY_HOME/venv/bin/python</code> is a symlink to <code>$PYENV_ROOT/versions/3.10.0/bin/python</code>. If it's not, follow the instructions below.

Try this:
- Get pyenv working normally (read the instructions in their repo to make sure their python wrapper appears in your path before you default python. You have to logout and login for the PATH change to apply, if you're following the default instructions. Switching users won't do! It has to be a logout or reboot.

- [Uninstall poetry](https://github.com/python-poetry/poetry#installation)

- Set your global python version to 3.10 with pyenv
```zsh
pyenv global 3.10.0
```

- Reopen your terminal

- Double check if your version is 3.10 and `python` references pyenv's shim
```zsh
python --version && which python
```

>  <pre>
>  Python 3.10.0
>  /home/condekind/.local/share/pyenv/shims/python</pre>

- Install poetry again

- If <code>$POETRY_HOME/venv/bin/python</code> points to <code>$PYENV_ROOT/versions/3.10.0/bin/python</code>, the problem should be fixed.

<details>
  <summary>🌶️</summary>
  
  > In theory, the project's virtualenv is the only one that has to be running 3.10. However, before 3.10 went stable there were strange issues trying to use pyenv's `python` shim (3.10rc*X*, defined by a local .python-version) as base for creating the virtualenv. It might've been an issue with the 3.10.0rc*X* pre-release string, but Poetry was ignoring the fact that running `python` at that directory should use whatever version <code>.../pyenv/shims/python</code> would report. Poetry instead linked 3.9 in .venv/bin, which was both the system default and the version Poetry was installed with).
</details>

### <a name="WhyModernPython"></a>Why Python 3.10? My distro is too old for this sh\*!

<sub><sup>get it? shebang!</sup></sub>

While you _might_ get away running kotai with older Python versions, we fully intend to use pattern matching, which was introduced in 3.10. If setting up a 3.10 environment was a legitimate challenge, we would consider alternatives, e.g., containers, but its's not. Even without Poetry, pyenv trivializes switching Python versions. Having that said, Jotai already works with docker, so it's our interest to follow that road and ease reproducibility and access to Kotai. It's just not high on the current priority list