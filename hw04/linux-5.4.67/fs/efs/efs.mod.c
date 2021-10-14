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
	{ 0xbe54c689, "iget_failed" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x272ba86, "generic_file_llseek" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x39e28e12, "generic_fh_to_parent" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x1d09f62f, "block_read_full_page" },
	{ 0x4e8b32e0, "mount_bdev" },
	{ 0xae7efc5b, "page_symlink_inode_operations" },
	{ 0x6a3cb3a, "generic_read_dir" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xb58cd868, "make_kgid" },
	{ 0xf824d270, "__bread_gfp" },
	{ 0xc5850110, "printk" },
	{ 0x89bbfc0f, "d_obtain_alias" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa07c2c57, "kmem_cache_free" },
	{ 0x9dc84671, "set_nlink" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x312f5918, "generic_ro_fops" },
	{ 0x8ef38868, "unlock_page" },
	{ 0xd82a2711, "inode_nohighmem" },
	{ 0x1574c3c6, "__brelse" },
	{ 0xd6d2a096, "inode_init_once" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x861d3e50, "kmem_cache_alloc" },
	{ 0x6fc9ef9a, "make_kuid" },
	{ 0x499cb97, "unlock_new_inode" },
	{ 0xa0fcaaeb, "kill_block_super" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xf12f47be, "kmem_cache_create" },
	{ 0x8b4894bf, "register_filesystem" },
	{ 0x7ede2eec, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x4690d310, "d_splice_alias" },
	{ 0xa88b441f, "sync_filesystem" },
	{ 0x4a0609d9, "sb_set_blocksize" },
	{ 0xd58ad70d, "d_make_root" },
	{ 0xbbfbcb0d, "unregister_filesystem" },
	{ 0xca8f6c91, "init_special_inode" },
	{ 0x9984f62b, "generic_fh_to_dentry" },
	{ 0x5c643c8a, "generic_block_bmap" },
	{ 0xc87adb4d, "iget_locked" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9CECF6F5CF371448E5F7067");
