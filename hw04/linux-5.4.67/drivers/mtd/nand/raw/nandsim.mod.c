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
	{ 0x84972054, "param_ops_byte" },
	{ 0x74801e4, "param_ops_ulong" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0xa071f2c6, "single_release" },
	{ 0xcec6343e, "seq_read" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0xf7dba81e, "mtd_device_parse_register" },
	{ 0xf08947b2, "mtd_block_markbad" },
	{ 0xdd12a672, "nand_create_bbt" },
	{ 0xf12f47be, "kmem_cache_create" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x3ae6ee76, "filp_open" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x4dfd06b0, "nand_release" },
	{ 0xf330f3f1, "nand_scan_with_ids" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x861d3e50, "kmem_cache_alloc" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfb578fc5, "memset" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x5d9818df, "kernel_write" },
	{ 0xe6f9ebc7, "kernel_read" },
	{ 0xba312d7b, "current_task" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xa99b39c2, "prandom_bytes" },
	{ 0xdcda97fb, "__put_devmap_managed_page" },
	{ 0x3fa55769, "__put_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x7dc69e39, "write_inode_now" },
	{ 0x8ef38868, "unlock_page" },
	{ 0x5dee76cd, "pagecache_get_page" },
	{ 0x1fd1d2a5, "kmem_cache_destroy" },
	{ 0xa07c2c57, "kmem_cache_free" },
	{ 0xe0ea2277, "filp_close" },
	{ 0x999e8297, "vfree" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc4142837, "seq_printf" },
	{ 0x70691c99, "single_open" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mtd,nand");


MODULE_INFO(srcversion, "818BB99526E015E0E3110A7");
