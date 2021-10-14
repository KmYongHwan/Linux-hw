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
	{ 0x15844e58, "sb_min_blocksize" },
	{ 0x53b954a2, "up_read" },
	{ 0x37a1b2f7, "unload_nls" },
	{ 0xf1007a76, "make_bad_inode" },
	{ 0x272ba86, "generic_file_llseek" },
	{ 0xdcda97fb, "__put_devmap_managed_page" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x349cba85, "strchr" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xa1d986cb, "iget5_locked" },
	{ 0xcb48ab33, "from_kuid_munged" },
	{ 0x39e28e12, "generic_fh_to_parent" },
	{ 0x856076f4, "block_is_partially_uptodate" },
	{ 0x98e3bbde, "is_bad_inode" },
	{ 0x5dee76cd, "pagecache_get_page" },
	{ 0xa8d9d69d, "generic_file_open" },
	{ 0x2b20a022, "__lock_page" },
	{ 0x884f7711, "__lock_buffer" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xc4142837, "seq_printf" },
	{ 0x80280f8, "buffer_migrate_page" },
	{ 0x2f322a0c, "init_user_ns" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4e8b32e0, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0xe16a6075, "d_add" },
	{ 0x6a3cb3a, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0x4f07f96b, "__getblk_gfp" },
	{ 0xdf2fd6d5, "igrab" },
	{ 0x9c7b8128, "unlock_buffer" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5db342c2, "from_kgid_munged" },
	{ 0xb58cd868, "make_kgid" },
	{ 0x30ec9d8a, "__insert_inode_hash" },
	{ 0xfb578fc5, "memset" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0xd9950a3, "d_add_ci" },
	{ 0xba312d7b, "current_task" },
	{ 0xf824d270, "__bread_gfp" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x944375db, "_totalram_pages" },
	{ 0x89bbfc0f, "d_obtain_alias" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9084b044, "clear_page_erms" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x925493f, "clear_page_orig" },
	{ 0xa07c2c57, "kmem_cache_free" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x9dc84671, "set_nlink" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2588cddc, "__wait_on_buffer" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xb7d7c500, "sync_dirty_buffer" },
	{ 0x8ef38868, "unlock_page" },
	{ 0x504f092a, "generic_file_read_iter" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x1574c3c6, "__brelse" },
	{ 0xd6d2a096, "inode_init_once" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x23b4e0d7, "clear_page_rep" },
	{ 0x861d3e50, "kmem_cache_alloc" },
	{ 0x736b5662, "_raw_read_lock_irqsave" },
	{ 0x8d18a428, "generic_file_mmap" },
	{ 0xa3e59772, "truncate_inode_pages_final" },
	{ 0x8241f82, "create_empty_buffers" },
	{ 0x6fc9ef9a, "make_kuid" },
	{ 0x49c63523, "load_nls" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x499cb97, "unlock_new_inode" },
	{ 0xa0fcaaeb, "kill_block_super" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa16c8613, "_raw_read_unlock_irqrestore" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0xe7a8f47a, "submit_bh" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf12f47be, "kmem_cache_create" },
	{ 0x8b4894bf, "register_filesystem" },
	{ 0x7ede2eec, "iput" },
	{ 0x7812c047, "__vmalloc" },
	{ 0x250f2a02, "read_cache_page" },
	{ 0x37a0cba, "kfree" },
	{ 0x71c86502, "ihold" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7f0829a1, "load_nls_default" },
	{ 0xaa369563, "generic_error_remove_page" },
	{ 0x4690d310, "d_splice_alias" },
	{ 0xc550e94e, "end_buffer_read_sync" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xa88b441f, "sync_filesystem" },
	{ 0x4a0609d9, "sb_set_blocksize" },
	{ 0xd58ad70d, "d_make_root" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x9896f0bf, "mark_buffer_dirty" },
	{ 0xbbfbcb0d, "unregister_filesystem" },
	{ 0x2947182d, "new_inode" },
	{ 0xb0e602eb, "memmove" },
	{ 0xa7d2d66e, "generic_file_splice_read" },
	{ 0x9984f62b, "generic_fh_to_dentry" },
	{ 0xd172461b, "clear_inode" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x3fa55769, "__put_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8785B4C622E9D719031DCC3");
