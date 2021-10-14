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
	{ 0x44e1b7dc, "alloc_pages_current" },
	{ 0x1fd1d2a5, "kmem_cache_destroy" },
	{ 0xbe54c689, "iget_failed" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x15844e58, "sb_min_blocksize" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0x37a1b2f7, "unload_nls" },
	{ 0x272ba86, "generic_file_llseek" },
	{ 0xdcda97fb, "__put_devmap_managed_page" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xa1d986cb, "iget5_locked" },
	{ 0xcb48ab33, "from_kuid_munged" },
	{ 0x9cb39373, "seq_puts" },
	{ 0x5dee76cd, "pagecache_get_page" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x891536ee, "ll_rw_block" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0xc4142837, "seq_printf" },
	{ 0x44e9a829, "match_token" },
	{ 0x2f322a0c, "init_user_ns" },
	{ 0xfb2f8a4, "mktime64" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4e8b32e0, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0xae7efc5b, "page_symlink_inode_operations" },
	{ 0x6a3cb3a, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0x4f07f96b, "__getblk_gfp" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x5db342c2, "from_kgid_munged" },
	{ 0xb58cd868, "make_kgid" },
	{ 0xa976d849, "mpage_readpages" },
	{ 0xf8e5b8db, "mpage_readpage" },
	{ 0x11089ac7, "_ctype" },
	{ 0xba312d7b, "current_task" },
	{ 0xf824d270, "__bread_gfp" },
	{ 0xc5850110, "printk" },
	{ 0x89bbfc0f, "d_obtain_alias" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x5a921311, "strncmp" },
	{ 0xa07c2c57, "kmem_cache_free" },
	{ 0x9dc84671, "set_nlink" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2588cddc, "__wait_on_buffer" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xa07a37f0, "memchr" },
	{ 0x312f5918, "generic_ro_fops" },
	{ 0x4e3567f7, "match_int" },
	{ 0x8ef38868, "unlock_page" },
	{ 0xd82a2711, "inode_nohighmem" },
	{ 0x1574c3c6, "__brelse" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0xd6d2a096, "inode_init_once" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x861d3e50, "kmem_cache_alloc" },
	{ 0x43a8e2b7, "__free_pages" },
	{ 0x6fc9ef9a, "make_kuid" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x49c63523, "load_nls" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x499cb97, "unlock_new_inode" },
	{ 0xa0fcaaeb, "kill_block_super" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf12f47be, "kmem_cache_create" },
	{ 0x8b4894bf, "register_filesystem" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x7ede2eec, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7f0829a1, "load_nls_default" },
	{ 0x4690d310, "d_splice_alias" },
	{ 0xa88b441f, "sync_filesystem" },
	{ 0x4a0609d9, "sb_set_blocksize" },
	{ 0xd58ad70d, "d_make_root" },
	{ 0xb168e339, "ioctl_by_bdev" },
	{ 0xbbfbcb0d, "unregister_filesystem" },
	{ 0xca8f6c91, "init_special_inode" },
	{ 0x3fa55769, "__put_page" },
	{ 0x5c643c8a, "generic_block_bmap" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CFE935A48F43241EC039673");
