cmd_fs/f2fs/f2fs.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o fs/f2fs/f2fs.o fs/f2fs/dir.o fs/f2fs/file.o fs/f2fs/inode.o fs/f2fs/namei.o fs/f2fs/hash.o fs/f2fs/super.o fs/f2fs/inline.o fs/f2fs/checkpoint.o fs/f2fs/gc.o fs/f2fs/data.o fs/f2fs/node.o fs/f2fs/segment.o fs/f2fs/recovery.o fs/f2fs/shrinker.o fs/f2fs/extent_cache.o fs/f2fs/sysfs.o fs/f2fs/debug.o fs/f2fs/xattr.o fs/f2fs/acl.o fs/f2fs/verity.o
