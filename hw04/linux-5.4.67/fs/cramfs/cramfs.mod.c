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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xcc545772, "mtd_point" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0x272ba86, "generic_file_llseek" },
	{ 0xdcda97fb, "__put_devmap_managed_page" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x216e3eed, "vmf_insert_mixed" },
	{ 0xd7781237, "get_tree_bdev" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xae7efc5b, "page_symlink_inode_operations" },
	{ 0x6a3cb3a, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xb58cd868, "make_kgid" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x312f5918, "generic_ro_fops" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0xd2ee53aa, "wait_on_page_bit" },
	{ 0x8ef38868, "unlock_page" },
	{ 0x504f092a, "generic_file_read_iter" },
	{ 0xd82a2711, "inode_nohighmem" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x6fc9ef9a, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9c23b4a5, "kill_mtd_super" },
	{ 0x499cb97, "unlock_new_inode" },
	{ 0xa0fcaaeb, "kill_block_super" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x8b4894bf, "register_filesystem" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0x4f541592, "logfc" },
	{ 0x60ac83e, "generic_file_readonly_mmap" },
	{ 0xf54a7fce, "mtd_unpoint" },
	{ 0x250f2a02, "read_cache_page" },
	{ 0x37a0cba, "kfree" },
	{ 0x5d597b48, "remap_pfn_range" },
	{ 0xbb0540aa, "zlib_inflateReset" },
	{ 0x4690d310, "d_splice_alias" },
	{ 0xa88b441f, "sync_filesystem" },
	{ 0xd58ad70d, "d_make_root" },
	{ 0xbbfbcb0d, "unregister_filesystem" },
	{ 0xca8f6c91, "init_special_inode" },
	{ 0x9c6f82fd, "get_tree_mtd" },
	{ 0xa7d2d66e, "generic_file_splice_read" },
	{ 0x3fa55769, "__put_page" },
	{ 0xc87adb4d, "iget_locked" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "mtd");


MODULE_INFO(srcversion, "B70DDCA38FD0722D56ABA8B");
