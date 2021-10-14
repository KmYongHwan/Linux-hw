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
	{ 0x1fd1d2a5, "kmem_cache_destroy" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7129e5f8, "hex_asc" },
	{ 0x272ba86, "generic_file_llseek" },
	{ 0x9a1e4cc5, "__mark_inode_dirty" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xcb48ab33, "from_kuid_munged" },
	{ 0x815b5dd4, "match_octal" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x7b26f7c9, "generic_delete_inode" },
	{ 0xc4142837, "seq_printf" },
	{ 0x44e9a829, "match_token" },
	{ 0x1d09f62f, "block_read_full_page" },
	{ 0x2f322a0c, "init_user_ns" },
	{ 0x4e8b32e0, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0x6a3cb3a, "generic_read_dir" },
	{ 0xc266be66, "truncate_setsize" },
	{ 0x5db342c2, "from_kgid_munged" },
	{ 0xb58cd868, "make_kgid" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xba312d7b, "current_task" },
	{ 0xf824d270, "__bread_gfp" },
	{ 0xc5850110, "printk" },
	{ 0xa07c2c57, "kmem_cache_free" },
	{ 0x9dc84671, "set_nlink" },
	{ 0xb7d7c500, "sync_dirty_buffer" },
	{ 0x4ae72e08, "truncate_pagecache" },
	{ 0x4e3567f7, "match_int" },
	{ 0x504f092a, "generic_file_read_iter" },
	{ 0x1574c3c6, "__brelse" },
	{ 0xd6d2a096, "inode_init_once" },
	{ 0x861d3e50, "kmem_cache_alloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x8d18a428, "generic_file_mmap" },
	{ 0xbdda74fd, "block_write_full_page" },
	{ 0x6fc9ef9a, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd1bdb31b, "generic_write_end" },
	{ 0xa0fcaaeb, "kill_block_super" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xf12f47be, "kmem_cache_create" },
	{ 0x8b4894bf, "register_filesystem" },
	{ 0x3c2e20be, "generic_file_write_iter" },
	{ 0x64ab325f, "cont_write_begin" },
	{ 0x7d32aa9c, "generic_file_fsync" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x638c7869, "current_time" },
	{ 0x4690d310, "d_splice_alias" },
	{ 0xa88b441f, "sync_filesystem" },
	{ 0x4a0609d9, "sb_set_blocksize" },
	{ 0xd58ad70d, "d_make_root" },
	{ 0x9896f0bf, "mark_buffer_dirty" },
	{ 0xbbfbcb0d, "unregister_filesystem" },
	{ 0x2947182d, "new_inode" },
	{ 0xa7d2d66e, "generic_file_splice_read" },
	{ 0x5c643c8a, "generic_block_bmap" },
	{ 0x5d92c2e, "setattr_prepare" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D9C3DDBDD875653F51F3C7E");
