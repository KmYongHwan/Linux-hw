#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x95dc3deb, "blkdev_issue_discard" },
	{ 0x1fd1d2a5, "kmem_cache_destroy" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3a966e1c, "drop_nlink" },
	{ 0xf1007a76, "make_bad_inode" },
	{ 0x272ba86, "generic_file_llseek" },
	{ 0x754d539c, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xcb48ab33, "from_kuid_munged" },
	{ 0x815b5dd4, "match_octal" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xc4142837, "seq_printf" },
	{ 0x44e9a829, "match_token" },
	{ 0x55b81fae, "inc_nlink" },
	{ 0x2f322a0c, "init_user_ns" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4e8b32e0, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0xae7efc5b, "page_symlink_inode_operations" },
	{ 0x6a3cb3a, "generic_read_dir" },
	{ 0x4f07f96b, "__getblk_gfp" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xc266be66, "truncate_setsize" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5db342c2, "from_kgid_munged" },
	{ 0xb58cd868, "make_kgid" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x30ec9d8a, "__insert_inode_hash" },
	{ 0xa976d849, "mpage_readpages" },
	{ 0xfb578fc5, "memset" },
	{ 0x2210d332, "from_kuid" },
	{ 0xf8e5b8db, "mpage_readpage" },
	{ 0xba312d7b, "current_task" },
	{ 0xf824d270, "__bread_gfp" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xf1e046cc, "panic" },
	{ 0xc2708aa1, "mpage_writepages" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0xd4432990, "from_kgid" },
	{ 0xa07c2c57, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9dc84671, "set_nlink" },
	{ 0x2588cddc, "__wait_on_buffer" },
	{ 0xeff83121, "setattr_copy" },
	{ 0xb7d7c500, "sync_dirty_buffer" },
	{ 0x4ae72e08, "truncate_pagecache" },
	{ 0x4e3567f7, "match_int" },
	{ 0x8ef38868, "unlock_page" },
	{ 0x504f092a, "generic_file_read_iter" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xd82a2711, "inode_nohighmem" },
	{ 0x1574c3c6, "__brelse" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0xb301748d, "file_write_and_wait_range" },
	{ 0xd6d2a096, "inode_init_once" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc6cbbc89, "capable" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x861d3e50, "kmem_cache_alloc" },
	{ 0xb05ba321, "generic_block_fiemap" },
	{ 0x8d18a428, "generic_file_mmap" },
	{ 0xbdda74fd, "block_write_full_page" },
	{ 0x3989a913, "sync_blockdev" },
	{ 0xa3e59772, "truncate_inode_pages_final" },
	{ 0x6fc9ef9a, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd1bdb31b, "generic_write_end" },
	{ 0x7bddc467, "__breadahead" },
	{ 0x499cb97, "unlock_new_inode" },
	{ 0xa0fcaaeb, "kill_block_super" },
	{ 0x53bd49a, "inode_newsize_ok" },
	{ 0x5e95b1cd, "current_umask" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xf12f47be, "kmem_cache_create" },
	{ 0x8b4894bf, "register_filesystem" },
	{ 0x3c2e20be, "generic_file_write_iter" },
	{ 0x7ede2eec, "iput" },
	{ 0x64ab325f, "cont_write_begin" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4690d310, "d_splice_alias" },
	{ 0xa88b441f, "sync_filesystem" },
	{ 0x4a0609d9, "sb_set_blocksize" },
	{ 0xd58ad70d, "d_make_root" },
	{ 0x16325294, "__find_get_block" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x9896f0bf, "mark_buffer_dirty" },
	{ 0xbbfbcb0d, "unregister_filesystem" },
	{ 0xca8f6c91, "init_special_inode" },
	{ 0x2947182d, "new_inode" },
	{ 0xb0e602eb, "memmove" },
	{ 0xa7d2d66e, "generic_file_splice_read" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xd172461b, "clear_inode" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0x19973b71, "d_instantiate" },
	{ 0x5c643c8a, "generic_block_bmap" },
	{ 0xf41f7e33, "clear_nlink" },
	{ 0xc87adb4d, "iget_locked" },
	{ 0x5d92c2e, "setattr_prepare" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6894275D7F956A98B4A6CAB");
