# task_dpi

## To build:
```
./build.sh
```

## To run:
```
 ./obj_dir/test_execut "options"
```

## Options:
```
1. +arg0=NUM  
2. +file=FILE (one string - one input number arg0)
3. +random_mode=NUM (run "NUM" tests with random arg0)

```


## Example:
```
./obj_dir/test_execut +file=input_file.txt
./obj_dir/test_execut +arg0=0xabababababababab
./obj_dir/test_execut +random_mode=5

```
