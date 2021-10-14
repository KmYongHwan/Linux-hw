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
	{ 0x272ba86, "generic_file_llseek" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xd7781237, "get_tree_bdev" },
	{ 0xae7efc5b, "page_symlink_inode_operations" },
	{ 0x6a3cb3a, "generic_read_dir" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xf824d270, "__bread_gfp" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xa07c2c57, "kmem_cache_free" },
	{ 0x9dc84671, "set_nlink" },
	{ 0xa07a37f0, "memchr" },
	{ 0x312f5918, "generic_ro_fops" },
	{ 0x8ef38868, "unlock_page" },
	{ 0xd82a2711, "inode_nohighmem" },
	{ 0x1574c3c6, "__brelse" },
	{ 0xd6d2a096, "inode_init_once" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x861d3e50, "kmem_cache_alloc" },
	{ 0xa916b694, "strnlen" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x499cb97, "unlock_new_inode" },
	{ 0xa0fcaaeb, "kill_block_super" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xf12f47be, "kmem_cache_create" },
	{ 0x8b4894bf, "register_filesystem" },
	{ 0x4f541592, "logfc" },
	{ 0x37a0cba, "kfree" },
	{ 0x4690d310, "d_splice_alias" },
	{ 0xa88b441f, "sync_filesystem" },
	{ 0x4a0609d9, "sb_set_blocksize" },
	{ 0xd58ad70d, "d_make_root" },
	{ 0xbbfbcb0d, "unregister_filesystem" },
	{ 0xca8f6c91, "init_special_inode" },
	{ 0xc87adb4d, "iget_locked" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2C4BA2E08C93DFBD3388D5E");
