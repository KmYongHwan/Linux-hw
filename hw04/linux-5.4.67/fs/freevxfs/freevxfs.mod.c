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
	{ 0x15844e58, "sb_min_blocksize" },
	{ 0x272ba86, "generic_file_llseek" },
	{ 0xdcda97fb, "__put_devmap_managed_page" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x1d09f62f, "block_read_full_page" },
	{ 0x4e8b32e0, "mount_bdev" },
	{ 0xae7efc5b, "page_symlink_inode_operations" },
	{ 0x6a3cb3a, "generic_read_dir" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xb58cd868, "make_kgid" },
	{ 0xf824d270, "__bread_gfp" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xa07c2c57, "kmem_cache_free" },
	{ 0x9dc84671, "set_nlink" },
	{ 0x5fa3630e, "kmem_cache_create_usercopy" },
	{ 0x312f5918, "generic_ro_fops" },
	{ 0x3cc12a2c, "simple_symlink_inode_operations" },
	{ 0x8ef38868, "unlock_page" },
	{ 0xd82a2711, "inode_nohighmem" },
	{ 0x1574c3c6, "__brelse" },
	{ 0xd6d2a096, "inode_init_once" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x861d3e50, "kmem_cache_alloc" },
	{ 0xa3e59772, "truncate_inode_pages_final" },
	{ 0x6fc9ef9a, "make_kuid" },
	{ 0x499cb97, "unlock_new_inode" },
	{ 0xa0fcaaeb, "kill_block_super" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x8b4894bf, "register_filesystem" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x7ede2eec, "iput" },
	{ 0x250f2a02, "read_cache_page" },
	{ 0x37a0cba, "kfree" },
	{ 0x4690d310, "d_splice_alias" },
	{ 0xa88b441f, "sync_filesystem" },
	{ 0x4a0609d9, "sb_set_blocksize" },
	{ 0xd58ad70d, "d_make_root" },
	{ 0xbbfbcb0d, "unregister_filesystem" },
	{ 0xca8f6c91, "init_special_inode" },
	{ 0x2947182d, "new_inode" },
	{ 0xd172461b, "clear_inode" },
	{ 0x3fa55769, "__put_page" },
	{ 0x5c643c8a, "generic_block_bmap" },
	{ 0xc87adb4d, "iget_locked" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C0692DB6D9E0CCB54D2F575");
