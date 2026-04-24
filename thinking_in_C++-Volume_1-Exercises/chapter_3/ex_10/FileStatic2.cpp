extern int fs;
void func() {
    fs = 100;
}

// When trying to compile this file we receive an error "undefined reference to 'fs'"
// this is because the FS is defined static in the other file, and the static variable
// can be seen only in that file, not outside of it.