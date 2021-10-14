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
	{ 0xbe54c689, "iget_failed" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf1007a76, "make_bad_inode" },
	{ 0x272ba86, "generic_file_llseek" },
	{ 0x9a1e4cc5, "__mark_inode_dirty" },
	{ 0x9a34a2b, "crc_itu_t" },
	{ 0xcb48ab33, "from_kuid_munged" },
	{ 0x815b5dd4, "match_octal" },
	{ 0xb2307fab, "block_write_begin" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xc4142837, "seq_printf" },
	{ 0x44e9a829, "match_token" },
	{ 0x55b81fae, "inc_nlink" },
	{ 0x1d09f62f, "block_read_full_page" },
	{ 0x2f322a0c, "init_user_ns" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4e8b32e0, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0x6a3cb3a, "generic_read_dir" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xc266be66, "truncate_setsize" },
	{ 0x5db342c2, "from_kgid_munged" },
	{ 0xb58cd868, "make_kgid" },
	{ 0x30ec9d8a, "__insert_inode_hash" },
	{ 0xa976d849, "mpage_readpages" },
	{ 0xfb578fc5, "memset" },
	{ 0x11089ac7, "_ctype" },
	{ 0xba312d7b, "current_task" },
	{ 0xf824d270, "__bread_gfp" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xc2708aa1, "mpage_writepages" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x5a921311, "strncmp" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xeff83121, "setattr_copy" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xb7d7c500, "sync_dirty_buffer" },
	{ 0x4ae72e08, "truncate_pagecache" },
	{ 0x4e3567f7, "match_int" },
	{ 0x504f092a, "generic_file_read_iter" },
	{ 0x1574c3c6, "__brelse" },
	{ 0xa916b694, "strnlen" },
	{ 0x8d18a428, "generic_file_mmap" },
	{ 0xbdda74fd, "block_write_full_page" },
	{ 0xa3e59772, "truncate_inode_pages_final" },
	{ 0x6fc9ef9a, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd1bdb31b, "generic_write_end" },
	{ 0x499cb97, "unlock_new_inode" },
	{ 0xa0fcaaeb, "kill_block_super" },
	{ 0x53bd49a, "inode_newsize_ok" },
	{ 0x5e95b1cd, "current_umask" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8b4894bf, "register_filesystem" },
	{ 0x3c2e20be, "generic_file_write_iter" },
	{ 0x7ede2eec, "iput" },
	{ 0x7d32aa9c, "generic_file_fsync" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x638c7869, "current_time" },
	{ 0x4690d310, "d_splice_alias" },
	{ 0x4a0609d9, "sb_set_blocksize" },
	{ 0xd58ad70d, "d_make_root" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x9896f0bf, "mark_buffer_dirty" },
	{ 0xbbfbcb0d, "unregister_filesystem" },
	{ 0x2947182d, "new_inode" },
	{ 0xa7d2d66e, "generic_file_splice_read" },
	{ 0xd172461b, "clear_inode" },
	{ 0x19973b71, "d_instantiate" },
	{ 0x5c643c8a, "generic_block_bmap" },
	{ 0xf41f7e33, "clear_nlink" },
	{ 0xc87adb4d, "iget_locked" },
	{ 0x5d92c2e, "setattr_prepare" },
	{ 0xdbfc0b21, "inode_init_owner" },
};

MODULE_INFO(depends, "crc-itu-t");


MODULE_INFO(srcversion, "C24FEBAB97DD9FFB830CD4C");
