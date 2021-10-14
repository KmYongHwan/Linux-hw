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
	{ 0x77179d2e, "param_ops_string" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xa071f2c6, "single_release" },
	{ 0xcec6343e, "seq_read" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0x449f802, "deregister_mtd_blktrans" },
	{ 0x6b36b4f2, "register_mtd_blktrans" },
	{ 0x9cb39373, "seq_puts" },
	{ 0xc4142837, "seq_printf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xca9360b5, "rb_next" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x1f6ca540, "add_mtd_blktrans_dev" },
	{ 0xdf2c2742, "rb_last" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0xb52b78eb, "mtd_block_isbad" },
	{ 0x85df9b6c, "strsep" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xb5b7e8a4, "mtd_blktrans_cease_background" },
	{ 0x5366dccf, "mtd_write" },
	{ 0xb225da10, "mtd_read_oob" },
	{ 0xfb578fc5, "memset" },
	{ 0xece784c2, "rb_first" },
	{ 0x37169bb4, "mtd_read" },
	{ 0x4cd7de4, "mtd_write_oob" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x760a0f4f, "yield" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xff29dadd, "mtd_erase" },
	{ 0xf08947b2, "mtd_block_markbad" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x70691c99, "single_open" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xfc69758f, "del_mtd_blktrans_dev" },
	{ 0x37a0cba, "kfree" },
	{ 0x999e8297, "vfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mtd_blkdevs,mtd");


MODULE_INFO(srcversion, "55E2920964B9B27CB84736E");
